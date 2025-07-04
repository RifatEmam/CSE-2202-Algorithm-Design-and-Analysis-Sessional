#include <bits/stdc++.h>
using namespace std;

int knapsack(int n,int c,int wt[],int val[]) {
    int dp[n+1][c+1];

    for (int i=0;i<=n;i++) {
        for (int w=0; w<=c;w++) {
            if (i==0 ||w==0)
                dp[i][w]=0;
            else if (wt[i - 1]<=w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w]=dp[i - 1][w];
        }
    }

    return dp[n][c];
}

int main(){
    int n,c;

    cout <<"Enter the size : ";
    cin >> n;

    int wt[n],val[n];

    cout <<"\nEnter the weights  : ";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout <<"\nEnter the values  : ";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout <<"\nEnter the capacity of C: ";
    cin>>c;

    int maxValue = knapsack(n,c,wt,val);
    cout <<"Maximum value  = "<<maxValue<<endl;

    return 0;
}
