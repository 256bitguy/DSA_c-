#include<iostream>
using namespace std;
bool elementPresent(int A[],int size,int found){
    if(size==1&&A[size-1]!=found) return false;
    if(A[size-1]==found)return true;
    bool ele=elementPresent(A,size-1,found);
    if(ele)return true;
    else  return false;
}
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,11};
    cout<<elementPresent(A,10,59)<<"\n";
    return 0;
}