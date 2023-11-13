#include<iostream>
#include<set>
using namespace std;
//set: everything is in sorted order and uniqe

//set works always in log n time complexity

int main(){
    set <int> n;
    n.insert(5);
    n.insert(10);
    n.emplace(2);
    n.insert(1);
    n.insert(10);
    n.insert(15);

    auto it= n.find(10); //returns an itreator *it

    auto it=n.find(16); 
    //if the element doesn't exist it always returns n.end() an itrator right after the end

    n.erase(10); //erase 10 and maintained the sorted order

    int exist=n.count(5);
    //returns value 1 or 0

    cout<<exist;

    //if the set {1,2,3,4,5,,6,7}
    auto es1=n.find(2);
    auto es2=n.find(5);

    n.erase(es1, es2); 
        //after erase {1,5,7,7}
    

}