/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */
#include <vector>
#include <algorithm>
#include "../includes/scheduler_SRTF.h"

bool Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p) {
    sort();
    bool retVal = Scheduler::time_to_switch_processes(tick_count, p)
                  || ready_q->front().remaining_cpu_time < 0
                  || ready_q->front().remaining_cpu_time <= p.remaining_cpu_time;
    return retVal;
}
/**comparator function for sorting PCB vector*/
bool compareFunction(PCB one, PCB two){
    return one.remaining_cpu_time<two.remaining_cpu_time;
}
void Scheduler_SRTF::sort() {
    std::vector<PCB> ready_Vector;
    while(ready_q->empty()==false){//Convert to Vector
        ready_Vector.push_back(ready_q->front());
        ready_q->pop();
    }
    std::sort(ready_Vector.begin(),ready_Vector.end(),compareFunction);//Sort
    for(PCB process : ready_Vector){//Revert back to queue
        ready_q->push(process);
    }
}

