#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[]={5,1,5,5,2,3};
    int len = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < len - 1; i++) {
        int minIndex = i; // Initialize the minimum index

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i; j < len; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the current element
        swap(array[i], array[minIndex]);
    }
    // for(int i:array){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    int digit1 = 0;
    int digit2 = 0;
    for(int i=0;i<len;i++){
        digit1= digit1*10 +array[i];
    }
    // cout<<digit1;
    for(int i=len -1;i>=0;i--){
        if(array[i]!=array[i-1]){
            swap(array[i],array[i-1]);
            break;
        }
    }
    for(int i=0;i<len;i++){
        digit2= digit2*10 +array[i];
    }
    cout<<endl;
    cout<<digit2+digit1;
    //
}