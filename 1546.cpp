#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int *score=new int[n];
    int m=-1;
    int sum=0;
    for (int i=0; i<n; i++){
        cin>>score[i];
        if (i==0){
            m=score[i];
        }
        else{
            if (score[i]>m){
                m=score[i];
            }
        }
        sum+=score[i];
    }
    double new_sum=(sum/(double)m)*100;
    double avg=new_sum/(double)n;
    cout<<avg;
}