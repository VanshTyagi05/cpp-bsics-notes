#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative number." << endl;
        return 1;
    }

    int count = 0;
    
    int i = 1;
    
    while (i*i <= n) {   
        count++;
        i++;
        
    }
    
    cout << "The integer part of the square root is: " << count  << endl;
    return 0;
}

