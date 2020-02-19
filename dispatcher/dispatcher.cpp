/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */

#include "../includes/dispatcher.h"
PCB Dispatcher::get_from_CPU() {
    PCB retVal;//TODO
    return retVal;
}
void Dispatcher::put_on_CPU(PCB &process) {
    cpu->put_process_on_core(process);
}
bool Dispatcher::isValidJobOnCPU() {
    return cpu->get_COPY_of_Current_Process().isEmpty();//Sounds right
}
