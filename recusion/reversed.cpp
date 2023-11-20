#include<iostream>
#include<vector>
using namespace std;

void recursiveFunc(int n, vector<int>& res){
    if(n<1) return;

    res.push_back(n);
    
    recursiveFunc(n-1, res);
}


vector<int> printNfunc(int n){
    vector<int> res;
    recursiveFunc(n,res);
    
    for(auto it: res)
        cout<<it<<' ';
    return res;
}

int main(){
    printNfunc(5);
}
