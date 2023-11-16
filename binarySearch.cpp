/**
 * The C++ program uses binary search to find the first occurrence of a target number in a sorted
 * array.
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target = 3;
    int low =0;
    int high = 12;
    bool flag = true;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]<target){
            high = mid -1;
        }
        else low = mid +1;
    }
    if(flag){
        cout<<-1;
    }
}