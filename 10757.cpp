#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int len_a=a.length();
    int len_b=b.length();
    int n;
    if (len_a>len_b){
        n=len_a;
        b.append(len_a-len_b,'0');
    }else{
        n=len_b;
        a.append(len_b-len_a,'0');
    }

    int *result=new int[n];
    int add=0;
    int num_a,num_b;
    for (int i=0; i<n; i++){
        num_a=a[i]-'0';
        num_b=b[i]-'0';
        if (num_a+num_b+add>=10){
            result[i]=num_a+num_b+add-10;
            add=1;
        }else{
            result[i]=num_a+num_b+add;
            add=0;
        }
    }
    if (add==1){
        cout<<1;
    }

    for (int j=n-1; j>=0; j--){
        cout<<*(result+j);
    }
}