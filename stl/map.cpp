#include<iostream>
#include<map>
using namespace std;

void MapExplain(){
    map<int, int> mp; //{key, value} key and value can be any data type 
    //map stores unique keys in sorted order

    mp[0]=6; //stores as {0,6}
    mp[2]=4; //{2,4}

    mp.emplace(0,4);
    mp.insert({3,7});
    mp.insert({7,10});
    //it stores value sorted order of key

    for(auto it: mp){
       cout<<it.first<<", "<<it.second<<endl;
    } 

    cout<<mp[7]<<endl;

    auto it2=mp.find(3);

    cout<<it2->second<<endl;

    //lower_bound and upper_bound
    auto it3=mp.lower_bound(3);

    auto it4=mp.upper_bound(7);
    cout<<it3->second;
    
    // erase, swap, size, empty are the same
}
void explainMultiMap(){
    //stores duplicate keys in sorted order others are the same with map
    //{1,2}
    //{1,5}
    //map[key] willn't work 
}
void explainUnorderedMap(){
    //same as unordered set not stores in sorted order  -.randomise but unique
}

//map-> O(logn)
//unordered_map-> O(1) worst case O(n)

int main(){
    MapExplain();
}   