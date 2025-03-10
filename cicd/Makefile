CXX = g++
CXXFLAGS = -Wall -g
TARGET = var9

$(TARGET): var9.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).o
	rm $(TARGET).o

var9.o: var9.cpp
	$(CXX) $(CXXFLAGS) -c $(TARGET).cpp
clean:
	rm -f *.o $(TARGET)
