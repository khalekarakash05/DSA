#include<iostream>
#include<string>
using namespace std;

int main(){

    // string name = "akash  khalekar";
    // string middle = "narayan";


    // name.insert(6, middle);
    // cout<<name<<endl;


    string str1= "yar tera super start desi kalakar";
    string str2 = "star";

    // if(str1.find(str2)){
    //     cout<<"string found"<<endl;;
    // }
    // else{
    //     cout<<"string not found"<<endl;
    // }

    if(string :: npos != str1.find(str2)){
        cout<<"is case me string find hui hai"<<endl;
    }
    else{
        cout<<"string is not found "<<endl;
    }

    string name = "akash";
    string names = "akash";

    if(name.compare(names) == 0){
        cout<<"they are equal"<<endl;
    }
    else{
        cout<<"they are not equal"<<endl;
    }

    string car = "this is my supraaaaaaaaaaa";
    
    string substring = car.substr(11,car.length());
    cout<<substring<<endl;




    // string name;

    // // getline(cin, name);
    // // cin>>name;/
    // getline(cin, name);

    // cout<<name<<endl;
    // cout<<name.length()<<endl;
    // if(name.empty()){
    //     cout<<"given string is empty"<<endl;
    // }
    // else{
    //     cout<<"given string is not empty"<<endl;
    // }

    // cout<<name.at(0)<<endl;
    // cout<<name.at(8)<<endl;
    // cout<<name.front()<<endl;
    // cout<<name.back()<<endl;

    // string str1 = "akash";
    // string str2 = "khalekar";
    // str1.append(str2);
    // cout<<str1<<endl;

    // str1.erase(1,2);
    // cout<<str1;

    return 0;
}