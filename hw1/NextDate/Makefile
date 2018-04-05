TARGET   = nextdate
TESTTARGET = nextdate_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17 -lgtest -pthread

all: $(TARGET)

$(TARGET): nextdate.cpp nextdate.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

nextdate_unittest: nextdate_unittest.cpp nextdate.h nextdate.cpp
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


.PHONY: clean test


test: nextdate_unittest
	./nextdate_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

