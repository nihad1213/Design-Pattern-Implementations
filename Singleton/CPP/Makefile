CXX: g++
CXXFLAGS: -std=c++26 -Wall -Wextra -pedantic
TARGET: program

SRCS = main.cpp Logger.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Logger.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

# Run the program
run: $(TARGET)
	./$(TARGET)
