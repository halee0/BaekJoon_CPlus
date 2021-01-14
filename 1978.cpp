#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *nums=new int[n];

    int check[1001]={0,};
    check[0]=1;
    check[1]=1;
    for (int j=2; j<=1000; j++){
        for (int k=j+j; k<=1000; k+=j){
            check[k]=1;
        }
    }

    int count=0;
    for (int i=0; i<n; i++){
        cin>>nums[i];
        if (check[nums[i]]==0){
            count++;
        }
    }
    cout<<count;
}