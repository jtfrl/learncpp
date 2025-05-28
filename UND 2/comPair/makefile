# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Files
SRC = main.cpp
HEADER = par.h
TARGET = main

# Default target
all: $(TARGET)

# Build main executable
$(TARGET): $(SRC) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

# Clean build artifacts
clean:
	rm -f $(TARGET)

.PHONY: all clean