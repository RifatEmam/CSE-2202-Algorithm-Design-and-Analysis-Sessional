#include<bits/stdc++.h>
using namespace std;
int coinrow(vector<int>& coin){
int n=coin.size();
if(n<0)
    return 0;
if(n==0)
    return coin[0];
vector<int> dp(n);
  dp[0]=coin[0];
 dp[1]=max(coin[0],coin[1]);
for(int i=2;i<n;i++){
    dp[i]=max(dp[i-1],coin[i]+dp[i-2]);
}


   return dp[n-1];


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

    cout<<"max value : "<<coinrow(coin)<<endl;







return 0;
}
