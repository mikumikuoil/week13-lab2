#include <iostream>
using namespace std;
void incrementOdd(int* ptrs[],int size) {
    for(int i=0;i<size;i++) {
        if (*(ptrs[i])%2!=0) {
            *(ptrs[i])+=1;
        }
    }
}
int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int* ptrs[n];
    for(int i=0;i<n;i++) {
        ptrs[i] = &arr[i];
    }
    incrementOdd(ptrs,n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
