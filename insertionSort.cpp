#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {5,2,6,4,1,3};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>=1&&array[j]<array[j-1]){       
                    swap(array[j],array[j-1]);
                    j--;
        }
    }
    for(int ele:array){
        cout<<ele<<" ";
    }
}