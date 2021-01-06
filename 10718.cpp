#include <iostream>
using namespace std;

void show(string msg){
    cout<<msg<<endl;
    cout<<msg;
}

int main(void){
    string msg="강한친구 대한육군";
    show(msg);
}