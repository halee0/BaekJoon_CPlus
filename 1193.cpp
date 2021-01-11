#include <iostream>
using namespace std;

int f(int n);

int main(){
    int n;
    cin>>n;
    int row=1;
    while (true){
        if (f(row+1)>n){
            break;
        }else{
            row++;
        }
    }
    int loc=n-f(row);
    int up,down;
    if (row%2==0){
        up=1;
        down=row;
        up+=loc;
        down-=loc;
    }else{
        up=row;
        down=1;
        up-=loc;
        down+=loc;
    }
    cout<<up<<"/"<<down;
}

int f(int n){
    return (n*n-n+2)/2;
}