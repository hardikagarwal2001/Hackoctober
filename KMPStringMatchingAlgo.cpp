# include<bits/stdc++.h>
using namespace std;
void kmp(string word, string pattern) {
    vector<int> reset(pattern.length(), 0);
    int i = 0, j = -1;
    reset[0] = -1;
    while(i < pattern.length()) {
        while(j >= 0 && pattern[j] != pattern[i]) {
            j = reset[j];
        }
        i++;
        j++;
        reset[i] = j;
    }
    for(int i = 0; i < reset.size(); i++) {
        cout<<reset[i]<<" ";
    }
    cout<<endl;
    i = 0, j = 0;
    while(i < word.length()) {
        while(j >= 0 && word[i] != pattern[j]) {
            j = reset[j];
        }
        i++;
        j++;
        if(j == pattern.length()) {
            cout<<i - j<<endl;
        }
    }
}
int main() {
    kmp("ABAABCXABCXABX", "ABCXABX");
    kmp("ABAABABBABAABAABABBABA", "ABAABABBABA");
}