#pragma once
#include <vector>
#include "PCB.h"
#include "ReadyQueue.h"
class Dispatcher{
	public:
		void runJob(PCB p);
		Dispatcher(ReadyQueue rq);
	private:
		ReadyQueue rq;
};

