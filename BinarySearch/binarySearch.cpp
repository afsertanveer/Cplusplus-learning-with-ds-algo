// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid =start+ (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid +1;
        }else{
            end = mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main() {
    int even[6]= {2,4,6,8,12,18};
    int odd[5]= {3,5,7,13,15};
    int index = binarySearch(even,6,12);
    cout<<"index of 12 is "<<index<<endl;
    int oddIndex = binarySearch(odd,5,25);
    cout<<"index of 15 is "<<oddIndex<<endl;
    
    return 0;
}