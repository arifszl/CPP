#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct  Node * lchild;
    struct Node* rchild;
    int data;
    
    
}*root=NULL;

void insert(int key)
{
   struct Node *r,*p;
   struct Node *t=root;

if(root==NULL)
{
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    root=p;
    return ;
}
   while(t!=NULL)
   {
    r=t;
    if(key==t->data)
    return ;

    else if(key>t->data)
    {
        t=t->rchild;
    }
    else
    t=t->lchild;
   }
   p=new Node;
   p->data=key;
   p->lchild=p->rchild=NULL;

   if(p->data<r->data)
   r->lchild=p;
   else
   r->rchild=p;
}

void Inorder( struct Node *p)
{
 if(p)
 {
 
 Inorder(p->lchild);
 cout<<p->data<<" ";
 Inorder(p->rchild);
 }
}
void level_order(struct Node *root)
{
    struct Node *p;
queue<Node *>q;
q.push(root);
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
 void left_view(Node *root)
 {
    struct Node *p;
   queue<Node *>q;
   q.push(root);
   while(!q.empty())
   {
    auto sz=q.size();
    for(int i=0;i<sz;i++)
    {
 p=q.front();
    q.pop();
    if(i==0)
    cout<<p->data<<" ";
    if(p->lchild)
    q.push(p->lchild);
    if(p->rchild)
    q.push(p->rchild);
    }
   

   }
 }

  void right_view(Node *root)
 {
    struct Node *p;
   queue<Node *>q;
   q.push(root);
   while(!q.empty())
   {
    auto sz=q.size();
    for(int i=0;i<sz;i++)
    {
 p=q.front();
    q.pop();
    if(i==sz-1)
    cout<<p->data<<" ";
    if(p->lchild)
    q.push(p->lchild);
    if(p->rchild)
    q.push(p->rchild);
    }
   

   }
 }
void top_view(struct Node *root)
{
     struct Node * p;
    map<int,int>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        int hd=temp.second;
         p=temp.first;

        if(m.count(hd)==0)
        {
            m[hd]=p->data;
        }
        if(p->lchild)
        q.push({p->lchild,hd-1});
        if(p->rchild)
        q.push({p->rchild,hd+1});
    }
    for(auto it:m)
    {
        cout<<it.second<<" ";
    }
}

void bottom_view(struct Node *root)
{
    struct Node * p;
    map<int,int>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        int hd=temp.second;
         p=temp.first;

      
        
            m[hd]=p->data;
        
        if(p->lchild)
        q.push({p->lchild,hd-1});
        if(p->rchild)
        q.push({p->rchild,hd+1});
    }
    for(auto it:m)
    {
        cout<<it.second<<" ";
    }
}

struct Node* Search(int key)
{
    struct Node *p=root;
    while(p!=NULL)
    {
     if(p->data==key)
     return p;
     else if(p->data<key)
     p=p->rchild;
     else
     p=p->lchild;


    }
    return NULL;
   
}


int main()
{
    struct Node *temp;
    insert(7);
    insert(2);
    insert(8);
    insert(1);
    insert(5);

 level_order(root);
 cout<<endl;
 Inorder(root);
 cout<<endl;

 left_view(root);
 cout<<endl;
 right_view(root);
 cout<<endl;
 top_view(root);
 cout<<endl;
 bottom_view(root);
 cout<<endl;
// temp= Search(10);
// if(temp==NULL){
//     cout<<"Element not present in the BST "<<endl;
// }
// else
// cout<<"element is found";
}