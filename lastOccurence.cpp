/*
Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.
Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5} , x = 4;
    int low=0,high = (sizeof(arr)/sizeof(arr[0]))-1;
    bool flag = true;
    while(low<=high){
        int mid = low +(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                cout<<"lastIndex : "<<mid;
                flag = false;
                break;
            }else{
                low=mid+1;
            }
        }
        else if(arr[mid]>x){
            high = mid -1;
        }
        else low = mid +1;
    }
    if(flag){
        cout<<"lastIndex : "<<low;
    }
}