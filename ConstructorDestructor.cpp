#include <iostream>
using namespace std;
class Customer{
  
   string name;
   int acc_num;
   int *balance;
   //default constructor
   public:
    Customer(){
    // cout<<"Constructor is called"<<endl;
    name="Default name";
    acc_num=100;
   }
   //parameterized constructor
   Customer(string name,int acc_num, int bal){
    // use of this pointer
    this->name=name;
    this->acc_num=acc_num;
    balance=new int;
    *balance=bal;
   }
   // constructor overloading:- All three constructor have same name but still they are workingn individually bcz all are having the fdiffernebt number of parameter
   Customer(string name){
    this->name=name;
    acc_num=50;
   }
   // inline constructor
  //  inline Customer(string a,int b):name(a),acc_num(b){

  //  };


  // +++++++++++++++ DECONSTRUCTOR ++++++++++++++++++++++++++++++++++
  // always called just before the deletion of the object
  // main function is to free the memory that is alloted in HEAp i.e pointers with keyword "new"
  // bcz memory alloted in stack is deleted automatically butHeap we have to claer
   ~Customer(){
    delete balance; 
   }
   void display(){
    cout<<name<<endl;
    cout<<acc_num<<endl;
    cout<<balance<<endl;
   }
};

int main()
{
  
 Customer A1,A2;
 A1.display(); // for both of them default constructor is called
 
 Customer B1("vansh",20,4000); // for parameterix=sed constructor values are trnasferred along with the declarationg
 B1.display();
 Customer B3("Deepti");
 B3.display();
 //copy constructor
// B4 is taking the same argument a spresent in B1 ;
 Customer B4(B1);
 B4.display();

}
