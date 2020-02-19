/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */

#include "../includes/scheduler.h"

using namespace std;
Scheduler::~Scheduler() {//Override
    delete ready_q;
    delete preemptive;
    delete time_slice;
}
void Scheduler::add(PCB p) {
    //TODO actually do something
}
PCB Scheduler::getNext() {
    PCB process;
    return process;//TODO actually do something
}
bool Scheduler::isEmpty() {
    return false;//TODO actually do something
}
bool Scheduler::time_to_switch_processes(int tick_count, PCB &p) {
    return false;//TODO actually do something
}




