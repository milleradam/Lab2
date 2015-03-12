#pragma once
#include <vector>
#include "PCB.h"

class ReadyQueue{
	private:
		std::vector<PCB> q; //vector for sorting convenience 
		void (*schedAlg)(std::vector<PCB> q); //scheduling algorith for a run. Will sort the ready queue appropriately.

	public:
		void addToQueue(PCB p);
		void setAlg(void(*alg)(std::vector<PCB> q));
		ReadyQueue();
};