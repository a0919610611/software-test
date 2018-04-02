TARGET   = triangle
TESTTARGET = triangle_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17 -lgtest -pthread

all: $(TARGET)

$(TARGET): triangle.cpp triangle.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)


.PHONY: clean test

test: triangle_unittest.cpp triangle.h
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


clean:
	$(RM) -f $(TARGET) $(OBJECT)

