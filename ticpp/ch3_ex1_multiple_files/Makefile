all: main.o ch3_ex1.o 
	g++ main.o ch3_ex1.o -o main
 
main.o: main.cpp
	g++ -c main.cpp
 
ch3_ex1.o: ch3_ex1.cpp
	g++ -c ch3_ex1.cpp
 


#~ CXX = g++
#~ CXXFLAGS = -Wall
#~ LDFLAGS =
#~  
#~ TARGET = main
#~ SOURCES = main.cpp ch3_ex1.cpp
#~ OBJECTS = $(SOURCES:.cpp=.o)
#~  
#~ $(TARGET): $(OBJECTS)
#~   $(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJECTS) -o $(TARGET)
#~ %.o: %.cpp
#~   $(CXX) $(CXXFLAGS) -c $< -o $@
#~ clean:
#~   rm -f $(OBJECTS) $(TARGET)
