#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=97;
    int loc;
    for (int i=0; i<26;i++){
        char alpa=char(a);
        loc=s.find(alpa);
        if (loc==string::npos){
            cout<<-1<<" ";
        }else{
            cout<<loc<<" ";
        }
        a++;
    }
}