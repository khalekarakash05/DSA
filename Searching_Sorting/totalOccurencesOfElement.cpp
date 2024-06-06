#include<iostream>
using namespace std;

int firstOccurences(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid;
    int ans= 0;

    while(s<=e){
        mid= (s+e)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
    }

    cout<<ans<<endl;
    return ans;
}

int lastOccurences(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid;
    int ans = 0;

    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    cout<<ans<<endl;
    return ans;
}

int main(){
    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50};
    int size  = sizeof(arr)/sizeof(int);
    int target = 30;
    int first = firstOccurences(arr, size, target);
    int last = lastOccurences(arr, size, target);
    int totalOccurences = last-first+1;
    cout<<"total Occerences of the give element is "<<totalOccurences<<endl;
    return 0;
}