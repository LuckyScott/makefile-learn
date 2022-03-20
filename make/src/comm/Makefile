
COMM_LIB = libmycomm.a
COMM_LIB_SO = libmycomm.so

LIB_PATH = ../../lib/
BIN_PATH = ../../bin/

CXXFLAGS = -I../../include/ -g -Wall -fPIC

SOURCES = $(wildcard *.cpp)
OBJS = $(SOURCES:%.cpp=%.o)
LDFLAGS = -shared

.PHONY: all clean

all: $(COMM_LIB) $(COMM_LIB_SO)

$(COMM_LIB): $(OBJS)
	$(AR) -crs $@ $^
	@echo "copy files to $(LIB_PATH)"
	@cp -v -f $@ $(LIB_PATH)

$(COMM_LIB_SO): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^
	@echo "copy files to $(LIB_PATH)"
	@cp -v -f $@ $(LIB_PATH)

$(OBJS): %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(COMM_LIB) $(COMM_LIB_SO) $(OBJS)
