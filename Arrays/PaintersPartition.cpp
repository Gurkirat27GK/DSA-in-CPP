// Each painter takes 1 unit of time to paint 1 unit of the board. The problem is to find the minimum time to get this job done under the constraints that any painter will only paint continuous sections of boards.

#include <iostream>
using namespace std;

bool isPossible(int boards[], int n, int m, int mid){
    int painters = 1;
    int sum = 0;

    for (int i = 0; i < n; i++){
        if (sum + boards[i] <= mid){
            sum = sum + boards[i];
        }
        else{
            painters++;
            if (painters > m || boards[i] > mid){
                return false;
            }
            sum = boards[i];
        }
    }
    return true;
}

int PainterPartition(int boards[], int n, int m){
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum = sum + boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if (isPossible(boards, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;

    cout << "Minimum time to paint boards: " << PainterPartition(arr,n,m);

    return 0;
}

// Exactly same as book allocation problem