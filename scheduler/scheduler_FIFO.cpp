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
    return  p.remaining_cpu_time <= 0;
}
void Scheduler_FIFO::sort() {
    //do nothing in theory
}


