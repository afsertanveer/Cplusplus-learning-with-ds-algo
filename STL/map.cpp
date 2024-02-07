// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
using namespace std;
int main() {
    map<int,string>m;
    m[1] = "afser";
    m[2]="tanveer";
    m[15] = "surely surely";
    
    m.insert({5,"win"});
    cout<<"before erasing"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"finding 15==> "<<m.count(15)<<endl;
    cout<<"finding -15==> "<<m.count(-15)<<endl;
    
    auto it = m.find(5);
    cout<<"value from finding iterator=>"<<endl;
    for(auto i = it ; i!=m.end() ;i++){
        cout<<(*i).first<<endl;
    }
    
    m.erase(15);
    
    cout<<"after erasing"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}