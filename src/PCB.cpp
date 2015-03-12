#include "PCB.h"

PCB::PCB(){
  id = 0;
  timeNeeded = 0;
  timeLeft = 0;
}

PCB::PCB(int id, int timeNeeded, int timeLeft){
  this->id = id;
  this->timeNeeded = timeNeeded;
  this->timeLeft = timeLeft;
}

int PCB::getId(){
  return id;
}

int PCB::getTimeNeeded(){
  return timeNeeded;
}

int PCB::getTimeLeft(){
  return timeLeft;
}

void PCB::setId(int id){
  this->id = id;
}

void PCB::setTimeNeeded(int time){
  timeNeeded = time;
}

void PCB::setTimeLeft(int time){
  timeLeft = time;
}