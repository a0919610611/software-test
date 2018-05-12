TARGET   = commission
TESTTARGET = commission_unittest_hw1 commission_unittest
CCX       ?= g++
CCOV			?= gcov
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
GCOVFLAGS = --coverage
TESTFLAGS = -std=c++17  -pthread

GTEST_DIR = ../../googletest/googletest

CCFLAGS += -isystem $(GTEST_DIR)/include
TESTFLAGS += -isystem $(GTEST_DIR)/include

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

OBJECT =  gtest.a gtest_main.a *.o *.gcov *.gcno *.gcda


all: $(TARGET)

commission.o: commission.cpp
	$(CCX) -c $^  -o $@ $(CCFLAGS) $(GCOVFLAGS)
main.o: main.cpp
	$(CCX) -c $^  -o $@ $(CCFLAGS)

$(TARGET): commission.o main.o
	$(CCX) $^ -o $@ $(CCFLAGS) $(GCOVFLAGS)

gtest-all.o : $(GTEST_SRCS_)
	$(CCX) $(CCFLAGS) -I$(GTEST_DIR) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

commission_unittest_hw1: commission_unittest_hw1.cpp commission.o gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)



test_hw1: commission_unittest_hw1
	./commission_unittest_hw1

test:
	make test_hw1



commission.cpp.gcov: commission.gcno commission.gcda
	$(CCOV) commission.cpp

show-gcov: commission.cpp.gcov
	cat commission.cpp.gcov




clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)
