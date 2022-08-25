#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
int data;
vector<Node *>children;
};
Node * createTree()
{
     int x;
    cout<<"Enter root data ";
    cin>>x;
    Node *root;
    root=new Node;
    root->data=x;
    queue<Node *>q;
    q.push(root);
    while(q.size()!=0)
    {
        Node *front;
        front=new Node;
        front=q.front();
        q.pop();
        int n;
        cout<<"enter no. of children of "<<front->data <<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int childData;
            cout<<"Enter "<<i<<" th child of "<<front->data<<" ";
            cin>>childData;
            Node *child;+
            child=new Node;
            child->data=childData;
            front->children.push_back(child);
            q.push(child);

        }
    }
    return root;
   
}

Node *takeInput()
{
    int x;
    cout<<"Enter data ";
    cin>>x;
    Node *root;
    root=new Node;
    root->data=x;
    int n;
    cout<<"Enter num children of "<<root->data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Node *child=createTree();
        root->children.push_back(child);
        
    }
    return root;
}
void display(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
      for(int i=0;i<root->children.size();i++)
      {
        display(root->children[i]);
      }
}
int main()
{
    Node *root=createTree();
    display(root);
}