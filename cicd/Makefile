CXX = g++
CXXFLAGS = -Wall -g
TARGET = var9

main: $(TARGET).o main.o test.o
	$(CXX) $(CXXFLAGS) -o ../usr/bin/main main.o $(TARGET).o
	$(CXX) $(CXXFLAGS) -o ../usr/bin/test test.o $(TARGET).o

$(TARGET).o: 
	$(CXX) $(CXXFLAGS) -c ../src/$(TARGET).cpp

main.o:
	$(CXX) $(CXXFLAGS) -c ../src/main.cpp
	
test.o:
	$(CXX) $(CXXFLAGS) -c ../src/test.cpp
	
clean:
	rm -f *.o $(TARGET) test 
