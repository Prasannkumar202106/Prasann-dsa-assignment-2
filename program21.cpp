
#include<iostream>
using namespace std;
int main()
{
    int i, arr[5], n, x, z, y;
    cout<<"Enter 5 Elements (in ascending order): ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>n;
    x = 0;
    z = 4;
    y = (x+z)/2;
    while(x <= z)
    {
        if(arr[y]<n)
            x = y+1;
        else if(arr[y]==n)
        {
            cout<<"\nThe number "<<n<<" found at Position "<<y+1;
            break;
        }
        else
            z = y-1;
        y = (x+z)/2;
    }
    if(x>z)
        cout<<"\nThe number "<<n<<" is not present in given Array";
    cout<<endl;
    return 0;
}