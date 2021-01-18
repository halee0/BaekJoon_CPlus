#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int num1=h-y;
    int num2=w-x;
    cout<<min(min(x,y),min(num1,num2));
}