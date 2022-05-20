 #include "snake.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  try
  {
    Snake s;
    return s.exec();
  } catch (exception &e)
  {
    cerr << e.what() << endl;
    return 1;
  }
}
