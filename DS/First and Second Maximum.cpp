#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    cin>>array[i];
    int max,smax;
    if(array[0]>array[1]){
        max=array[0];
        smax=array[1];
        }
        else {
            max=array[1];
            smax=array[0];
        }
    for(int i=2;i<n;i++){
        if(max<array[i]){
            smax=max;
            max=array[i];
        }
        else{

            if(array[i]>smax)
             smax=array[i];
        }
    }
    cout<<max<<"\t"<<smax;

}
