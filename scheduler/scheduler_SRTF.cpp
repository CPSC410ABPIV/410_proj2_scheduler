/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

#include "../includes/scheduler_SRTF.h"

bool Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p) {
    //TODO probs change behavior
    return Scheduler::time_to_switch_processes(tick_count, p);
}
void Scheduler_SRTF::sort() {
    //TODO definitely do something
}

