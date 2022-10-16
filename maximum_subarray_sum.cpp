#include <bits/stdc++.h>
using namespace std;
#define ll long long



// kadane's algorithm : to find maximum subarray sum
ll maxSubArraySum(int a[], int size){
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here <= 0)
            max_ending_here = 0;
    }
    return max_so_far;}
int main(){
    cout<<"Enter the no. of element in array"<<endl;
    int n;cin>>n;
    int a[n];
    cout<<"Enter  elements of array"<<endl;
    for(int i = 0;i<n;i++)cin>>a[i];
    cout<<"Maximum sum of subarray is "<<maxSubArraySum(a,n)<<endl;

}
