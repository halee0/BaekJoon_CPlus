#include <iostream>
using namespace std;

int main(){
    int a,b,v;
    cin>>a>>b>>v;
    int day;
    if ((v-b)%(a-b)==0){
        day=(v-b)/(a-b);
    }else{
        day=(v-b)/(a-b)+1;
    }
    cout<<day;
}