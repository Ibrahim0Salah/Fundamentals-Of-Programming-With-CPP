#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 19; i += 2)
  {
    if (i == 10 || i == 12)
      continue;
    cout << i << "\n";
  }

  cout << "=================\n";

  int i = 0;
  while (i < 19)
  {
    if (i < 10 || i > 12)
    {
      cout << i << "\n";
    };

    i += 2;
  };

  return 0;
}