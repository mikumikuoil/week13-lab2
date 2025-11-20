#include <iostream>
using namespace std;
int maxValue(int* ptrs[],int size) {
    int* mx=ptrs[0];
    for(int i=0;i<size;i++) {
        if(*ptrs[i]>*mx) {
            *mx=*ptrs[i];
        }
    }
    return *mx;
}
int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements for the array: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int* ptrs[n];
    for(int i=0;i<n;i++) {
        ptrs[i]=&arr[i];
    }
    cout<<maxValue(ptrs,n);

}