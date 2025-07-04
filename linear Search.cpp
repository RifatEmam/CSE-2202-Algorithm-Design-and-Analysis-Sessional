#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int value;
    int pos=0;
    cout<<" the size of array is: ";
    cin>>n;
    int a[n];
    cout <<"enter an element of array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout <<" the  array elemnts are :  ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nthe value i am searching the array : ";
    cin>>value;

    for (i=0; i<n; i++)
    {
        if(value==a[i])
        {

            pos=i+1;
            break;
        }

    }

    if(pos==0)
    {
        cout<<"item not found "<<endl;

    }
    else
    {
        cout<<"item  found at location "<<pos<<endl;
    }






    return 0;
}
