// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     if(x%2==0){
//         cout<<"Even";

//     }
//     else{
//         cout<<"odd";
//     }

// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int x;
    int flag;
    cin>>x;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag=1;
            
        }
        else{
            flag=0;
        }
        
        

    }
    if(flag){
            cout<<"prime";
        }
    else{
            cout<<"not prime";

    return 0;
}}