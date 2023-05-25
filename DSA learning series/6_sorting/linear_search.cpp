#include<iostream>
using namespace std;
void linearSearch(int A[],int size,int search){
   for(int i=0;i<size;i++){
    if(A[i]==search){
        cout<<" element is found at "<<i<<"th index";
        return ;
    }
   }
   cout<<"the element to be searched is not in the array";
}
int main(){
     int A[10]={9,4,6,3,45,67,234,25,654,23};
     linearSearch(A,10,6);
     
    return 0;
}