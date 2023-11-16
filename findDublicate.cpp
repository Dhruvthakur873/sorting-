#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,5,6,7,8,9};
    int low = 0;
    int high = 9;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==mid+1){
            low = mid+1;
        }
        else{
            if(arr[mid-1]!=arr[mid]){
                high = mid-1;
            }
            else {
                cout<<arr[mid];
                break;
            }
        }
    }
}