#include <iostream>
using namespace std;
// printing the elements of arrays using recusrion in forward
void print(int arr[], int index)
{
  if (index == -1)
  {
    return;
  }
  print(arr, index - 1);
  cout << arr[index] << " ";
}
// printing in reverse order
void printrev(int arr[], int index)
{

  if (index == -1)
  {
    return;
  }

  cout << arr[index] << " ";
  printrev(arr, index - 1);
}

// sum of elements of arr
int sum(int arr[], int idx, int n)
{
  if (idx == n)
  {
    return 0;
  }
  return arr[idx] + sum(arr, idx + 1, n);
}
// minimum element of  array
int minofarr(int arr[], int idx, int n)
{
  if (idx == n - 1)
  {
    return arr[idx];
  }

  return min(arr[idx], minofarr(arr, idx + 1, n));
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, 4);
  cout << endl;
  printrev(arr, 4);
  cout << endl;
  cout << sum(arr, 0, 5) << endl;
  cout << minofarr(arr, 0, 5);

  return 0;
}
