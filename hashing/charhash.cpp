#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    //pre computes

    // total character is 256 and the set to 0
    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
        //also can use hash[s[i]]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        /* code */
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
        // can use hash[c]
    }
    return 0;
}