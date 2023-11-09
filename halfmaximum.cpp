#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {5,1,2,4,3,6};
    int n = sizeof(array)/sizeof(array[0]);
    if(n%2!=0) {
        int len = n/2;
        for (int i = 0; i < len; i++) {
            int minIndex = i; // Initialize the minimum index

            // Find the index of the minimum element in the unsorted part of the array
            for (int j = i; j < n; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the minimum element with the current element
            swap(array[i], array[minIndex]);
        }
        for(int i = len;i<n;i++){
            cout<<array[i]<< " ";
        }
    }
    else {
        int len = (n/2);
        for (int i = 0; i < len; i++) {
            int minIndex = i; // Initialize the minimum index

            // Find the index of the minimum element in the unsorted part of the array
            for (int j = i; j < n; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the minimum element with the current element
            swap(array[i], array[minIndex]);
        }
        for(int i = len;i<n;i++){
            cout<<array[i]<< " ";
        }
    }
}