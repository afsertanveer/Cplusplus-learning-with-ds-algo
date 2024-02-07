// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std; 

int main() {
   
  vector<int>v;
  vector<int>a(5,1); // five size vector initialized with 1
  //printing a vector
  for( int i:a ){
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<"capacity=>"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity=>"<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"capacity=>"<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"capacity=>"<<v.capacity()<<endl;
  cout<<"size=>"<<v.size()<<endl;
  cout<<"Element at 2nd index=>"<<v.at(2)<<endl;
    cout<<"Empty or not:=>"<<v.empty()<<endl;
    cout<<"First ELEMENT: "<<v.front()<<endl;
    cout<<"last element:"<<v.back()<<endl;
    cout<<"before pop back:"<<endl;
    for( int i:v ){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after Pop back:"<<endl;
    for( int i:v ){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear size: "<<v.size()<<endl;
    cout<<"before clear capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;
    cout<<"after clear capacity: "<<v.capacity()<<endl;
    
    
    return 0;
}