#include <iostream>
using namespace std;

//Selection Sort
void SelectionSort(vector<int>&arr, int n){
    for(int i=0; i<=n-2; i++){ //can use j<n-1
        int mini=i;
        for(int j=i; j<=n-1; j++){ //can use j<n
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    //time complextity O(n*n)
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    SelectionSort(arr, n);
    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}