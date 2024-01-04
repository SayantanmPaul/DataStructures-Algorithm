#include<iostream>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;

    //compareing for sorting
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        if(arr[right]<=arr[high]){
            temp.push_back(arr[right]);
            right++;
        }
    }
    // after sorting if more number numbers are leftover then directly add them
    while (left<=mid)
    {
        /* code */
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        /* code */
        temp.push_back(arr[right]);
        right++;
    }

    //temp array to the orginal array
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
    
}

void merge_sort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    // check for low to mid
    merge_sort(arr, low, mid);
    // check for mid+1 to the last
    merge_sort(arr, mid+1, high);
    //merge togather
    merge(arr, low, mid, high);

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
    int high=n-1;
    merge_sort(arr, low, high);
    cout<<"after merge sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}