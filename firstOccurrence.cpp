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
            if(arr[mid-1]!=target){
                cout<<mid<< " this is the index ";
                flag = false;
                break;
            }else{
                high = mid -1;
            }
        }
        else if(arr[mid]<target){
            low = mid +1;
        }
        else high = mid -1;
    }
    if(flag){
        cout<<-1;
    }
}