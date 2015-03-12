SOURCES= Dispatcher.cpp PCB.cpp ReadyQueue Main.cpp
OBJS = $(subst .cpp, .o, $SOURCES)
CFLAGS=-o Lab2
all: $OBJS
	g++ $CFLAGS $OBJS



