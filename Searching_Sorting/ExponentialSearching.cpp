#include<iostream>
using namespace std;

int bs(int arr[], int n, int start, int end, int x){
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] <x){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int exponentialSerach(int arr[], int n , int x){
    if(arr[0] == x){
        return 0;
    }

    int i = 1;
    while(i<n && arr[i] <= x){
        i = i*2;
    }

    return bs(arr, n, i/2, min(i,n-1), x);
}

int main(){

    int arr[] = {3, 4, 5, 6, 11, 12, 13, 14 , 15, 56, 59, 87,99};
    int n = sizeof(arr)/sizeof(int);
    int x = 14;

    int ans = exponentialSerach(arr, n , x);
    cout<<"exponenetial search ans using binary search is : "<<ans<<endl;
    return 0;

}