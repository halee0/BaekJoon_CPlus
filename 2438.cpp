#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    char star='*';
    for (int i=1; i<n+1; i++){
        for (int j=0; j<i;j++)
            cout<<star;
        cout<<"\n";
    }
}