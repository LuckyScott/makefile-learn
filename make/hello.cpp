#include <iostream>
#include <cmath>

#include <thread>

constexpr float PI = 3.14159;

void ThreadProc()
{
	int x = 0;
	std::cout << "Thread Process" << std::endl;
}

int main(int argc, char* argv[])
{
	int a = 0;
#ifdef USE_THREAD
	std::cout << "defined use thread: " << USE_THREAD << std::endl;
	std::thread th1(ThreadProc);
	th1.join();
#endif
	std::cout << "Hello C++!" << std::endl;

	auto sq = sqrt(9.0);
	auto s1 = sin(PI / 6); // sin 30 度

	std::cout << "sqrt(9) = " << sq << std::endl;
	std::cout << "sin(pi/6) = " << s1 << std::endl;

	return 0;
}

