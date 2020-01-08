#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a,b;
    cin>>n;
    cin>>a>>b;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i]=a+b;
        a=b;
        b=ar[i];
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
