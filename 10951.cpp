#include <iostream>
using namespace std;

int main(void){
    int a,b;
    while (true){
        cin>>a>>b;
        if (cin.eof()==true) break;
        else{
            cout<<a+b<<"\n";
        }
    }
}