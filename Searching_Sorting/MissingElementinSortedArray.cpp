#include<iostream>
using namespace std;

int findMissing(int arr[], int size){
     if(arr[size-1] == size){
        return size+1;
    }

    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans = 0;

    while(s<=e){
        if(arr[mid] - mid == 1){
            s = mid+1;
        }
        else{
            ans = mid;
            e = mid-1;
        }

        mid = (s+e)/2;
    }

    int missingNum = ans + 1;
    return missingNum;
}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

   int ans =  findMissing(arr,size);
   cout<<"missing element in an sorted array is : "<<ans<<endl;



    return 0;
}