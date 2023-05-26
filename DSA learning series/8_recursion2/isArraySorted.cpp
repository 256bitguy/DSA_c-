#include<iostream>
using namespace std;
 bool isSorted(int A[],int n){
    if(n==0||n==1){ return true;}
    if(A[0]>A[1]){return false;}
    
    
    bool isSmallSorted=isSorted(A+1,n-1);
    if(isSmallSorted)return true;
    
    return false;
 }
bool isSorted2(int A[],int n){
    if(n==0||n==1)   {return true;}
        if(A[n-2]>A[n-1]) return false;
        bool isSortedd=isSorted2(A,n-1);
        if(isSortedd)return true;
        return false;


}

 int main(){
    int A[10]={1,2,3,4,5,6,7,8,923,12};
    if(isSorted(A,10)){cout<<"sorted\n";}
    else cout<<"NotSorted\n";
    if(isSorted2(A,10)){cout<<"sorted\n";}
    else cout<<"not sorted\n";
    return 0;
 }