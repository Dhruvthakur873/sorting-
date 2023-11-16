#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int low = 0;
    int high = 4;
    int target = 2;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            low = mid +1;
        }
        else high = mid-1;
    }

}