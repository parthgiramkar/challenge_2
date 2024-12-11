#include<bits/stdc++.h>
using namespace std;

int missingnumber(const vector<int>&a, int N) {
    int n=N-1;
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++) {
        xor1=xor1^a[i];
    }
    for(int i=1;i<=N;i++) {
        xor2=xor2^i;
    }
    return xor1^xor2;
    
}
int main() {
    vector<int>a={1,2,4,5};
    int N =5;
    cout<<"Missing number-"<<missingnumber(a,N) ;
    return 0;
} 

