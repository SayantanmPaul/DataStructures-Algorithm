#include<iostream>
using namespace std;


//optimised bubble sort
void Optimised_Bubble_Sort(vector<int> &arr, int n){
    for (int i = n-1; i>= 1; i--){
        int swap_exists=0; //keeps  track any swap happened in first time loop
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap_exists=1; //if swap happend changeing the value
            }
        }
        if(swap_exists==0) break; 
        //time complextity best case O(n) in worst case O(n*n)
    }
}

///bubble sorting
void Bubble_Sort(vector<int> &arr, int n){
    for (int i = n-1; i>= 1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //time complextity all cases case O(n*n) 
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    Optimised_Bubble_Sort(arr, n);

    cout<<"after sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}