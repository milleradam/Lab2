SOURCES= Main.cpp Dispatcher.cpp PCB.cpp ReadyQueue
OBJS = $(subst .cpp, .o, $(SOURCES))
CFLAGS=-o Lab2
all: $(OBJS)
	g++ $(CFLAGS) $(OBJS)

$(OBJS): %.o

%.o : %.cpp
	g++ -c $<

