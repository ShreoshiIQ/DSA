#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    //precompute
    int hash[13] = {};
    for(int i =0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int m ;
    cin>>m;

    while(m--)
    {
        int number;
        cin>>number;
        cout<<hash[number] <<endl;
    }

    return 0;
}
