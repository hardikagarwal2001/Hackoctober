# include<iostream>
using namespace std;
void counting(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    int count[max + 1] = {0};
    int b[n] = {0};
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for(int i = 1; i <= max; i++) {
        count[i] = count[i] + count[i - 1];
    }
    for(int i = n - 1; i >= 0; i--) {
        b[--count[arr[i]]] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = b[i];
    }
}
int main() {
    int a[11] = {4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40};
    counting(a, 11);
    for(int i = 0; i < 11; i++) {
        cout<<a[i]<<endl;
    }
    return 0;
}
