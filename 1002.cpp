#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x1,y1,r1,x2,y2,r2;
    float d,r_sum,r_sub;
    int *answer=new int[t];
    for (int i=0; i<t; i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        r_sub=abs(r1-r2);
        r_sum=r1+r2;
        if (d==0 && r_sub==0){
            answer[i]=-1;
        }else if (d>r_sum){
            answer[i]=0;
        }else if (d==r_sum){
            answer[i]=1;
        }else if (d>r_sub && d<r_sum){
            answer[i]=2;
        }else if (d==r_sub){
            answer[i]=1;
        }else{
            answer[i]=0;
        }
    }
    for (int i=0; i<t; i++){
        cout<<answer[i]<<"\n";
    }
}