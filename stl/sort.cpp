#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void explainSort(){
    vector<int> qs;

    qs.push_back(5);
    qs.push_back(4);
    qs.push_back(2);
    qs.push_back(7);
    qs.push_back(1);
    qs.push_back(10);
    
    for(auto it: qs)
        cout<<it<<' ';
    
    cout<<endl;
    //assending order sort
    sort(qs.begin()+2, qs.end()-1);
    //decending order sort
    sort(qs.begin(), qs.end(), greater<int>());

    for(auto it: qs)
        cout<<it<<' ';
        
    //min and max values
    int max=*max_element(qs.begin(),qs.end());
    int min=*min_element(qs.begin(),qs.end());
}


bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first>p2.first) return true;
    return false;

}
void customSort(){

    pair<int,int> a[]={{2,4},{5,3},{0,2}};
    sort(a, a+n, comp);
}

int num=7;
int cnt= __builtin_popcount(num); //return 3 // 7=111
//6=110 in binary then returns 2

void permutations(){
    string s="586";
    sort(s.begin(), s.end());
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));
    
};
// 586
// 658
// 685
// 856
// 865

int main(){
    explainSort();
}        