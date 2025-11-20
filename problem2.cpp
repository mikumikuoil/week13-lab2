#include <iostream>
using namespace std;
bool greaterThan10(int c) {
    if (c>10) {
        return true;
    }
}
int main() {
    bool (*funcptr)(int);
    funcptr=&greaterThan10;
    int n,count=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        if (funcptr(arr[i])==true) {
            count++;
        }
    }
    cout<<"Amount of numbers greater than 10: "<<count<<endl;
}