#include<iostream>
#include<vector>
using namespace std;

void printStringfunc(int n,vector<string>& st){
    if(n==0) return;
    st.push_back("whats up");

    printStringfunc(n-1, st);
}
vector<string> func(int n){
    vector<string> str;
    printStringfunc(n, str);

    for(auto it: str){
        cout<<it<<endl;
    }
    return str;
}
int main(){
    func(6);
}