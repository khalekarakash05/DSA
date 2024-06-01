#include<iostream>
using namespace std;

int main(){

    //number pyramid pattern=>
    // int n = 6;
    // for(int row = 0; row<n; row++){
    //     for(int col = 0; col<n-row-1; col++){
    //         // cout<<"* ";
    //         if(col==0 ){
    //             cout<<row+1<<" ";
    //         }
    //         else if(col ==n-row-2){
    //             cout<<n-1<<"  ";
    //         }
    //         else if(row == 0){
    //             cout<<col+1<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }












    //pyramid pattern =>
    // int n = 6;
    // for(int row = 0; row<n; row++){
    //     for(int col = 0; col<n-row; col++){
    //         // cout<<"* ";
    //         if(col==0 || col == n-row-1 ||row==0){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }













    //hollow pyramid pattern => 
    // int n = 4;
    // for(int row = 0; row < n; row++) {
    //     // Print leading spaces
    //     for(int col = 0; col < n - row - 1; col++) {
    //         cout << " ";
    //     }
    //     // Print stars and spaces inside the pyramid
    //     for(int col = 0; col < 2 * row + 1; col++) {
    //         if(col == 0 || col == 2 * row || row == n - 1) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }










    //Alphabets pyramid pattern=>

    // int n = 5;
    // for(int row = 0; row<n; row++){
    //     char ch;
    //     for(int col= 0; col<row+1; col++){
    //         ch = col+1+'A'-1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }







    //Annonymous number pattern=>
    // int n = 4;
    // for(int row = 0; row<n; row++){
    //     for(int col = 0; col < 2*row+1; col++){
    //         //apply even odd conditions
    //         if(col%2 == 1){
    //             cout<<"* ";
    //         }
    //         else{
    //             //odd aaya to no print karne hai
    //             cout<<row+1<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    











    //Annonymous pattern => 
    
    // int n = 5;
    // for(int row = 0; row<n; row++){
    //     for(int i = 0; i<n-row; i++){
    //         cout<<"* ";
    //     }
    //     //now print their inbetween space
    //     for(int j = 0; j< (2*row)+1; j++){
    //         cout<<"  ";
    //     }

    //     for(int k = 0; k<n-row; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int row = 0; row<n; row++){
    //     for(int i =0 ; i<row+1; i++){
    //         cout<<"* ";
    //     }
    //     //print spaces
    //     for(int j = 0; j<2*n-2*row-1; j++){
    //         cout<<"  ";

    //     }
    //     for(int k = 0; k<row+1; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;






    //Hollow pyramid pattern => 
    // int n = 5;
    // int row =0;
    // int col =0;
    // int totalCol = n-row;
    // for(row = 0; row < n ; row++){
    //     for(col = 0; col < row; col++) {
    //         cout << " ";
    //     }
    //     for(col = 0; col < 2 * (n - row) - 1; col++) {
    //         if(col == 0 || col == 2 * (n - row) - 2) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;







    //Dymond Pyramid pattern=>
    // int n;
    // cout<<"enter the no of rows you want to print the dimond pyramid pattern"<<endl;
    // cin>>n;
    // for(int row = 0; row < n; row++){
    //     for(int i = 0; i<n-row-1; i++){
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<row+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // // cout<<endl;5
    // for(int row = 0; row<n; row++){
    //     for(int i = 0; i<row; i++){
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<n-row; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;




    //Inverted Full Pyramid pattern => 

    // int n; 
    // cout<<"enter the no of rows you want to print the pattern "<<endl;
    // cin>>n;
    // for(int row = 0; row<n; row++){
    //     for(int i = 0; i<row; i++ ){
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<n-row; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    return 0;
}