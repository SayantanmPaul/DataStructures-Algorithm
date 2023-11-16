#include<iostream>
#include<set>
using namespace std;
//set: everything is in sorted order and uniqe

//set works always in log n time complexity
void multisetFunction(){
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    ms.insert(3);
    ms.insert(4);

    ms.erase(1); //all 1 will be erased

    int cnt=ms.count(3); // return 2
    cout<<cnt<<endl;

    //ms.erase(ms.find(1),ms.find(1)+3);

    cout<<"multiset: ";
    for(auto it: ms)
        cout<<it<<' ';    

    //other functions are the same
}

void unoderedSet(){
    unorderd_set<int> st; //stors in the unordered unique elements

    //all set functions are similar and lower_bound, upper_bound doesn't works

    //time complexity is O(1)
}
int main(){
    set <int> n;
    n.insert(5);
    n.insert(10);
    n.emplace(2);
    n.insert(1);
    n.insert(10);
    n.insert(15);

    auto it= n.find(10); //returns an itreator *it

    auto it2=n.find(16); 
    //if the element doesn't exist it always returns n.end() an itrator right after the end

    n.erase(10); //erase 10 and maintained the sorted order

    int exist=n.count(5);
    //returns value 1 or 0

    cout<<exist<<endl;

    //if the set {1,2,3,4,5,,6,7}
    auto es1=n.find(2);
    auto es2=n.find(5);

    n.erase(es1, es2); 
        //after erase {1,5,7,7} 

    multisetFunction();
}