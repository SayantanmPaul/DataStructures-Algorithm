#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"array size n:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //pre compute
    int hashing[n+1]={0};
    for(int i=0; i<n; i++){
        hashing[arr[i]]+=1;
    }

    cout<<"loop size: "<<endl;
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int num;
        cin>>num;
        //fetch from precompute
        cout<<"count of "<<num<<":"<<endl;
        cout<<hashing[num]<<endl;
    }

    return 0;
    
}