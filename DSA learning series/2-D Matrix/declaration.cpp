#include<bits/stdc++.h>

using namespace std;

void printarr(int a[][5],int n  ,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
 int main(){
    int a[5][5]={{0}},n,m;
    cout<<"enter the number of n and m";
    cin>>n>>m;
    printarr(a,n,m);
    return 0;
 }