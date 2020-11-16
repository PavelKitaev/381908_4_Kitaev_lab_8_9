#include <iostream>
//#include "TList.h"
//#include "Stack.h"
#include "Queue.h"

int main()
{
  TQueueList<int> s;
  s.Push(10);
  s.Push(11);
  cout << s.Get();
  return 0;
}
