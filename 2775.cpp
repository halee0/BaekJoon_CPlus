#include <iostream>
using namespace std;

int f(int k,int n);

int main(){
    int t;
    cin>>t;
    int k,n;
    for (int i=0; i<t; i++){
        cin>>k>>n;
        cout<<f(k,n)<<"\n";
    }
}

int f(int k, int n){
    if (k==0){
        return n;
    }else{
        int sum=0;
        for (int i=1; i<=n; i++){
            sum+=f(k-1,i);
        }
        return sum;
    }
}