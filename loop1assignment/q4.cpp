//gp-3,12,48....upto n terms
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(i=3;i<=pow(4,n);i*=4)
    {
        cout<<i<<endl;
    }
    return 0;
}