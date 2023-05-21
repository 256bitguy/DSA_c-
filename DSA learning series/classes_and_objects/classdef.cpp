#include<iostream>
using namespace std;
 class Student{
public: 
    int age;
    char *name;

   Student(int age ,char *name){
    this->age=age;
    this->name=new char [strlen(name)+1];
    strcpy(this->name,name);
 
   }
   void display(){
    cout<<name<<" "<<age;
   }
   
};
//this program shows ths use of shallow copy and deep copy