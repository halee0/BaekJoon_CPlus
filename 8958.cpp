#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        string score;
        cin>>score;
        int count=0;
        int sum=0;
        for (int j=0; j<score.length();j++){
            char temp=score[j];
            if (temp=='O'){
                count++;
                sum+=count;
            }else{
                count=0;
            }
        }
        cout<<sum<<"\n";
    }
}