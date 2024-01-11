#include<iostream>
using namespace std;
int main(){

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    cout<<"max till 0 "<<max<<endl;
    for(int i = 1 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"Max till "<<i<<" "<<max<<endl;
    }
    return 0;
}