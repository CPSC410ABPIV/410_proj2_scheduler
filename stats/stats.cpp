/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *      Editor: Allan Pedin
 */
#include "../includes/stats.h"

using namespace std;
Stats::Stats(std::vector <PCB> &finished_vector) {
    vec = &finished_vector;
    av_wait_time = 0;
    av_turnaround_time = 0;
    av_response_time = 0;
    calcStats();
};
void Stats::showAllProcessInfo() {
    for(PCB process : *vec){
        cout << "Process 1 Required CPU time:"<<process.required_cpu_time<<
                "  arrived:"<<process.arrival_time<<
                " started:"<<process.start_time<<
                " finished:"<<process.finish_time<<"\n";
    }
}
float Stats::get_av_response_time() {
    return av_response_time;
}
float Stats::get_av_turnaround_time() {
    return av_turnaround_time;
}
float Stats::get_av_wait_time() {
    return av_wait_time;
}
void Stats::calcStats() {
    float count_wait_time = 0;
    float count_turnaround_time = 0;
    float count_response_time = 0;
    for(PCB process : *vec){
        count_wait_time +=  process.finish_time
                            -process.arrival_time
                            -process.required_cpu_time;
        count_turnaround_time += process.finish_time
                                -process.arrival_time;
        count_response_time +=  process.start_time
                                -process.arrival_time;
    }
    av_wait_time = count_wait_time/vec->size();
    av_turnaround_time = count_turnaround_time/vec->size();
    av_response_time = count_response_time/vec->size();
}