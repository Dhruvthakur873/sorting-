
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    /* The code is finding the smallest missing number in a sequence of numbers. */
    // brute force solution o(n)
    // int arr[13] = {1,2,4,5,6,9};
    // int diff = arr[0];
    // for(int i=0;i<7;i++){
    //     if(arr[i]-i!=diff){
    //         cout<<arr[i-1]+1;
    //         break;
    //     }
    // }
    // efficient approach
    int arr[6] = {1,2,3,4,6,9};
    int diff = arr[0];
    int low = 0 ,high = 5;
    int ans = -1;
    while(low<=high){
        int mid= low + (high-low)/2;
        if(arr[mid]-mid==diff){
            low = mid +1;
        }
        else {
            ans = arr[mid]-1;
            high = mid-1;
        }
    }
    cout<<ans;
}