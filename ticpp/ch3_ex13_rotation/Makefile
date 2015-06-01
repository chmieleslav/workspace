CXX = g++
CXXFLAGS = -Wall
LDFLAGS =
 
TARGET = Bitwise
SOURCES = Bitwise.cpp Rotation.cpp printBinary.cpp
OBJECTS = $(SOURCES:.cpp=.o)
 
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJECTS) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS) $(TARGET)

