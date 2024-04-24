#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string str){
    stack<char>st;
    for(int i =0; i<str.length() ; i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' || 
            ch == '-' || ch == '*' || ch == '/' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch == ')'){
            int operatorCount = 0;
            while(!st.empty() && st.top() != '(' ){
                char temp = st.top();

                if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    operatorCount++;
                }
                st.pop();
            }
            st.pop();
            if(operatorCount == 0){
                return true;
            }
        }
        else if(ch == '}'){
            int operatorCount = 0;
            while(!st.empty() && st.top() != '{' ){
                char temp = st.top();

                if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    operatorCount++;
                }
                st.pop();
            }
            st.pop();
            if(operatorCount == 0){
                return true;
            }
        }
        else if(ch == ']'){
            int operatorCount = 0;
            while(!st.empty() && st.top() != '[' ){
                char temp = st.top();

                if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    operatorCount++;
                }
                st.pop();
            }
            st.pop();
            if(operatorCount == 0){
                return true;
            }
        }
    
    }
    return false;
}

int main(){
    string str = "([{a+b}]*(c+d))";
    bool ans = checkRedundant(str);
    if(ans == true){
        cout<<"yes redundant brackets are available"<<endl;
    }
    else{
        cout<<"no redundant brackets are available there in the expression"<<endl;
    }
    return 0;
}