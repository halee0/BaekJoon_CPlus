#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int nums[10001]={0,};
    nums[0]=1;
    nums[1]=1;
    for (int i=2; i<=10000; i++){
        for (int j=i+i; j<=10000; j+=i){
            nums[j]=1;
        }
    }
    int min=10000;
    int sum=0;
    for (int k=m; k<=n; k++){
        if (nums[k]==0){
            sum+=k;
            if (k<min){
                min=k;
            }
        }
    }
    if (sum==0){
        cout<<-1;
    }else{
        cout<<sum<<"\n"<<min;
    }
}