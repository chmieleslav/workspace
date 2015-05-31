#~ all: Bitwise.o printBinary.o 
#~ 	g++ Bitwise.o printBinary.o -o Bitwise
#~  
#~ Bitwise.o: Bitwise.cpp
#~ 	g++ -c Bitwise.cpp
#~  
#~ printBinary.o: printBinary.cpp
#~ 	g++ -c printBinary.cpp
#~  


CXX = g++
CXXFLAGS = -Wall
LDFLAGS =
 
TARGET = Bitwise
SOURCES = Bitwise.cpp printBinary.cpp
OBJECTS = $(SOURCES:.cpp=.o)
 
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJECTS) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS) $(TARGET)

