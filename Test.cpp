#include "Test.hpp"
#include "Queue.h"
#include <vector>
#include <iostream>

using namespace std;

Test::Test()
{

}
void Test::start()
{
    cout << "---Starting Test Suite---\n";
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
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
    cout << "Test1 - Create Empty Queue. IsEmpty() return true: ";
    Queue q;
    bool res = false;

    if(q.isEmpty() == true)
    {
        res = true;
    }

    printresult(res);
}

void Test::test2()
{
  cout << "Test2 - Push an integer. Peek front returns that integer: ";
  Queue q;
  bool res = false;
  q.enqueue(2);
  if(q.peekFront() == 2)
  {
    res = true;
  }

  printresult(res);
}
void Test::test3()
{
  cout << "Test3 - Enqueue an integer, Dequeue an integer. Peek Front throws runtime error: ";
  Queue q;
  bool res = false;
  q.enqueue(2);
  q.dequeue();
  try
  {
    if(q.peekFront() == NULL)
    {
      res = true;
    }
  }
  catch(std::runtime_error e)
  {
    res = true;

  }
  printresult(res);
}
void Test::test4()
{
  cout << "Test4 - Enqueue an integer, Dequeue an integer, isEmpty() returns true: ";
  Queue q;
  bool res = false;

  q.enqueue(2);
  q.dequeue();
  if(q.isEmpty())
  {
    res = true;
  }

  printresult(res);
}

void Test::test5()
{
  cout << "Test5 - Enqueue 3 integers. Peek Front returns first enqueued integer: ";
  Queue q;
  bool res = false;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  if(q.peekFront() == 1)
  {
    res = true;
  }
  printresult(res);
}

void Test::test6()
{
  cout << "Test6 - Enqueue 3 integers. Dequeue 1 integer. Peek front returns second enqueued integer: ";
  Queue q;
  bool res = false;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.dequeue();
  if(q.peekFront() == 2)
  {
    res = true;
  }
  printresult(res);
}

void Test::test7()
{
  cout << "Test7 - After peekFront(), the queue is unchanged: ";
  Queue q;
  bool res = true;

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.peekFront();

  if(q.peekFront() != 1)
  {
    res = false;
  }

  printresult(res);
}

void Test::test8()
{
  cout <<"Test8 - peekFront() throws runtime error on empty queue: ";
  Queue q;
  bool res = false;
  try
  {
    q.peekFront();
  }
  catch(std::runtime_error e)
  {
      res = true;
  }

  printresult(res);
}

void Test::test9()
{
  cout<<"Test9 - Push integer into queue. isEmpty() returns false: ";
  Queue q;
  bool res = false;
  q.enqueue(1);

  if(!q.isEmpty())
  {
    res = true;
  }
  printresult(res);
}
void Test::test10()
{
  cout << "Test10 - ~Queue() deletes all entries in queue: ";
  Queue q;
  bool res = false;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.~Queue();

  if(q.isEmpty())
  {
    res = true;
  }
  printresult(res);
}
