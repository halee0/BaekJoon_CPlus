#include <iostream>
using namespace std;

int d(int n);

int main(){
    int arr[10001]={0,};
    for (int i=1; i<10001;i++){
        int num=d(i);
        if (num<10001){
            arr[num]=1;
        }
    }
    for (int j=1; j<10001;j++){
        if (arr[j]==0){
            cout<<j<<"\n";
        }
    }
}

int d(int n){
    int sum=n;
    while (n>0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}