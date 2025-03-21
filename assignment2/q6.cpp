//marks of students a,b and c are input through keybord and find   student with least marks
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter marks of students A,B and C: ";

    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"A has least marks";
    }
    else if(b<c){
        cout<<"B has least marks";
    }
    else{
        cout<<"C has least marks";
    }
    return 0;
}