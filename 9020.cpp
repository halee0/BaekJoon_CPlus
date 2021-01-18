#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int nums[10000]={0,};
    nums[0]=1;
    nums[1]=1;
    for (int i=2; i<10001; i++){
        for (int j=i+i; j<10001; j+=i){
            nums[j]=1;
        }
    }
    for (int i=0; i<t; i++){
        cin>>n;
        for (int j=n/2; j>1;j--){
            int num=n-j;
            if (nums[j]==0 && nums[num]==0){
                cout<<j<<" "<<num<<"\n";
                break;
            }
        }
    }
}