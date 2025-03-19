//convert lowercase to uppercase and vice versa
#include<iostream>  
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Uppercase: "<<char(ch-'a'+'A');
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Lowercase: "<<char(ch+'a'-'A');
    }
    else{
        cout<<"Invalid character";
    }
    return 0;
}