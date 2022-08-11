#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
    public:
        Node *l, *r;
        int data;
    Node(int d)
    {
        l = r = NULL;
        data = d;
    }
    Node* insertData(Node* root,int d)
    {
        if(root==NULL)
        {
            root = new Node(d);
            return root;
        }
        else if(root->data < d)
            return insertData(root->r,data);
        else if(root->data > d)
            return insertData(root->l,d);
        return NULL;
    }
    
};
int main()
{
    ll N;
    cin >> N;
    vector<ll> v(N);
    Node* root;
    root = NULL;
    for(auto &x: v) {
        cin >> x;
        root = root->insertData(root,x);
    }

    return 0;
}