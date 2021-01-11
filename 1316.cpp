#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int count=0;
    for (int i=0; i<n; i++){
        cin>>s;
        char cur=s[0];
        string alpa="abcdefghijklmnopqrstuvwxyz";
        int index=alpa.find(cur);
        alpa=alpa.substr(0,index)+alpa.substr(index+1,alpa.length());
        bool check=true;
        for (int j=1; j<s.length(); j++){
            if (s[j]!=cur){
                cur=s[j];
                index=alpa.find(cur);
                if (index==string::npos){
                    check=false;
                    break;
                }else{
                    alpa=alpa.substr(0,index)+alpa.substr(index+1,alpa.length());
                }
            }
        }
        if (check){
            count++;
        }
    }
    cout<<count;
}