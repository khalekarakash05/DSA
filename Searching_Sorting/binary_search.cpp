#include<iostream>
using namespace std;

int binary(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans = 0;

    while(start <= end){
        if(arr[mid] == target){
            //store the ans and go to left side 
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    cout<<"first occurence of a number in a sorted array is : "<<ans<<endl;
    return ans;
    
}


int lastOccurence(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans = 0;

    while(start <= end){
        if(arr[mid] == target){
            //store the ans and go to left side 
            ans = mid;
            end = mid+1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    cout<<"first occurence of a number in a sorted array is : "<<ans<<endl;

    return ans;

}

int main(){
    int arr[ ]= {10, 20, 30, 30, 30, 30,40, 50};
    int size = sizeof(arr)/sizeof(int);
    int target = 30;
    int first = binary(arr, size, target);
    int last = lastOccurence(arr, size, target);
    int totalOccurence =last - first +1;
    cout<<"totaloccurence of element in an array is "<<totalOccurence<<endl;
    return 0;
}