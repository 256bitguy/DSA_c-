#include<iostream>
using namespace std;
 
 int firsIndex(int A[],int size,int found){
  static int index=1;
    if(size==0) return 0;
    if(A[0]==found) return 1;
     
    return index + firsIndex(A+1,size-1,found);
     
    
 }
int main(){
    int A[10]={1,2,3,5,5,6,4,8,9,11};
   int inde= firsIndex(A,10,4);
   cout<<inde-1<<"\n";
    return 0;
}