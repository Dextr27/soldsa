#include<iostream>
using namespace std;

void pattern1(int n) {
    int i,j;
    int start= 1;
    for (i=0; i<n; i++) {
        if (i%2==0) start=1;  //for i=even the row starts with 1 else 0.
        else start=0;
        for(j=0; j<i; j++) {
            cout<<start;
            start = 1- start; //flip the output for the 2nd column
        }
        cout<<endl;

    }
}

int main() {
    pattern1(6); 
}