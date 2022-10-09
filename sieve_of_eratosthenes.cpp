#include<bits/stdc++.h>

using namespace std;

//#define int long long

void sieve(int n){
    int is_prime[n+1];
     for (int i = 1; i <=n; ++i)
     {
        /* code */
        is_prime[i]=1;
     }
     is_prime[0]=0;
     is_prime[1]=0;
     for (int i = 2; i*i <=n; ++i)
     {
        /* code */
        if(is_prime[i]==1){
            
            for (int j = i*i; j<=n; j+=i)
            {
                /* code */
                is_prime[j]=0;
            }
        }
        
     }
     for (int i = 2; i <=n; ++i)
     {
        /* code */
        if(is_prime[i]==1){
            cout<<i<<" ";
        }
     }
    
}
int main(){
    int n;
    cin>>n;   
    sieve(n);
    return 0;
}