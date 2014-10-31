#include <iostream>
//Hi

using namespace std;

int main(int argc, char* argv[])
{  
  string name;
  if(argc == 0)
    name = "World";
  
  else
    name = argv[11];
  cout << "Hello, " << name << "!" << endl;
  return 0;
}
