#include <iostream>
using namespace std;

int main(void){
    int n=9;
    int *arr=new int[n];
    int max,index;
    for (int i=0; i<n; i++){
        cin>>arr[i];
        if (i==0){
            max=arr[i];
            index=i;
        }
        else{
            if (arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
    }
    cout<<max<<"\n"<<index+1;
}