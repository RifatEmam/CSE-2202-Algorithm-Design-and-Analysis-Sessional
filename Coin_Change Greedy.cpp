#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,amount;
    cout<<" the size of array : ";

    cin>>n;

    int coins[n];
    cout<<"the coins are : ";
    for(i=0; i<n; i++)
    {
        cin>>coins[i];

    }
    cout<<"Enter the amount : ";

    cin>>amount;

    sort(coins,coins+n,greater<int>());

    cout <<"coins used : ";
    int count=0;
    for(i=0; i<n; i++)
    {
        while(amount>=coins[i])
        {
            amount-=coins[i];
            cout<<coins[i]<<" ";
            count++;
        }
    }
    cout<<endl;
    if(amount != 0)
    {
        cout<<"cannot making change ";
    }
    else
    {
        cout<<"Minimum coin used : "<<count;
    }



    return 0;
}
