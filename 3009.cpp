#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x[3];
    int y[3];
    for (int i=0; i<3; i++){
        cin>>x[i]>>y[i];
    }
    int x4,y4;
    for (int i=0; i<3; i++){
        if (count(x,x+3,x[i])==1){
            x4=x[i];
        }
        if (count(y,y+3,y[i])==1){
            y4=y[i];
        }
    }
    cout<<x4<<" "<<y4;
}