#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int* arr=new int[n];
    int min,max;
    for (int i=0; i<n;i++){
        cin>>arr[i];
        if (i==0){
            min=arr[i];
            max=arr[i];
        }
        else{
            if (arr[i]>max) max=arr[i];
            else if (arr[i]<min) min=arr[i];
        }
    }
    cout<<min<<" "<<max;
}