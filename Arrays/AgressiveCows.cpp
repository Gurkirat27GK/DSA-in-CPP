// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.

#include <iostream>
using namespace std;

bool isPossible(int stalls[], int n, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < n; i++){
        if (stalls[i] - lastPos >= mid){
            cowCount++;
            if (cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
 
int AggressiveCows(int stalls[], int n, int k){

    //sort (stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;

    for (int i = 0; i < n; i++){
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if (isPossible(stalls, k, n, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int arr[] = {4,2,1,3,6};
    int n = 5;
    int k = 2;

    return 0;
}

// Book allocation problem ka ulta