#include<iostream>
using namespace std;

int main() {
	// Write your code here
	string n;
	cin>>n;
	int even=0, odd=0;
	for(int i=0; i<n.length(); i++){
        int num=n[i]-'0';
        if(num%2==0){
            even+=num;
        }
        else if(num%2==1){
            odd+=num;
        }
    }
    cout<<even<<" "<<odd; 
}
