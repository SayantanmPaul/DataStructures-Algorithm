#include<iostream>
using namespace std;

// pair function
void pairFunction(int a, int b){
    pair<int,int> p(a, b);
    cout<<"printed as: ";
    cout<<p.first<<' '<<p.second<<endl;

    pair<int,int> arr[]={{4,6},{6,7},{8,9}};
    cout<<arr[1].second;
}

void vectorFunction(){
    vector<int> v;
    for(int i=0; i<10;i++){
        v.push_back(i);
    }
    cout<<"elements in the vector: ";

    /*
    we can use this also
    for(auto it: v){
        code;
    }
    */
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<' ';
    }
    cout<<endl;

    // accessing elements of vector using index
    cout<<"first element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;
    cout<<"size: "<<v.size()<<endl;
    cout<<"deleteing last element: "<<v[v.size()-1]<<endl;
    v.pop_back();
    cout<<"after update: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;

    // erase from vector

    // v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);
    cout<<"After erase function: ";
    for(auto it: v){    
        cout<<it<<' ';
    }
    cout<<endl;

    // insert function
    vector <int> r(2,100); //{100,100}
    r.insert(r.begin(), 5); //{5,100,100}
    cout<<"Inserted elements: ";
    for(auto it: r)
        cout<<it<<' ';
    cout<<endl;

    r.insert(r.begin()+1, 3, 57); //{location, numcount, which num}
    //output looks like: {5,57,57,57,100,100}

    cout<<"size of the vector: "<<r.size()<<endl; //size of the vector

    // copy from vector
    vector<int> copy(2,50); //{50,50}
    r.insert(r.begin()+3, copy.begin(), copy.end()); //{5 57 57 50 50 57 100 100}
    for(auto it: r)
        cout<<it<<' ';
    cout<<endl;

    // swaping
    v.swap(r);
    //clear
    v.clear();
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    vectorFunction();
}