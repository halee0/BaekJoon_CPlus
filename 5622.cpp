#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int time=0;
    int a_loc=int('A');
    for (int i=0; i<s.length(); i++){
        int s_loc=int(s[i])-a_loc;
        if (s_loc<15){
            time+=(s_loc/3)+3;
        }else{
            if (s_loc<19){
                time+=8;
            }else if (s_loc<22){
                time+=9;
            }
            else{
                time+=10;
            }
        }
    }
    cout<<time;
}