/*
Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int max1=INT_MIN;
    int max1idx = -1;
    for(int i=0;i<4;i++){
        int n = 4;
        int firstoccurenceofone = -1;
        int numOf_1=0;
        int target = 1;
        int low =0;
        int high = 12;
        bool flag = true;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[i][mid]==target){
                if(arr[i][mid-1]!=target){
                    firstoccurenceofone = mid;
                    flag = false;
                    break;
                }else{
                    high = mid -1;
                }
            }
            else if(arr[i][mid]<target){
                low = mid +1;
            }
            else high = mid -1;
        }
        cout<<firstoccurenceofone<<endl;
        if(flag==false){
            numOf_1 = n-firstoccurenceofone ;
        }
        //cout<<numOf_1<<endl;
        if(numOf_1>max1){
            max1 = numOf_1;
            max1idx = i;
        }
    }
    //cout<<max1idx;
}