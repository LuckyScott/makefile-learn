TARGET := hello

SOURCE_FILES := $(wildcard *.cpp)
OBJS := $(SOURCE_FILES:%.cpp=%.o)

CFLAGS := -g -Og -Wall
CXXFLAGS := -I../include
LIBS := -lpthread

$(TARGET): $(OBJS)
	#@echo $(OBJS)
	$(CXX) -o $@ $^ $(LIBS)
