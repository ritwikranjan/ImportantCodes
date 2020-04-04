#include<bits/stdc++.h>

using namespace std;

class TrieNode{
    public:
    TrieNode* left;
    TrieNode* right;
};

void insert(TrieNode* root, int n){
    TrieNode* curr = root;
    for(int i = 31; i >=0; i--){
        int bit = (n>>i) & 1;
        if(bit){
            if(curr->right==NULL){
                curr->right = new TrieNode();
            }
            curr = curr->right;
        } else{
            if(curr->left==NULL){
                curr->left = new TrieNode();
            }
            curr = curr->left;
        }
    }
}

int findMaxXor(TrieNode* head, int n){
    int curXor = 0;
    TrieNode* cur = head;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        if(bit){
            if(cur->left!=NULL){
                curXor+=pow(2,i);
                cur = cur->left;
            } else{
                cur = cur->right;
            }
        } else{
            if(cur->right!=NULL){
                curXor+=pow(2,i);
                cur = cur->right;
            } else{
                cur = cur->left;
            }
        }
    }
    return curXor;
    
}


//Have to check and verify this
int findMaxXorSubarray(TrieNode* head, int* arr, int n){
    int ans = INT_MIN;
    for(int i = 1; i < n; i++){
        arr[i] ^= arr[i-1];
        insert(head, arr[i]);
        ans = max(ans,findMaxXor(head, arr[i]));
    } 
    return ans;
}

int main(){
    int maxXor = INT_MIN;
    int n;
    cin>>n;
    TrieNode* head = new TrieNode();
    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];      
    }
    cout<<findMaxXorSubarray(head,arr,n);
    return 0;
}