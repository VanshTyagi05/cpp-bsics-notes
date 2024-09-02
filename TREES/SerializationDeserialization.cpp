#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void usestringstream(string str)
{
    stringstream s(str);
    string word;

    int count = 0;
    while (s >> word)
    {
        cout<<word<<endl;
    }

}


int main()
{
    string s = "This is a Hashnode blog";
    usestringstream(s);
    return 0;
}

//This is a Hashnode blog
