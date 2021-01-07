#include <iostream>
using namespace std;

int main(void){
    int year;
    bool result=false;
    cin>>year;
    if (year%4==0){
        if (year%100!=0 or year%400==0) result=true;
    }
    cout<<result;
}