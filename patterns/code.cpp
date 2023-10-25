#include<iostream>
using namespace std;
void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
}
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
}
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< i<<' ';
        }
        cout<<endl;
    }
}
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
}
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
void pattern6(int n) {      
	// Write your code here
	for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i+1; j++){
            cout<< j <<' ';
        }
        cout<<endl;
    }
}
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
void pattern7(int n) {
	// Write your code here  
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<' ';
        }
        // star
        for(int j=0; j<2*i+1; j++){
            cout<<'*';
        }
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<' ';
        }
        cout<<endl;
    }  
}
//     *    
//    ***   
//   *****  
//  ******* 
// *********
void pattern8(int n) {
	// Write your code here  
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++){
            cout<<' ';
        }
        // star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<'*';
        }
        // space
        for(int j=0; j<i; j++){
            cout<<' ';
        }
        cout<<endl;
    }  
}
// *********
//  ******* 
//   *****  
//    ***   
//     *  
void pattern9(int n) {
	// Write your code here  
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<' ';
        }
        // star
        for(int j=0; j<(2*i+1); j++){
            cout<<'*';
        }
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<' ';
        }
        cout<<endl;
    }  
}
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *    
void invertedpyramid(int n){
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<i; j++){
            cout<<' ';
        }
        // star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<'*';
        }
        // space
        for(int j=0; j<i; j++){
            cout<<' ';
        }
        cout<<endl;
    }  
}
void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void pattern11(int n) {
    // Write your code here.
    int start=1;
    for(int i=1; i<=n;i++){  
        if(i%2== 1) start=1;
        else start=0;
        for(int j=1; j<=i; j++){
            cout<<start<<' ';
            start=1-start;
        }
        cout<<endl;
    }
}
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
void pattern12(int n){
    int space=2*(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i; j++){
            cout<<j<<' ';
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=i;j>=1; j--){
            cout<<j<<' '; 
        }
        cout<<endl;
        space-=2;
    }
}
// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 
void pattern13(int n){
    int temp=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<temp<<' ';
            temp++;
        }
        cout<<endl;
    }
}
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<' ';
        }
        cout<<endl;
    }
}
// A 
// A B 
// A B C 
// A B C D 
// A B C D E
void pattern15(int n){
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<='A'+n-i; ch++){
            cout<<ch<<' ';
        }
        cout<<endl;
    }
}
// A B C D E 
// A B C D 
// A B C 
// A B 
// A
void pattern16(int n){
    for(int i=1; i<=n; i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<' ';
        }
        cout<<endl;
    }
}
// A 
// B B 
// C C C 
// D D D D 
// E E E E E
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        pattern15(n);
    }
}