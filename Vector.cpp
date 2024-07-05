#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // create vector
  vector<int> v;
  vector<int> v1(5, 1);
  // size and capacity

  v.push_back(2);
  v.push_back(3);
  v.push_back(5);

  cout << v1.size() << endl;
  cout << v1.capacity() << endl;
  v1.push_back(4);
  cout << v1.size() << endl;
  cout << v1.capacity() << endl;
  vector<int> v3 = {1, 3, 4};

  cout << v3.size() << endl;
  cout << v3.capacity() << endl;
}