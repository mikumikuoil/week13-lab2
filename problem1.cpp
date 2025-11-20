#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*funcptr)(int,int);
    funcptr = add;
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"The sum of the numbers: ";
    cout<<funcptr(a,b);
}