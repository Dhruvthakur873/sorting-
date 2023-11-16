// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = { 1,2,3,4,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 2;
//     int lb =-1;
//     int up =-1;
//     int target = 5;
//     bool flag =true;
//     int low = 0;
//     int high = n-1;
//     while(low<=high){
//         int mid = low + (high - low)/2;
//         if(arr[mid]==target){
//             flag = false;
//             lb= mid;
//             up = mid+1;
//             break;
//         }
//         else if(arr[mid]>target){
//             high = mid-1;
//         }else {
//             low =mid+1;
//         }
//     }
//     if(flag){
//         lb = high;
//         up = high +1;
//     }
//     cout<<"upper_bound = "<<up<< " and "<<" lowerbound  ="<<lb;
//     cout<<endl;
//     int count = 0;
//     vector<int>v;
//     while(lb>=0&&up<=n-1&&count<=k){
//         if(target - arr[lb]< arr[up] - target){
//             v.push_back(arr[lb]);
//             count++;
//             lb--;
//         }
//         else if(target - arr[lb]== arr[up] - target){
//             v.push_back(arr[lb]);
//             count++;
//             lb--;
//         }
//         else if(target - arr[lb]> arr[up] - target){
//             v.push_back(arr[up]);
//             count++;
//             up++;
//         }
//     }
//     while(lb>=0&&count<=k){
//         v.push_back(arr[lb]);
//         count++;
//         lb--;
//     }
//     while(up<=(n-1)&&count<=k){
//         v.push_back(arr[up]);
//         count++;
//         up++;
//     }
//     for(int e:v){
//         cout<<e<<" ";
//     }
// }
/* The code is finding the k closest elements to a target value in a sorted array. */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3, 4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int lb = -1;
    int up = -1;
    int target = 3;
    bool flag = true;
    int low = 0;
    int high = n - 1;
    vector<int> v;
    if(target<arr[0]){
        for(int i =0;i<k;i++){
            v.push_back(arr[i]);
        }
    }
    else if(target > arr[n-1]){
        for(int i =n-1;i>k;i--){
            v.push_back(arr[i]);
        }
    }
    else{
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                flag = false;
                lb = mid;
                up = mid + 1;
                break;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (flag) {
            lb = high;
            up = high + 1;
        }

        cout << "upper_bound = " << up << " and " << " lowerbound  =" << lb << endl;

        int count = 0;

        while (lb >= 0 && up <= n - 1 && count < k) {
            if (target - arr[lb] <= arr[up] - target) {
                v.push_back(arr[lb]);
                count++;
                lb--;
            } else {
                v.push_back(arr[up]);
                count++;
                up++;
            }
        }

        while (lb >= 0 && count < k) {
            v.push_back(arr[lb]);
            count++;
            lb--;
        }

        while (up <= (n - 1) && count < k) {
            v.push_back(arr[up]);
            count++;
            up++;
        }
    }
    sort(v.begin(),v.end());
    for (int e : v) {
        cout << e << " ";
    }

    return 0;
}
