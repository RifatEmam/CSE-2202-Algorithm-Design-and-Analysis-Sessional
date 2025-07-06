#include<bits/stdc++.h>
using namespace std;
int coinrow(vector<int>& coin,int n){

if(n<0)
    return 0;
if(n==0)
    return coin[0];

    return max(coinrow(coin,n-1),coin[n]+coinrow(coin,n-2));


}

int main(){
    int n;
    cout<<"Enter the size : ";
cin>>n;
vector <int> coin(n);
cout<<"the coin are : ";
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    cout<<"max value : "<<coinrow(coin,n-1)<<endl;




return 0;
}

