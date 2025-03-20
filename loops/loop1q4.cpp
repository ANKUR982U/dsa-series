//print gp with common ratio 5 and first term 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=2;
    for(int i=1;i<n;i++){
        cout<<a<<" ";
        a=a*5;
    }
    return 0;
}