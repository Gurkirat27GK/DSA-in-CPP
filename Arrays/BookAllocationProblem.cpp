// Given a number of pages in N different books and M students. The books are arranged in ascending order of the number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum. 

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++){
        if (pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }
        else{
            studentCount++;
            if (studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int AllocateBooks(int arr[], int n, int m){
    int start = 0;     // Min = 0
    int sum = 0;

    for (int i = 0; i < n; i++){     // Max = sum of array
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if (isPossible(arr, n, m, mid)){
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
    int arr[4] = {10,20,30,40};

    cout << AllocateBooks(arr, 4, 2) << endl;
}