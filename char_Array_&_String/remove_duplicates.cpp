#include<iostream>
using namespace std;

int main(){

    string str = "azxxzy";
    string temp = "";

    int index = 0;
    while(index < str.length()){
        if(!temp.empty() && temp[temp.length()-1] == str[index]){
            //is case me pop kar do 
            temp.pop_back();
        }
        else{
            temp.push_back(str[index]);
        }
        index++;
    }
    

    cout<<temp<<endl;

    return 0;
}