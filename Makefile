SOURCES= Main.cpp Dispatcher.cpp PCB.cpp ReadyQueue.cpp
OBJS = Main.o Dispatcher.o PCB.o ReadyQueue.o
all: Dispatcher.o PCB.o ReadyQueue.o Main.o
	g++ $(CFLAGS) $(OBJS)

Dispatcher.o: Dispatcher.cpp Dispatcher.h
	g++ -c Dispatcher.cpp
PCB.o: PCB.cpp PCB.h
	g++ -c PCB.cpp
ReadyQueue.o: ReadyQueue.cpp ReadyQueue.h
	g++ -c ReadyQueue.cpp
Main.o: Main.cpp
	g++ -c Main.cpp

