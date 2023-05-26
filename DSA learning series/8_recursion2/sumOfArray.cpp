#include<iostream>
using namespace std;
int sumOfArray(int A[],int size){
if(size==0) return 0;
return A[size-1]+sumOfArray(A,size-1);
}
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,11};
    cout<<sumOfArray(A,10)<<"\n";
    return 0;
}