# Makefile

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude
SRCDIR = src
OBJDIR = src
TARGET = RPGInventorySystem

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJDIR)/*.o $(TARGET)
