#include<iostream>
using namespace std;

int que(int dividend, int divisor){
    int s = 0; 
    int e = dividend;
    int ans = -1;

    //binary search
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid*divisor == dividend){
            return mid;
        }
        else if(mid*divisor < dividend){
            //store the answer and go to right side by start = mid + 1;
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return ans;
}

int main(){
    int dividend = 29;
    int divisor = 7;
    int quetient;

    int ans = que(dividend, divisor);
    cout<<"quetient of the given numbers is : "<<ans<<endl;
    return 0;
}