#include<iostream>
using namespace std;
 
 int lastIndex(int A[],int size,int found){
  static int index=1;
    if(size==0) return 0;
    if(A[size-1]==found) return 1;
     
    return index +lastIndex(A,size-1,found);
     
    
 }
int main(){
    int A[10]={1,2,3,5,5,6,4,5,9,11};
   int inde= lastIndex(A,10,5);
   cout<<10-inde<<"\n";
    return 0;
}