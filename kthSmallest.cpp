#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {5,7,1,4,2,6,3};
    int k = 2;
    int len = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < k; i++) {
        int minIndex = i; // Initialize the minimum index

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i; j < len; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the current element
        swap(array[i], array[minIndex]);
    }
    cout<<array[k-1];
}