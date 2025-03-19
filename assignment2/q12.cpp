//program to convert cm to feet,km to miles,us dollar to indian rupees
#include<iostream>
using namespace std;
int main(){
    int choice;
    float cm,km,usd;
    cout<<"Enter 1 to convert cm to feet\n";
    cout<<"Enter 2 to convert km to miles\n";
    cout<<"Enter 3 to convert us dollar to indian rupees\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter cm: ";
            cin>>cm;
            cout<<"Feet: "<<cm/30.48;
            break;
        case 2:
            cout<<"Enter km: ";
            cin>>km;
            cout<<"Miles: "<<km*0.621371;
            break;
        case 3:
            cout<<"Enter usd: ";
            cin>>usd;
            cout<<"Indian Rupees: "<<usd*73.5;
            break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}