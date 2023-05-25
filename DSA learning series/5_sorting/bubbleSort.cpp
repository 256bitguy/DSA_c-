 
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int A[],int size){
   //make a loop which runs for n-1 times
   bool flag=false;
   for(int i=0;i<size-1;i++){
    //in the next loop we will swap by checking the adjacent
    for(int j=0;j<size-1;j++){
        if(A[j]>A[j+1]){
            swap(A[j],A[j+1]);
            flag=true;
        }
    }
    if(!flag) break;//i have used flag so that in the best case it would take O(n) time complexity
   }
 }

int main(){
    int A[] ={34,5,45,34,234345,45645,4,5,23434,5467553,5,346,57,656,4353,4,53,4,475,675,675,634,53 ,34546,54,756,7,56,45,45,6345,345,4,65,7,68,675,64,6,345,56 ,76,89,797,986,7,56,4,534,5,346,56,786,97,};
    // for(int i=0;i<10;i++){
    //     cin>>A[i];
    // }
    // Get the current time
  std::time_t currentTime = std::time(nullptr);

  // Convert time to milliseconds
  std::chrono::milliseconds milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(
    std::chrono::system_clock::from_time_t(currentTime).time_since_epoch()
  );

  // Print the current time in milliseconds
  std::cout << "Current time in milliseconds: " << milliseconds.count() << std::endl;

  

    bubbleSort(A,10);
      std::cout << "Current time in milliseconds: " << milliseconds.count() << std::endl;
for(auto a:A){
        cout<<a<<" ";
    }
      std::cout << "Current time in milliseconds: " << milliseconds.count() << std::endl;

    return 0;
}