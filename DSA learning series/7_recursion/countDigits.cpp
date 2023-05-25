#include<iostream>
using namespace std;

int  countDigits(int n){
    static int  count=0;
           if(n==0)return 0 ;
           int temp=countDigits(n/10);
           count++;
     return count;        
}
int main(){
   cout<<"\n"<< countDigits(1982);
    return 0;
}