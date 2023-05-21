#include<bits/stdc++.h>
#include "classdef.cpp"
using namespace std;


int main(){
    char name[]="abcd";
    Student S1(20,name);
    S1.display();
    name[3]='e';
    Student s2(30,name);
    s2.display();
    S1.display();
     
    return 0;
}