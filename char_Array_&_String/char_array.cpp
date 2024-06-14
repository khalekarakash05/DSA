#include<iostream>
using namespace std;

int main(){
    char ch[100] = "Hello       World";
    cout<<ch<<endl; 
    int size = sizeof(ch)/sizeof(char);
    // for(int i = 0; i<size; i++){
    //         cout<<ch[i]<<" ";
    // } 
    // cout<<endl; 


    int i = 0;
    int j = size-1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }

    

    //covert to lower case 
    for(int i = 0; i<size; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i] - 'a' + 'A';
            // cout<<ch[i]<<" ";
        }
    }

    for(int i = 0; i<size; i++){
        
            cout<<ch[i]<<" ";
    }
    return 0;
}