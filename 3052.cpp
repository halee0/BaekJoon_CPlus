#include <iostream>
#include <set>
using namespace std;

int main(void){
    int *nums=new int[10];
    set<int> left;
    int num;
    for (int i=0; i<10; i++){
        cin>>nums[i];
        num=nums[i]%42;
        left.insert(num);
    }
    cout<<left.size();
    delete[] nums;
}