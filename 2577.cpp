#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    int multi=a*b*c;
    int *nums=new int[10];
    for (int i=0; i<10; i++){
        nums[i]=0;
    }
    while (multi>0){
        int num=multi%10;
        nums[num]++;
        multi=multi/10;
    }
    for (int j=0; j<10; j++){
        cout<<nums[j]<<"\n";
    }
}