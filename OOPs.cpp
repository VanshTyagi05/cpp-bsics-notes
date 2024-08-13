#include <iostream>
using namespace std;
 class student
 {
 
 public: // public here is access modifier which   allows the access of the elements of the class outsode the class
  string name;
  int age,roll_no;
  string grade;
  
  void setname(string s){
    name=s;
  }
   void setage(int n){
    age=n;
  }
   void setrollnum(int s){
    roll_no=s;
  }
 };
   // understanding the concept of  padding
   class padding{
    public:
    char c;
    char p;
    int b;
    // in the above case size of object of type padding must be 5 but it is actualy 8 in size this is ddue to concept of padding
    // always variable starts taking memory from its multiple of data type 
    // for example int which takes 4 byte will always start from 4,8,12... etc values in storage;
    // below c and b denotes memory alloted to the ehile p denotes hoe padding takes place

    // c p p p b b b b

    

   };

   //concept of empty class
    class emptyclass{
     // nothing inside this class still takes 1 byte as memory to store its unique address
    };
 

int main()
{
  
  // student s1;
  // here student is a user defined data type or class and s1 is object
  // class:- user defined data type or blueprint forthe objects
  //object:- real entity which is based on its class; 
  //IMP NOTE:- Class is similar to structres in c programming
  // s1.setname("Vansh");
  // s1.setage(20);
  // s1.roll_no=2348005;
  // s1.grade="A";

  // cout<<s1.name<<endl;
  // cout<<s1.age<<endl;
  // cout<<s1.roll_no<<endl;
  // cout<<s1.grade<<endl;
  
 padding s; // this is static memory allocation
 cout<<sizeof(s)<<endl;
 padding *p=new padding; // this is dynamic memroy allocation
 cout<<sizeof(*p)<<endl;
 cout<<sizeof(emptyclass); // 1 as output

  return 0;
}
