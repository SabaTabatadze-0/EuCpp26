#include <iostream>
using namespace std;

int main() {
    cout << "Try programiz.pro";

    return 0;
}

string func1 (string arr[] ,int n){
    string mx = arr[0];
    int mxLength = arr[0].length();
    for (int i = 1; i < n; i++){
        if (arr[i].length() > mxLength){
            mxLength = arr[i].length();
            mx = arr[i];
        }
    }
    return mx;
}

char findMostFrequentSymbo(string s){
    int l = 200;
    int freqArr[l];
    for (int i = 0; i < 1; i++){
        freqArr[i] == 0
    }
    
    for (int i = 0, t = s.length(); i < t; i++){
        freqArr[(int)s[i]]++;
    }
    
    int 
}
