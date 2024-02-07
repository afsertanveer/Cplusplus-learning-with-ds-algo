// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;
int main() {
    //fifo = first in first out
    queue<string> s;
    s.push("Afser");
    s.push("tanveer");
    s.push("will win");
    cout<<"first element: "<<s.front()<<endl;
    s.pop();
    cout<<"top element: "<<s.front()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;

    return 0;
}