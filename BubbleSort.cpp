/* The code snippet is implementing the Bubble Sort algorithm
to sort the elements in the `array`
in ascending order. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {5,3,4,1,2};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
    for(int i:array){
        cout<<i<<" ";
    }
}