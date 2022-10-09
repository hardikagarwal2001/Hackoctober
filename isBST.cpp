/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
struct Node{
    int key;
    Node *left,*right;
    Node (int k){
        key=k;
        left=right=NULL;
    };
    
};
bool areIdentical(Node *T, Node *S){
    if(T==NULL && S==NULL){
        return true;
    }
    if(T==NULL||S==NULL){
        return false;
    }
    return (T->key==S->key && (areIdentical(T->left,S->left)) && (areIdentical(T->right,S->right)));
}

bool isSubtree(Node *T, Node *S){
    if(S==NULL) return true;
    if(T==NULL) return false;
    if(areIdentical(T,S)) return true;
    return (isSubtree(T->left, S)||isSubtree(T->right,S)); 
    
}


int main()
{
    Node *T=new Node(26);
    T->left=new Node(10);
    T->right=new Node(3);
    T->left->left=new Node(4);
    T->left->right=new Node(3);
    T->left->left->right=new Node(6);
    
    Node *S=new Node(10);
    S->left=new Node(4);
    S->right=new Node(3);
    S->left->right=new Node(6);
    
    if(isSubtree(T,S)) 
    cout<<"yes";
    else
    cout<<"no";

    return 0;
}

