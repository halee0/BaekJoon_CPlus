#include <iostream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES

int main(){
    int r;
    cin>>r;
    cout<<fixed;
    cout.precision(4);
    cout<<M_PI*r*r<<"\n"<<r*r*2;
}