TARGET   = comission
TESTTARGET = comission_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17 -lgtest -pthread

all: $(TARGET)

$(TARGET): comission.cpp comission.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

comission_unittest: comission_unittest.cpp comission.h comission.cpp
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


.PHONY: clean test


test: comission_unittest
	./comission_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

