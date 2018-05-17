TARGET   = commission
TESTTARGET = commission_unittest_hw1 commission_unittest \
						commission_unittest_pathC0 \
						commission_unittest_pathC1 \
						commission_unittest_pathC2 \
						commission_unittest_pathMCDC
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

commission_unittest_pathC0: commission_unittest_pathC0.cpp commission.o gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)

commission_unittest_pathC1: commission_unittest_pathC1.cpp commission.o gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)

commission_unittest_pathC2: commission_unittest_pathC2.cpp commission.o gtest.a
		$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)

commission_unittest_pathMCDC: commission_unittest_pathMCDC.cpp commission.o gtest.a
		$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)


test_hw1: commission_unittest_hw1
	./commission_unittest_hw1


test_C0: commission_unittest_pathC0
	./commission_unittest_pathC0

test_C1: commission_unittest_pathC1
	./commission_unittest_pathC1

test_C2: commission_unittest_pathC2
	./commission_unittest_pathC2

test_MCDC: commission_unittest_pathMCDC
	./commission_unittest_pathMCDC


test_path: test_C0 test_C1 test_C2 test_MCDC 




test:
	make test_hw1
	make test_path



commission.cpp.gcov: commission.gcno commission.gcda
	$(CCOV) -bf commission.cpp

show-gcov: commission.cpp.gcov
	cat commission.cpp.gcov




clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)
