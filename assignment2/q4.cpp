//length and breadth of a rectangle and find its area and perimeter and check which is greater
#include <iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    float area=l*b;
    float perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area is greater";
    }
    else{
        cout<<"Perimeter is greater";
    }
    return 0;
}