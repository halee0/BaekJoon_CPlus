#include <iostream>
using namespace std;

int main(void){
    int nums[3];
    cin>>nums[0]>>nums[1]>>nums[2];
    int a=nums[0];
    int b=nums[1];
    int c=nums[2];
    cout<<(a+b)%c<<endl;
    cout<<((a%c)+(b%c))%c<<endl;
    cout<<(a*b)%c<<endl;
    cout<<((a%c)*(b%c))%c;
}