/**
 * The C++ program uses binary search to find the first occurrence of a target number in a sorted
 * array.
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[13] = {1,2,3,4,5,8,9};
    int target = 6;
    int low =0;
    //this code is to found lower bound of an element;
    int high = 6;
    bool flag = true;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout<<arr[mid+1];
            flag = false;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else  high = mid -1;
    }
    if(flag){
        cout<<arr[low];
    }
}