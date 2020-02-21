/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */

#include "../includes/dispatcher.h"
PCB Dispatcher::get_from_CPU() {
    return cpu->get_process_off_core();//returns process on core or uninitialized process
}
void Dispatcher::put_on_CPU(PCB &process) {
    if(!isValidJobOnCPU()){
        cpu->put_process_on_core(process);
    }
}
bool Dispatcher::isValidJobOnCPU() {
    is_valid_job_on_cpu = !cpu->get_COPY_of_Current_Process().isEmpty();
    return is_valid_job_on_cpu;
}
