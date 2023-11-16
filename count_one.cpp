/*
Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[] = {0,1,1,1,1,1};
int low =0;
int high = (sizeof(a)/sizeof(a[0]))-1;
int firstI =-1;
while(low<=high){
    int mid= low +(high-low)/2;
    if(a[mid]==0){
        low=mid+1;
    }else{
        if(a[mid-1]!=1){
            firstI = mid;
            break;
        }
        else 
        high = mid-1;
    }
}
cout<<(sizeof(a)/sizeof(a[0]))-firstI;
}