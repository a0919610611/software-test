TARGET   = commission
TESTTARGET = commission_unittest
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
TESTFLAGS = -std=c++17  -pthread

GTEST_DIR = ../../googletest/googletest

CCFLAGS += -isystem $(GTEST_DIR)/include

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

OBJECT =  gtest.a gtest_main.a *.o


all: $(TARGET)

$(TARGET): commission.cpp commission.h main.cpp
	$(CC) $^ -o $(TARGET) $(CCFLAGS)

gtest-all.o : $(GTEST_SRCS_)
	$(CC) $(CCFLAGS) -I$(GTEST_DIR) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

commission_unittest: commission_unittest.cpp commission.h commission.cpp gtest.a
	$(CC) $^ -o $(TESTTARGET) $(TESTFLAGS) $(CCFLAGS)






test: commission_unittest
	./commission_unittest


clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)

