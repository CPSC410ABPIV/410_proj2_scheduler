/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */

#include "../includes/scheduler_FIFO.h"

bool Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p) {
    //TODO change behavior probs
    return Scheduler::time_to_switch_processes();
}
void Scheduler_FIFO::sort() {
    //do nothing in theory
}


