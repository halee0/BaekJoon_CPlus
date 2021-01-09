#include <iostream>
using namespace std;

int sol(int n);

int main(){
    int n;
    cin>>n;
    int count=0;
    int calc;
    for (int i=1; i<=n; i++){
        calc=sol(i);
        count+=calc;
    }
    cout<<count;
}

int sol(int n){
    if (n<100){
        return 1;
    }else{
        int num1,num2,num3;
        int diff1,diff2;

        num1=n%10;
        num2=(n/10)%10;
        num3=n/100;
        diff1=num2-num1;
        diff2=num3-num2;

        if (diff1==diff2){
            return 1;
        }
    }
    return 0;
}