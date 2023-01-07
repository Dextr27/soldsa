#include<iostream>
using namespace std;

void pattern7(int n){ 
    int i,j;
    
    for (i=0; i<5; i++) {
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

void pattern8(int n) {
    int i,j;
    
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

int main(){
    pattern7(5);
    pattern8(5);
}
