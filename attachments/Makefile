# Program for compiling C++ programs
CXX = g++

# Extra flags to give to the compiler
CXXFLAGS = -Wall

# Extra flags to give to compilers when they are supposed to invoke the linker,
# ld, such as -L.
# instead
LDFLAGS =

# Library flags or names given to compilers when they are supposed to invoke
# the linker, ld.  Non-library linker flags, such as -L, should go in the
# LDFLAGS variable
LDLIBS =

# make compiles with an implicit rule:
# $(CXX) -c $(CXXFLAGS) <the .cpp file> 

OBJECTS = flight.o aircraft.o jumbo.o commuter.o hopper.o menu.o

airline.out: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o airline.out $(LDLIBS)

aircraft.o: aircraft.cpp aircraft.h flight.h

flight.o: flight.cpp flight.h

jumbo.o: jumbo.cpp jumbo.h aircraft.h flight.h

commuter.o: commuter.cpp commuter.h aircraft.h flight.h

hopper.o: hopper.cpp hopper.h aircraft.h flight.h

menu.o: menu.cpp 


.PHONY: clean
clean:
	rm -f *.o core *.out

.PHONY: all
all: clean airline.out

