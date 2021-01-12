#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int h,w,n;
    int floor,loc;
    for (int i=0; i<t; i++){
        cin>>h>>w>>n;

        if (n%h==0){
            loc=n/h;
            floor=h;
        }else{
            loc=(n/h)+1;
            floor=(n%h);
        }
        if (loc<10){
            cout<<floor<<"0"<<loc<<"\n";
        }else{
            cout<<floor<<loc<<"\n";
        }
    }
}