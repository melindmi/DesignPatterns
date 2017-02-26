#the compiler define as g++ for C++
CC = g++

#compiler flags:
# -g adds debugging information to the executable file
#  # -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall 

#define the cpp source files
SRCS = $(shell find src/ -name \*.cpp)

HDRS = $(shell find src/ -name \*.h)

#define the cpp object files
OBJS = $(SRCS:.cpp=.o)

#define the executable:
TARGET = singleton

all: $(TARGET) 

$(TARGET): $(OBJS) main.o
				$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) main.o

#create object files
$(OBJS): %.o: %.cpp $(HDRS)
		$(CC) $(CFLAGS) -c -o $@ $< 

main.o: main.cpp $(HDRS) 
		$(CC) $(CFLAGS) -Isrc/ -c main.cpp

clean:
	$(RM) *.o src/*.o $(TARGET) 
