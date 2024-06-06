#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void sortColors(int arr[], int size){
    int i = 0; 
    int j = 0;
    int k = size-1;
    while(i<=k){
        if(arr[i] ==0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[i] == 2){
            swap(arr[i], arr[k]);
            i++;
            k--;
        }
        else{
            //1 aayega to sirf increment kar do i ko
            i++;
        }
    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotatedArrayByk(int arr[], int size, int k){
    vector<int>v(size);
    for(int i =0; i<size; i++){
        int newIndex = (i+k)%size;
        v[newIndex] = arr[i];
    }

    for(int j = 0; j<size; j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
}
int missingNumber(int arr[], int size){
    //1st approach => sum
    // int totalSum = (size*(size+1))/2;
    // int sum = 0;
    // for(int i= 0; i<size; i++){
    //     sum = sum+ arr[i];
    // }
    // int result = totalSum - sum;
    // return result;

    //2nd approach => indexing 
    //sort the array first
    // sort(arr, arr+size);

    // for(int i = 0; i<size; i++){
    //     if(arr[i] != i){
    //         return i;
    //     }
        
    // }
    // return size;


    //3rd approach => xoR
    sort(arr, arr+size);
    int ans= 0; 
    for(int i = 0; i<size; i++){
        ans ^= arr[i];
        
    }
    int n = size+1;
    for(int i = 0; i<n; i++){
        ans ^= i;
        
    }
    return ans;
    

}

int main(){

    // int arr[]={23, -7, 12, -10, 40, -11, 60};
    // int arr[] = {1, 0, 2, 2, 1, 0, 1, 0};
    // int arr[] = {10, 20, 30, 40, 50, 60};
    int arr[] = {0, 3, 4,1};
    int size = sizeof(arr)/sizeof(int);
    // sortColors(arr, size);

    // int k = 3;
    // rotatedArrayByk(arr, size, k);

    int ans = missingNumber(arr, size);
    cout<<"missing number from an  array is : "<<ans<<endl;




    // int left = 0; 
    // int right = size -1;

    // while(left<= right){
    //     if(arr[left] >0 && arr[right]< 0){
    //         swap(arr[left] , arr[right]);
    //         left++;
    //         right--;
    //     }
    //     else if(arr[left]<0){
    //         left++;
    //     }
    //     else {
    //         right--;
    //     }
    // }

    // for(int k =0; k<size; k++){
    //     cout<<arr[k]<<" ";
    // }
    // cout<<endl;
    return 0;
}