#include "Account.h"
#include <iostream>

Account::Account(int uid) : userId(uid) {}

void Account::Show() 
{
    std::cout << "Account userId is:" << userId << std::endl;
}
