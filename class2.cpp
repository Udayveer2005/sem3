// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"WRITE A NUMBER BETWEEN(1-7)";
//     cin>>n;
//     switch(n){

//         case 1:
//         cout<<"MONDAY";
//         break;
//         case 2:
//         cout<<"TUESDAY";
//         break;
//         case 3:
//         cout<<"WEDNESDAY";
//         break;
//         case 4:
//         cout<<"THRUSDAY";
//         break;
//         case 5:
//         cout<<"FRIDAY";
//         break;
//         case 6:
//         cout<<"SATURDAY";
//         break;
//         case 7:
//         cout<<"SUNDAY";
//         break;
//         default:
//         cout<<"INVALID";
        
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a,b;
    int op;
    cout<<"ENTER TWO NUMBERS :";
    cin>>a>>b;
    cout<<"Press 1 for addition"<<endl<<"Press 2 for subtraction"<<endl<<"Press 3 for multiplication"<<endl<<"Press 4 for division"<<endl;
    cin>>op;
    switch(op){
        case 1:
        cout<<"sum is :"<<a+b;
        break;
        case 2:
        cout<<"diff is :"<<a-b;
        break;
        case 3:
        cout<<"product is :"<<a*b;
        break;
        case 4:
        cout<<"division is :"<<a/b;
        break;
        default:
        cout<<"ENTER VALID OPERATION";
        break;
    }

return 0;
}