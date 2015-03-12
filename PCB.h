#pragma once
enum State {READY, STOPPED, RUNNING, FINISHED};
class PCB{
	private:
		int timeNeeded;
		int id;
		int timeLeft;
		State state;
	public:
		PCB();
		PCB(int id, int timeNeeded, int timeLeft);
		int getId();
		int getTimeNeeded();
		int getTimeLeft();
		
		void setId(int id);
		void setTimeNeeded(int time);
		void setTimeLeft(int time);
};