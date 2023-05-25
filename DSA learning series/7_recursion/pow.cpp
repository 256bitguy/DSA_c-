#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1){return x;}
    //recursive call
    int prevone=pow(x,n-1);
    return x*prevone;
}
int main(){
    int f=pow(2,3);
    cout<<f<<"\n";
    return 0;
}