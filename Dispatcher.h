#pragma once
#include <vector>

class Dispatcher{
	public:
		void runJob(PCB p);
		Dispatcher(ReadyQueue rq);
	private:
		ReadyQueue rq;
};

