// take input sides of a triangle and determine whether it is equilateral, isosceles or scalene
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter  three sides of triangle: ";  
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral";
    }
    else if(a==b || b==c || c==a){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    return 0;
}