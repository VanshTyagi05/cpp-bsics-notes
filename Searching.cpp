#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{

  int start = 0, end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = (start+end)/2;
    if (arr[mid] == key)
    {
      cout << "Got it at index: " << mid;

      break;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
}

int main()
{
  int arr[1000];
  cout << "Enter The number of elements in array less than 1000: ";
  int n;
  cin >> n;
  cout << "Enter array elemnts in sorted array: ";

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;

  cout << "Enter element to search in sorted array: ";
  cin >> key;

  binarySearch(arr, n, key);

  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<" ";
  // }
  return 0;

}
