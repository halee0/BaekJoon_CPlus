#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    istringstream ss(s);
    string stringBuffer;
    vector<string> words;
    words.clear();
    while (ss>>stringBuffer){
        words.push_back(stringBuffer);
    }
    cout<<words.size();
}