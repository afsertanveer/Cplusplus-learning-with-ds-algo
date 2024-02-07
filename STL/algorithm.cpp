// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    
    cout<<"lower bound=> : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"lower bound=> : "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a = 3;
    int b = 5;
    cout<<"max of a,b: "<<max(a,b)<<endl;
    cout<<"min of a,b: "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a= "<<a<<" b = "<<b<<endl;
    
    string str = "abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotation "<<endl;
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }  
    
    return 0;
}