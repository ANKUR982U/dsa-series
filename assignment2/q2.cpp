//take radius and check whether area or circumference is greater
#include <iostream>
using namespace std;
int main(){
    float r;
    cin>>r;
    float area=3.14*r*r;
    float circumference=2*3.14*r;
    if(area>circumference){
        cout<<"Area is greater";
    }
    else{
        cout<<"Circumference is greater";
    }
    return 0;
}