#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=2;
    while (n!=1){
        if (n%num==0){
            cout<<num<<"\n";
            n/=num;
            num=2;
        }else{
            num++;
        }
    }
}