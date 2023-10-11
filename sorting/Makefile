CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = myprogram

all: $(TARGET)

$(TARGET): bubble.o bubble_sort.o
		$(CXX) $(CXXFLAGS) -o $(TARGET) bubble.o bubble_sort.o

bubble.o: bubble.cpp functions.h
		$(CXX) $(CXXFLAGS) -c bubble.cpp

bubble_sort.o: bubble_sort.cpp functions.h
		$(CXX) $(CXXFLAGS) -c bubble_sort.cpp

clean:
		rm -f $(TARGET) *.o

