#include<bits/stdc++.h>
using namespace std;
int main(){
/* The code snippet is creating a character array `alpha` with the value "AZYZXBDJKX". It then
    creates an empty string `s`. */
    char alpha[] = "AZYZXBDJKX";
    // remove characters smaller than x;
    int length = sizeof(alpha)/sizeof(alpha[0]);
    string s;
    for(int i=0;i<length;i++){
        if(alpha[i]>='X'){
            s.push_back(alpha[i]);
        }
    }
    // BUBBLE sort for strings 
    for(int i=0;i<s.length();i++){
        bool flag = true;
        for(int j=0;j<s.length()-1-i;j++){
            if(s[j]<s[j+1]){
                swap(s[j],s[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
    cout<<s;
}