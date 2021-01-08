#include <iostream>
using namespace std;

int main(void){
    int c;
    cin>>c;
    for (int i=0; i<c; i++){
        int n;
        cin>>n;
        int *scores=new int[n];
        int sum=0;
        for (int j=0; j<n; j++){
            int score;
            cin>>score;
            scores[j]=score;
            sum+=score;
        }
        double avg=sum/(double)n;
        int count=0;
        for (int k=0; k<n; k++){
            if (double(scores[k])>avg){
                count++;
            }
        }
        double ratio=count/(double)n*100;
        cout<<fixed;
        cout.precision(3);
        cout<<ratio<<"%"<<"\n";
        delete[] scores;
    }
    return 0;
}