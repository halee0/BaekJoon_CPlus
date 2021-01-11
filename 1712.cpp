#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sol=-1;
    if (c-b!=0){
        int n=(a/(c-b))+1;
        if (n>0){
            sol=n;
        }
    }
    cout<<sol;
}