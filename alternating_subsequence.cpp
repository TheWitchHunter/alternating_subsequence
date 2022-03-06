#include <bits/stdc++.h>
#define ll long long 
using namespace std;



int main(){
    ll t,n;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>n;
        ll arr[n];
        for(ll j=0;j<n;j++){
            cin>>arr[j];
        }
        ll k=0;
        ll sum1=0;
        while(k<n){
            if(arr[k]<0){
                
                ll max1=INT_MIN;
                while(k<n && arr[k]<0){
                    max1=max(max1,arr[k]);
                    k++;
                }
                sum1+=max1;
            }
            else {
                ll max2=INT_MIN;
                while(k<n && arr[k]>0){
                    max2=max(max2,arr[k]);
                    k++;
                }
                sum1+=max2;
            }
        }
        cout<<sum1<<endl;
    }

    return 0;
}

































