#include<iostream>
#include<vector>
using namespace std;

void function(int n, vector<int>& res){
    if(n==0) return;

    function(n-1,res);
    
    res.push_back(n);
}

vector<int> printNfunc(int n){
    vector<int> res;

    function(n, res);

    for(auto it: res)
        cout<<it<<' ';

    return res;
}

int main(){
    printNfunc(5);
}
