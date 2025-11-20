#include <iostream>
using namespace std;
int isEven(int a) {
    if (a % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n,count=0;
    cout<<"Enter a number of elements in the array: ";
    cin>>n;
    int arr[n];
    int (*funcptr[1])(int) = {isEven};
    cout<<"Enter elements in the array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        if (funcptr[0](arr[i])==1) {
            count++;
        }
    }
    cout<<count;
}