
TARGET := test

BIN_PATH = ../../bin/

CXXFLAGS = -I../../include/ -g -Wall

SOURCES = $(wildcard *.cpp)
OBJS = $(SOURCES:%.cpp=%.o) # : 前后不能有空格
LIBS = -lmycomm
# LIBS = -Wl,-Bstatic -lmycomm -Wl,-Bdynamic -ldl
LDFLAGS = -L../../lib/

.PHONY: all install clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "Start building $(TARGET)"
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)
	$(MAKE) install

# 隐含规则可被自动推导
# 显示定义此规则时, CXXFLAGS 不会被自动推导加上
$(OBJS): %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

install: $(TARGET)
	@cp -v -f $^ $(BIN_PATH)

clean:
	$(RM) $(TARGET) $(OBJS) *.o
