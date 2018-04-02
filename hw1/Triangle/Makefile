TARGET   = triangle
TESTTARGET = triangle_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17 -lgtest -pthread

all: $(TARGET)

$(TARGET): triangle.cpp triangle.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

triangle_unittest: triangle_unittest.cpp triangle.h triangle.cpp
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


.PHONY: clean test


test: triangle_unittest
	./triangle_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

