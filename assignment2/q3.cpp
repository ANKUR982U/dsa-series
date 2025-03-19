//take any input year and determine whether it is leap year or not
#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"Leap year";
            }
            else{
                cout<<"Not a leap year";
            }
        }
        else{
            cout<<"Leap year";
        }
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}