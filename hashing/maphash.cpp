#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    //pre compute
    //map hash table
    unordered_map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }   
    return 0;
}

