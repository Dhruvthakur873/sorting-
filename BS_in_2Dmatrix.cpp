#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n  =4;
    int m = 4;
    int x=9;
    bool flag = true;
    for(int i = 0;i<m;i++){
        int low= 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[i][mid]==x){
                return true;
                break;
            }
            else if(arr[i][mid]>x){
                high = mid -1;
            }
            else low = mid +1;
        }
    }
    if(flag){
        return false;
}
}