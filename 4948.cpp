#include <iostream>
using namespace std;

int main(){
    int n;
    while (1){
        cin>>n;
        if (n==0){
            break;
        }
        
        int *arr=new int[2*n+1];
        arr[0],arr[1]=1,1;
        for (int i=2; i<=2*n; i++){
            for (int j=i+i; j<=2*n; j+=i){
                arr[j]=1;
            }
        }

        int count=0;
        for (int i=n+1; i<=2*n; i++){
            if (arr[i]!=1){
                count+=1;
            }
        }
        cout<<count<<"\n";
    }
}