// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Afser");
    s.push("tanveer");
    s.push("will win");
    cout<<"top element: "<<s.top()<<endl;
    s.pop();
    cout<<"top element: "<<s.top()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;

    return 0;
}