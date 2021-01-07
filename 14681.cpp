#include <iostream>
using namespace std;

int main(void){
    int x,y;
    cin>>x>>y;
    int answer;
    if (x>0 and y>0) answer=1;
    else if (x<0 and y>0) answer=2;
    else if (x<0 and y<0) answer=3;
    else answer=4;
    cout<<answer;
}