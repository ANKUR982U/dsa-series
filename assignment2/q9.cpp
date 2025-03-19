//input any charactee and check whether it is alphabet, digit or special character
#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout<<"Alphabet";
    }
    else if(c>='0' && c<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special character";
    }
    return 0;
}