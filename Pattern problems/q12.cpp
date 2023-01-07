#include<iostream>
using namespace std;

void pattern1(int n) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=1; j<i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern2(int n) {
    int i,j;
    int space= 2*(n-1);
    for (i=0; i<n; i++) {
        for (j=0; j<space; j++){
            cout<<" ";
        }
          
    }
}
    









void pattern3(int n) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=i; j>=1; j--){  //to print mirror image of the  right triangle
            cout<<j;
        }
        cout<<endl;
    }

}

int main() {
    pattern1(4);
    pattern2(4);
    pattern3(4);
    
}