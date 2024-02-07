// Online C++ compiler to run C++ program online
#include <iostream>
#include<deque>

using namespace std; 

int main() {
  
  deque<int>d;
  
  d.push_back(1);
  d.push_front(2);
  d.push_back(3);
  d.push_back(4);
  d.push_back(5);
  for(int i:d){
      cout<<i<<" ";
  }
  cout<<endl;
  
//   d.pop_front();
//   for(int i:d){
//       cout<<i<<" ";
//   }
cout<<"First Element:"<<d.at(0)<<endl;
cout<<"Front"<<d.front()<<endl;
cout<<"Back"<<d.back()<<endl;
cout<<"Empty or not: "<<d.empty()<<endl;
cout<<"Before erase size: "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"After erase size: "<<d.size()<<endl;
for(int i:d){
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<endl;
    
    return 0;
}