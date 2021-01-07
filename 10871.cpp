#include <iostream>
using namespace std;

int main(void){
    int n,x;
    cin>>n>>x;
    int nums[n];
    for (int i=0; i<n; i++){
        cin>>nums[i];
        if (nums[i]<x){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}