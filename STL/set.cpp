// Online C++ compiler to run C++ program online
#include <iostream>
#include<set>
using namespace std;
int main() {
    
    //uniquely insert values
    //does not support modification
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(10);
    
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    // s.erase(s.begin());
    
    set<int>::iterator it = s.begin();// puttin iterator of that type to iterate the set
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    
    cout<<"-5 is present or not=> "<<s.count(-5)<<endl;
    
    set<int>::iterator itr = s.find(5);
    
    for(auto it=itr ; it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    
    return 0;
}