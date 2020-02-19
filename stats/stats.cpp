/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */

#include "../includes/stats.h"

Stats::Stats(std::vector <PCB> &finished_vector):vex(&finished_vector) {};
void Stats::showAllProcessInfo() {
    for(PCB process : vec){
        cout << "Process 1 Required CPU time:"<<process.required_cpu_time<<
                "  arrived:"<<process.arrival_time<<
                " started:"<<process.start_time<<
                " finished:"<<process.finish_time;
    }
}
Stats::~Stats() //override
    delete vec;
    delete av_wait_time;
    delete av_turnaround_time;
    delete av_response_time;
}
float Stats::get_av_response_time() {
    return av_response_time
}
float Stats::get_av_turnaround_time() {
    return av_turnaround_time
}
float Stats::get_av_wait_time() {
    return av_wait_time;
}
void Stats::calcStats() {
    //TODO update wait time, turnaround time, response time
}