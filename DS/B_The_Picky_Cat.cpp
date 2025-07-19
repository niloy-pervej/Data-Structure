#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int count=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(abs(a[0])<abs(a[i]))
            count++;
        }
        //cout<<count<<"\n";
        if((n-1)/2<=count)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
    return 0;
}