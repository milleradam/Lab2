SOURCES= $(wildcard src/*.cpp)
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))
CC=g++


build: $(OBJECTS)
	$(CC) $(OBJECTS)
$(OBJECTS): src/%.o : src/%.cpp
	$(CC) -c $< -o $@
	
clean:
	$(shell rm -f src/*.o)