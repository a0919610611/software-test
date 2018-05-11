TARGET   = nextdate
TESTTARGET = nextdate_unittest_hw1 nextdate_unittest
CCX       ?= g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3
GCOVFLAGS = --coverage
TESTFLAGS = -std=c++17 -pthread

GTEST_DIR = ../../googletest/googletest

CCFLAGS += -isystem $(GTEST_DIR)/include
TESTFLAGS += -isystem $(GTEST_DIR)/include

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
				                $(GTEST_DIR)/include/gtest/internal/*.h

OBJECT =  gtest.a gtest_main.a *.o *.gcov *.gcno *.gcda


all: $(TARGET)

nextdate.o : nextdate.cpp
		$(CCX) -c $^  -o $@ $(CCFLAGS) $(GCOVFLAGS)

main.o: main.cpp
		$(CCX) -c $^  -o $@ $(CCFLAGS)

$(TARGET): nextdate.o main.o
		$(CCX) $^ -o $@ $(CCFLAGS) $(GCOVFLAGS)

gtest-all.o : $(GTEST_SRCS_)
	        $(CCX) $(CCFLAGS) -I$(GTEST_DIR) -c \
				            $(GTEST_DIR)/src/gtest-all.cc

gtest.a : gtest-all.o
	        $(AR) $(ARFLAGS) $@ $^

nextdate_unittest_hw1: nextdate_unittest_hw1.cpp nextdate.o  gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)




test_hw1: nextdate_unittest_hw1
	./nextdate_unittest_hw1

test:
	make test_hw1

nextdate.cpp.gcov: nextdate.gcno nextdate.gcda
	gcov nextdate.cpp

show-gcov: nextdate.cpp.gcov
	cat nextdate.cpp.gcov

clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)
