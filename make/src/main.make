TARGET = main
CPPFILES = main.cpp Account.cpp
OBJS = $(CPPFILES:%.cpp=%.o)

.PHONY: all clean

all: $(TARGET)

# 此处include 相当于c++ 中的 include, 将文件的内容在当前位置展开
# 如 main.d 的内容为 main.o: main.cpp Account.h
# 则 main.o: main.cpp Account.h 将被展开到此处
-include $(CPPFILES:.cpp=.d)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ -lpthread

%.d: %.cpp
	@echo "generate *.d"
	$(CXX) -MM -MF $*.d $<

# 如果有两个或两个以上规则具有相同的目标，
# 则在这些规则中，任一规则中的依赖文件的更新都会且仅会导致最后一个规则中的命令被执行，
# 前面规则的命令被忽略。
# 因前面 include 了 .d 文件，如果 Account.h 有更新，则会触发对应的 .o 规则
# 最后执行的是此处的规则
%.o: %.cpp
	@echo "compile cpp to .o OOOOO"
	$(CXX) -g -c $<

clean:
	$(RM) $(TARGET) $(OBJS)
