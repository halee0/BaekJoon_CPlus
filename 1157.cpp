#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),(int(*)(int))toupper);
    int count[26]={0,};
    char a='A';
    int a_loc=(int)a;
    for (int i=0; i<s.length(); i++){
        char c=s[i];
        int check=(int)c;
        count[check-a_loc]++;
    }
    int index,check;
    int max=-1;
    for (int j=0; j<26; j++){
        if (count[j]>max){
            max=count[j];
            index=j;
            check=0;
        }
        else if (count[j]==max){
            check=1;
        }
    }
    if (check==1){
        cout<<"?";
    }
    else{
        cout<<char(index+a_loc);
    }
}