TARGET   = triangle
TESTTARGET = triangle_unittest_hw1 triangle_unittest_path
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



triangle.o: triangle.cpp
	$(CCX) -c $^  -o $@ $(CCFLAGS) $(GCOVFLAGS)

main.o: main.cpp
	$(CCX) -c $^  -o $@ $(CCFLAGS)

$(TARGET): triangle.o main.o
	$(CCX) $^ -o $@ $(CCFLAGS)


gtest-all.o : $(GTEST_SRCS_)
		 $(CCX) $(CCFLAGS) -I$(GTEST_DIR) -c \
					            $(GTEST_DIR)/src/gtest-all.cc

gtest.a : gtest-all.o
		 $(AR) $(ARFLAGS) $@ $^




triangle_unittest_hw1: triangle_unittest_hw1.cpp triangle.o gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)

triangle_unittest_path: triangle_unittest_path.cpp triangle.o gtest.a
	$(CCX) $^ -o $@ $(TESTFLAGS) $(GCOVFLAGS)

test_hw1: triangle_unittest_hw1
	./triangle_unittest_hw1

test_path: triangle_unittest_path
	./triangle_unittest_path

test:
	make test_hw1
	make test_path



triangle.cpp.gcov: triangle.gcno triangle.gcda
	$(CCOV) triangle.cpp

show-gcov: triangle.cpp.gcov
	cat triangle.cpp.gcov

clean:
	$(RM) -f $(TARGET) $(TESTTARGET) $(OBJECT)
