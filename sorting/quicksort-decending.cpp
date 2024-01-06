#include<vector>
#include<iostream>
using namespace std;

int pivot(vector<int> &arr, int low, int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while (i<j)
    {
        // to get decending order
        // only change in arr[i]>=pivot
        while (arr[i]>=pivot && i<=high-1)
        {
            i++;
        }
        // only change in arr[j]<=pivot
        while (arr[j]<=pivot && j>=low+1)
        {
            j--;
        }
        if(i<j){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;

    return j;
    
}

void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int partition_index=pivot(arr, low, high);
        quick_sort(arr,low, partition_index-1);
        quick_sort(arr,partition_index+1, high);
    }
}

int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
        vector<int> arr(n); 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int low=0;
    int high=arr.size()-1;
    quick_sort(arr, low, high);
    cout<<"after quick sort applied: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    } 
}