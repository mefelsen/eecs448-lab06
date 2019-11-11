#include "Test.hpp"
#include "Queue.h"
#include <iostream>

using namespace std;

Test::Test()
{
    
}
    
void Test::start()
{
    cout << "---Starting Test Suite---\n";
    test1();
}

void Test::printresult(bool res)
{
    if(res)
    {
        cout << "PASSED\n";
    }
    else
    {
        cout << "FAILED\n";
    }
}
void Test::test1()
{
    Queue q;
    bool res = false;
    
    if(q.isEmpty() == true)
    {
        res = true;
    }
    
    printresult(res);
}