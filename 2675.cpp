#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,r;
    string s;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>r>>s;
        int len=s.length();
        char *p=new char[len*r];
        for (int j=0; j<len; j++){
            for (int k=0; k<r; k++){
                p[j*r+k]=s[j];
            }
        }
        for (int m=0; m<len*r; m++){
            cout<<*(p+m);
        }
        cout<<"\n";
    }
}