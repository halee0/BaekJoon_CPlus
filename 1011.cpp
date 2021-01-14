#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        long long x,y,d,n;
        cin>>x>>y;
        d=y-x;
        for (n=1;;n++){
            if (n*n>=d){
                break;
            }
        }
        long long mid=((n*n)+(n-1)*(n-1))/2;
        if (d<=mid){
            cout<<2*(n-1)<<"\n";
        }else{
            cout<<2*n-1<<"\n";
        }
    }
}