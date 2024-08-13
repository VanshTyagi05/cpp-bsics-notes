#include<iostream>
using namespace std;

int binarySearch(int arr[][10], int row, int col, int target){
    for(int i = 0; i < row; i++){
        int start = 0, end = col - 1;
        if(arr[i][start] <= target && target <= arr[i][end]){
            while(start <= end){
                int mid = start + (end - start) / 2;
                if(arr[i][mid] == target){
                    return 1;
                }
                else if(arr[i][mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    int n, m;
    cout << "Enter the number of rows in the Array: ";
    cin >> n;
    cout << "Enter the number of columns in the Array: ";
    cin >> m;

    int arr[n][10]; // Assuming a maximum of 10 columns
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Enter the " << i << j << "th Element: ";
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int ans = binarySearch(arr, n, m, target);
    if(ans == 1){
        cout << target << " is present in the matrix." << endl;
    }
    else{
        cout << target << " is not present in the matrix." << endl;
    }

    return 0;
}
