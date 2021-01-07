#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int num=n;
    int count=0;
    while (true){
        int fir,sec;
        if (num<10){
            fir=0;
            sec=num;
        }
        else{
            fir=num/10;
            sec=num%10;
        }
        int new_num=(fir+sec)%10;
        num=sec*10+new_num;
        if (num==n){
            count++;
            break;
        }
        else{
            count++;
        }
    }
    cout<<count;
}