#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char ch[100], int n){
    int i = 0;
    int j = n-1;

    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100] = "NooN";
    // int n = sizeof(ch)/sizeof(char);
    int n = strlen(ch);
    bool ans = isPalindrome(ch,n);
    if(ans==1){
        cout<<"given char is palindrome"<<endl;
    }
    else{
        cout<<"is not a palindrome"<<endl;
    }
    return 0;
}