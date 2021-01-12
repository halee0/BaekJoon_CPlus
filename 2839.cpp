#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y; //5x+3y=n
    int count=n;
    for (x=0;5*x<n;x++){
        if ((n-5*x)%5==0){
            count=x+1;
        }else{
            if ((n-5*x)%3==0){
                y=(n-5*x)/3;
                if (x+y<count){
                    count=x+y;
                }
            }
        }
    }
    if (count==n){
        cout<<-1;
    }else{
        cout<<count;
    }
}