/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */

#include "../includes/scheduler.h"

using namespace std;
void Scheduler::add(PCB p) {
    ready_q->push(p);
}
PCB Scheduler::getNext() {
    if(ready_q->empty()){
        return PCB();
    }
    PCB process = ready_q->front();ready_q->pop();//needs to pop?
    return process;
}
bool Scheduler::isEmpty() {
    return ready_q->empty();
}
bool Scheduler::time_to_switch_processes(int tick_count, PCB &p) {
    return  p.remaining_cpu_time <= 0;
}




