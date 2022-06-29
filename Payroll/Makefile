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

OBJECTS = payrolltest.o payrollmanager.o hourlyemployee.o manager.o employee.o

payroll.exe: $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o payroll.exe $(LDLIBS)

payrolltest.o: payrolltest.cpp payrollmanager.h 

payrollmanager.o: payrollmanager.cpp payrollmanager.h

hourlyemployee.o: hourlyemployee.cpp hourlyemployee.h employee.h

manager.o: manager.cpp manager.h employee.h

employee.o: employee.cpp employee.h

.PHONY: clean
clean:
	rm -f *.o core *.exe

.PHONY: all
all: clean payroll.exe