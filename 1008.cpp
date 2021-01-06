#include <iostream>
using namespace std;

int main(void){
    double nums[2];
    cin>>nums[0]>>nums[1];

    cout<<fixed;
    cout.precision(10);
    cout<<nums[0]/nums[1];

    return 0;
}