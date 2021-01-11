#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int len;
    string check[]={"c=","c-","d-","lj","nj","s=","z="};
    while (s.length()>0){
        len=s.length();
        if (find(check,check+7,s.substr(0,2))!=check+7){
            s=s.substr(2,len);
            count++;
        }else if (s.substr(0,3)=="dz="){
            s=s.substr(3,len);
            count++;
        }else{
            s=s.substr(1,len);
            count++;
        }
    }
    cout<<count;
}