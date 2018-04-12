TARGET   = triangle
TESTTARGET = triangle_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17  -pthread

GTEST_DIR = ../../googletest/googletest
CCFLAGS += -isystem $(GTEST_DIR)/include

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
				  $(GTEST_DIR)/include/gtest/internal/*.h

OBJECT =  gtest.a gtest_main.a *.o

all: $(TARGET)


gtest-all.o : $(GTEST_SRCS_)
	        $(CC) $(CCFLAGS) -I$(GTEST_DIR) -c \
				            $(GTEST_DIR)/src/gtest-all.cc

gtest.a : gtest-all.o
	        $(AR) $(ARFLAGS) $@ $^

$(TARGET): triangle.cpp triangle.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

triangle_unittest: triangle_unittest.cpp triangle.h triangle.cpp gtest.a
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS)


.PHONY: clean test


test: triangle_unittest
	./triangle_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

