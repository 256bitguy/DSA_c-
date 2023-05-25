#include<iostream>
using namespace std;
int main(){

    for(int i=0;i<10;i++){
        long int *a=new long int;
        cin>>*a;
        cout<<*a<<" \n";
        delete a;
        cout<<"now the value of a is"<<*a<<"\n";
    }
    return 0;
}