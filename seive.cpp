#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll ; 

int main()
{
    long long n ; cin>>n ; 
    // Here n is the number upto which we have to find the prime numbers 
    bool arr[n+1] ; 
    for(int i = 0 ; i <=n ; i++){
        arr[i] = true ; 
    }
    arr[0] = false ; 
    arr[1] = false ; 
    for(long long i = 2 ; i <= n; i++){
        if(arr[i] && i*i <=n ){
            for(long long j = i*i ; j <= n ; j+=i){
                arr[j] = false ; 
            }
        }
    }
    for(int i = 1 ; i <= n ; i++){
        if(arr[i]){
            cout<<i<<" " ; 
        }
    }
    return 0;
}