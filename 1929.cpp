#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int x);

int main(){
    int m,n;
    cin>>m>>n;
    bool isPrime;
    for (int i=m; i<=n; i++){
        if (i<5){
            if (i==2 || i==3){
                cout<<i<<"\n";
            }

        }else{
            isPrime=isPrimeNumber(i);
            if (isPrime){
                cout<<i<<"\n";
            }
        }
    }
}

bool isPrimeNumber(int x){
    for (int i=2; i<=sqrt(x); i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}