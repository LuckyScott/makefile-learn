#include <iostream>
#include <thread>

#include "Account.h"


void ThreadProc()
{
	std::cout << "Thread Process" << std::endl;
}

int main(int argc, char* argv[])
{
	std::thread th1(ThreadProc);
	std::cout << "Hello C++!" << std::endl;

	th1.join();

	Account acc(100010);

	acc.Show();

	return 0;
}

