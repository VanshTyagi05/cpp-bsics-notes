// program 1:- convert small alphabets to capital

// #include<iostream>
// using namespace std;

// char convert(char name){
//   char ans=name-'a'+'A';
//   return ans;
// }

// int main(){

// char name;
// cin>>name;
// cout<<convert(name)<<endl;

// return 0;

// }

// program 2:- Armstrong Number
// #include <iostream>
// #include <cmath> 
// using namespace std;

// int countDigit(int n)
// {
//   int count = 0;
//   while (n!=0)
//   {
//     count++;
//     n = n / 10;
//   }
//   return count;
// }

// int armstrong(int num, int digit){
//   int rem,ans=0,n=num;
//   while(n!=0){
//     rem=n%10;
    
//    ans=ans+pow(rem,digit);
//    n=n/10;

//   }

//  return ans;
// }


// int main()
// {

//   int num;
//   cout << "Enter The number";
//   cin >> num;

//   int digit = countDigit(num);
//   cout<<digit<<endl;
//   cout<<armstrong(num,digit);
 
//  return 0;
// }

//The issue might be due to the use of the pow function, which returns a floating-point value. When performing arithmetic operations with floating-point numbers, small precision errors can occur, leading to incorrect results. To handle this, you can use integer arithmetic to avoid these precision errors.
#include <iostream>
using namespace std;

int countDigit(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result =result* base;
    }
    return result;
}

int armstrongSum(int num, int digit) {
    int rem, ans = 0, n = num;
    while (n != 0) {
        rem = n % 10;
        ans = ans + power(rem, digit);
        n = n / 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digit = countDigit(num);
    int armstrongSumResult = armstrongSum(num, digit);

    cout << "Number of digits: " << digit << endl;
    cout << "Armstrong sum: " << armstrongSumResult << endl;

    if (armstrongSumResult == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
