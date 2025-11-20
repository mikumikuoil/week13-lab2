#include <iostream>
using namespace std;
double square(double x) {
    cout<<"square ";
    return x*x;
}
double cube(double x) {
    cout<<"cube ";
    return x*x*x;
}
int main() {
    double (*funcptr[2])(double)={square,cube};
    double n;
    cin>>n;
    for(int i=0;i<2;i++) {
        cout<<funcptr[i](n)<<' ';
    }
}