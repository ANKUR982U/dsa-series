//given three points and check if all three points fall in one straight line 
#include <iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter three points: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)){
        cout<<"All three points fall in one straight line";
    }
    else{
        cout<<"All three points do not fall in one straight line";
    }
    return 0;
}
