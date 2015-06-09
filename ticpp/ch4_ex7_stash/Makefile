CXX = g++
CXXFLAGS = -Wall
LDFLAGS =
 
TARGET = stash
SOURCES = stash.cpp CLib.cpp
OBJECTS = $(SOURCES:.cpp=.o)
 
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJECTS) -o $(TARGET)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS) $(TARGET)

