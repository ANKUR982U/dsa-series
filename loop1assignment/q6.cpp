//take an inter number n as input from user and print numbers from n to 1 using a loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i<<endl;
    }
    return 0;
}