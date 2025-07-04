#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter an array size : ";
    cin>>n;
    int a[n];
    cout<<"Enter an array Elements : ";
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\nthe  array : ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    for(i=0;i<n-1;i++){
            int flag=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                  flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    cout<<"\nthe sorted array : ";
    for( i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }




return 0;
}
