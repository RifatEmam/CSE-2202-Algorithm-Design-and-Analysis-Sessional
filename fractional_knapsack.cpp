#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the size : ";
    cin>>n;
    int profit[n],wt[n];
     cout<<"Enter the weight  : ";
     for(i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<"Enter the profit  : ";
    for(i=0;i<n;i++){
        cin>>profit[i];
    }
    int c;
    cout<<"Enetr the capacity : ";
    cin>>c;
    double rat[n];
    for(i=0;i<n;i++){
        rat[i]=(double)profit[i]/wt[i];
    }
   for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (rat[i] < rat[j]) {
                swap(rat[i], rat[j]);
                swap(wt[i], wt[j]);
                swap(profit[i], profit[j]);
            }
        }
    }


    cout<<"the sorted ratio : ";
for(i=0;i<n;i++){
    cout<<rat[i]<<" ";
}
cout<<endl;
double total=0.0;
for(i=0;i<n;i++){
    if(wt[i]>c){
        break;
    }else{
         total=total+profit[i];
        c=c-wt[i];

    }

}
if(i<n){
        total=total+(rat[i]*c);
    }



cout<<"maximum profit is : "<<total;







return 0;
}
