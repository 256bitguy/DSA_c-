#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
     string str = "bads",str2="baba";
     set<char> s11,s22;

    for (char c : str) {
        s11.insert(c);
    }
        for (char c : str2) {
        s22.insert(c);
    }
     
     cout << s11.size()<<" "<<s22.size()  ; 
 for(char c: s22){
    cout<<c<<" ";
 }
    return 0;
}
