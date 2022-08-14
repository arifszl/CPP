#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
 Node *lchild;
 int data;
 Node *rchild;
};
class Tree
{
 Node *root;
public:
 Tree(){root=NULL;}
 void CreateTree();
 void Preorder(){Preorder(root);}
 void Preorder(Node *p);
 void Postorder(){Postorder(root);}
 void Postorder(Node *p);
 void Inorder(){Inorder(root);}
 void Inorder(Node *p);
 void Levelorder(){Levelorder(root);}
 void Levelorder(Node *p);
 int Height(){return Height(root);}
 int Height(Node *root);
};

void Tree::CreateTree()
{
 Node *p,*t=NULL;
 int x;
 queue<Node*> q;

cout<<"Enter node value ";
cin>>x;
 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 q.push(root);
 while(!q.empty())
 {
    p=q.front();
 q.pop();
 cout<<"Enter left value of "<<p->data;
cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 q.push(t);
 }

cout<<"Enter right child value "<<p->data;
cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 q.push(t);
 }
 }
}

void Tree::Preorder( Node *p)
{
 if(p)
 {
 
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
void Tree::Inorder( Node *p)
{
 if(p)
 {
 
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}
void Tree::Postorder( Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}
void Tree::Levelorder(Node *p)
{
  /* queue<Node *>q;
   cout<<p->data<<" ";
   q.push(p);
   while(!q.empty())
   {
      p=q.front();
      q.pop();
      if(p->lchild)
      {
         cout<<p->lchild->data<<" ";
         q.push(p->lchild);
      }
       if(p->rchild)
      {
         cout<<p->rchild->data<<" ";
         q.push(p->rchild);
      }

   }*/
    
queue<Node *>q;
q.push(p);
while(!q.empty())
{
p=q.front();
q.pop();
cout<<p->data<<" ";
if(p->lchild)
q.push(p->lchild);
if(p->rchild)
q.push(p->rchild);


}
} 

int main() {
 Tree t;
 t.CreateTree();
  cout<<"Preorder ";
 t.Preorder();
 cout<<endl;
 cout<<"Inorder ";
 t.Inorder();
 cout<<"Level-order ";
 t.Levelorder();

 return 0;
}