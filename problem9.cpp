#include <iostream>
using namespace std;
double square(double x) {
    cout<<"Square ";
    return x*x;
}

double cube(double x) {
    cout<<"Cube ";
    return x*x*x;
}
double apply(double x, double(*f)(double)) {
    return f(x);
}
int main() {
    double n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<apply(n,square)<<endl;
    cout<<apply(n,cube)<<endl;
}