#include <iostream>
using namespace std;
double average(double* ptrs[],int size) {
    double total=0.0;
    for(int i=0;i<size;i++) {
        total+=*ptrs[i];
    }
    return double(total)/double(size);
}
int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    double arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    double* ptrs[n];
    for(int i=0;i<n;i++) {
        ptrs[i] = &arr[i];
    }
    cout<<average(ptrs,n);

}