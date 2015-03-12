#include "Dispatcher.h"

Dispatcher::Dispatcher(ReadyQueue rq){
	this->rq = rq;
}

void Dispatcher::runJob(PCB p){
  int runtime = p.getTimeNeeded();
  
}