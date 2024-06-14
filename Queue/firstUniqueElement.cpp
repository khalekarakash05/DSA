#include<iostream>
#include<queue>
using namespace std;

int main(){
    // string str = "ababcd";
    string str = "facfdcad";
    queue<int>q;
    int freq[26] = {0};

    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);

        //now find the ans
        while(!q.empty()){
            char frontCharacter = q.front();

            
            if(freq[frontCharacter-'a'] > 1){
                q.pop();
            }
            else{
                cout<<frontCharacter<<"->";
                break;
            }
        }

        if(q.empty()){
            cout<<"#->";
        }
    }


    return 0;
}