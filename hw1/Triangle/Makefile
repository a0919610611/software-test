TARGET   = triangle
CC       = g++
CCFLAGS   = -std=c++17 -Wall -Wextra -pedantic -g3

all: $(TARGET)

$(TARGET): triangle.cpp triangle.h
	$(CC) $^ -o $(TARGET) $(CCFLAGS) $(LIBS)


.PHONY: clean

clean:
	$(RM) -f $(TARGET) $(OBJECT)

