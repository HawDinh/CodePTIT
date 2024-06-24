#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[10005];
struct node{
	int val;
	node *left,*right;
	node(int x){
		val=x;
		left=right=NULL;
	}
};
void inorder(node *root){
	if(root==NULL) return ;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		node *root=NULL;
		root=new node(a[0]);
		queue<node *>q;
		q.push(root);
		int dem=1;
		while(!q.empty()){
			node *tmp=q.front();
			q.pop();
			if(dem<n){
				tmp->left=new node(a[dem]);
				dem++;
				q.push(tmp->left);
			}
			if(dem<n){
				tmp->right=new node(a[dem]);
				dem++;
				q.push(tmp->right);
			}
		}
		inorder(root);
		cout<<endl;
	}
}