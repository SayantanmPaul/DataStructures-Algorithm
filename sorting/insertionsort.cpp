#include<iostream>
using namespace std;

//Insertion sort: take an element and place it in their correct order
void Insertion_sort(vector<int> &arr, int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
} //time complextiy in all cases O(n*n)


int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Insertion_sort(arr, n);
    cout<<" sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}