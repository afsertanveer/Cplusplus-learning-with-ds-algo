// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>

using namespace std; 

int main() {
    
    list<int>l;
    
    list<int>a(5,100);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(2);
    l.push_front(1);
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Size of list: "<<l.size()<<endl;
    
    return 0;
}