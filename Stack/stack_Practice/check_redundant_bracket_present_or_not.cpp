#include<iostream>
#include<stack>
using namespace std;


bool checkpalindrome(string &str){
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '+'|| ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else if(ch == ')'){
            int countCharacter = 0;
            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp == '+'  || temp == '-' || temp == '*' || temp == '/'){
                    countCharacter++;
                }
                st.pop();
            }
            st.pop();
            //agar yha tak pahuche ho to aapke
            //stack ke top pr opening bracket hoga
            if(countCharacter == 0){
                return true;
            }
        }
    }
    //yaha tak pahuche hai to redundant bracket present hai
    return false;
}

int main(){
    string str = "((a+b)*(c-d))";
   
    bool ans = checkpalindrome(str);

    if(ans == 1){
        cout<<"Redundant bracket is present"<<endl;
    }
    else{
        cout<<"Redundant bracket is not present"<<endl;
    }
    return 0;
}