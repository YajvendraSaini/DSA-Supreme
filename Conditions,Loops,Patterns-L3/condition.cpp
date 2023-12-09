// Learning Conditions

#include <iostream>
using namespace std;

// if-statement

// int main(){
//     int age;

//     cout <<"Enter your age"<<endl;
//     cin>> age;

//     if(age>17){
//         cout<<"You can vote"<<endl;
//     }

// }


//if-else statement

// int main(){
//     int age;

//     cout<<"Enter your age"<<endl;
//     cin>>age;

//     if(age>18){
//         cout<<"you can vote."<<endl;
//     }
//     else{
//         cout<<"You can not vote."<<endl;
//     }
// }

//Nested if-else statement

int main(){
    int marks;

    cout<<"Enter your marks"<<endl;
    cin >> marks;

    if(marks>=90){
        cout<<"You got A"<<endl;
    }
    else{
        if(marks>=80){
            cout<<"You got B"<<endl;
        }
        else{
            if(marks>=50){
                cout<<"You got C"<<endl;
            }
            else{
                if(marks>=30){
                    cout<<"You got D"<<endl;
                }
                else{
                    if(marks<30){
                        cout<<"You got F"<<endl;
                    }
                }

            }
        }
    }

}