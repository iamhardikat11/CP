#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
  private:
    int val;
    TreeNode* left;
    TreeNode* right;
  TreeNode(int data)
  {
    this.val = val;
    this.left = nullptr;
    this.right = nullptr;
  }
};
void 
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  TreeNode* root;
  root = new TreeNode(v[0]);
  
  
}
