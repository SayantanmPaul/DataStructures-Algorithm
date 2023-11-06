#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void usingStack(){
    //stack means last in first out(LIFO)

    stack<int> st;
    st.push(5); //{5}
    st.push(8); //{8,5}
    st.push(12); //{12,8,5}

    cout<<st.top()<<endl; //prints 12
    cout<<st.size();
}

void usingQueue(){
    //queue is First in first out(FIFO)
    queue<int> q;
    q.push(2);
    q.push(6);
    q.push(9);
    q.emplace(12);
    while (!q.empty())
    {
        cout<<q.front()<<' ';
        q.pop();   
        /* code */
    }
    cout<<endl;
    q.back()+=2; //12+2=14
    cout<<q.back()<<endl;
}
// priority queue
void usePriorityQueue(){

    //max Heap
    priority_queue <int> pq;
    pq.push(5); //{5}
    pq.push(10); //{10,5}
    pq.emplace(12); //{12,10,5}
    while(!pq.empty()){
        cout<<pq.top()<<' ';
        pq.pop();
    }
    cout<<endl;
    cout<<pq.top();
    cout<<endl;

    //min Heap
    priority_queue<int, vector<int>, greater<int>> qe;
    qe.push(3);
    qe.push(1);
    qe.push(10);
    qe.push(8);
    while(!qe.empty()){
        cout<<qe.top()<<" ";
        qe.pop();
    }
}


int main(){
    usingQueue();
    usePriorityQueue();
}