#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n= 5;
    
    for (i=4; i>=0; i--) {
        //space
        for (j=0; j<n-i-1; j++) {
            cout<<" ";

        }
        //star
    
        for (j=0; j<2*i +1 ; j++) {
            cout<<"*";
        }
        //space
        for (j=0; j<n-i-1; j++) {
            cout<<" ";

        }
        cout<<endl;       
    }

    

} 
