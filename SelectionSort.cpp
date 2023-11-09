/*
 * The above function sorts an array in 
 * ascending order using the selection sort algorithm.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[] = {5,4,2,1,3};
    int len = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < len - 1; i++) {
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
    for(int e:array){
        cout<<e<<" ";
    }
}