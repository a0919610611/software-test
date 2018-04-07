TARGET   = commission
TESTTARGET = commission_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17 -lgtest -pthread

all: $(TARGET)

$(TARGET): commission.cpp commission.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

commission_unittest: commission_unittest.cpp commission.h commission.cpp
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


.PHONY: clean test


test: commission_unittest
	./commission_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

