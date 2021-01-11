#include <iostream>
using namespace std;

int f(int n);

int main(){
    int n;
    cin>>n;
    int sol=1;
    int calc;
    while (true){
        calc=f(sol);
        if (n<=calc){
            break;
        }else{
            sol++;
        }
    }
    cout<<sol;
}

int f(int n){
    int calc=3*n*n-3*n+1;
    return calc;
}