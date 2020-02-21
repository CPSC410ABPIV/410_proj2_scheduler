/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */
#include <vector>
#include "../includes/scheduler_RR.h"

using namespace std;
bool Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p) {
    return  Scheduler::time_to_switch_processes(tick_count, p)
            ||(p.required_cpu_time - p.remaining_cpu_time) % time_slice == 0;
}
void Scheduler_RR::sort() {
    //do nothing
}

