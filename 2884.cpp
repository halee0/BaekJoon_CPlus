#include <iostream>
using namespace std;

int main(void){
    int hour,min;
    cin>>hour>>min;
    if (min>=45) min-=45;
    else{
        if (hour==0) hour=hour+24-1;
        else hour-=1;
        min=min+60-45;
    }
    cout<<hour<<" "<<min;
}