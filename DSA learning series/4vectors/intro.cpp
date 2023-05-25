#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>  v;
     //vector is created using template
     vector<int> *vp=new vector<int>();
     //in this way we can generate the vector dynamically
     v.push_back(29);
     v.push_back(30);
     v.push_back(34);

     cout<<v[0]<<" "<<v[1]<<" "<<v[2];

    return 0;

}