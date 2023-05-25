#include<iostream>
#include<climits>                                                
using namespace std;

void selectionSort(int A[],int size){
     for(int i=0;i<size-1;i++){
        int smallest=INT_MAX,index;
        for(int j=i+1;j<size;j++){
          if(smallest>A[j]){
            smallest=A[j];
            index=j;
          } 
        }
        if(A[i]>A[index]){
            swap(A[i],A[index]);
        }
     }
     for( int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int A[10]={23 ,90, 89, 67, 56, 45, 34, 23 ,1, 0};
    // for(int i=0;i<10;i++){
    //     cin>>A[i];
    // }
    
    selectionSort(A,10);

    
    return 0;
}