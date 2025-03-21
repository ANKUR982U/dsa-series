//ap-4,7,10,13,16....upto n terms
#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(i=4;i<=4*n;i+=3)
    {
        cout<<i<<endl;
    }
    return 0;
}