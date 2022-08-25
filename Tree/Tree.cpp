// #include<bits/stdc++.h>
// #include<iostream>


// using namespace std;
// class Node{
//     public:
//     Node *lchild;
//     int data;
//     Node *rchild;
 
// };

// class Queue
// {
//     private:
//     int front;
//     int rear;
//     int size;
//     Node **Q;
//   public:
//   Queue(){front=rear=-1;size=10; Q=new Node *[size];}

//    Queue(int size=10){front=rear=-1;this->size=size; Q=new Node*[this->size];}

//    void enqueue(Node *x);
//    Node* dequeue();
   
//    int isEmpty(){return front==rear;}
// };
// void Queue:: enqueue(Node* x)
// {
// if(rear== size-1)
// {
//     cout<<"Queue is full";

// }
// else{
//     rear++;
//     Q[rear]=x;
// }
// }
// Node* Queue::dequeue()
// {
//      Node* x=NULL;
//     if(front==rear)
//     {
//         cout<<"Queue is empty";
//     }
//     else{
       
//         x=Q[front++];
//     }
//     return x;
// }

// // void Queue::display()
// // {
// //     for(int i=front+1;i<=rear;i++)
// //     {
// //         cout<<Q[i]<<endl;
// //     }
// // }

// class Tree
// {
//     public:
//     Node *root;
//     Tree(){root=NULL;}
//     void createTree();
//     void preorder(){preorder(root);}
//     void preorder(Node *p);
// void postorder(){postorder(root);}
//      void postorder(Node *p);
// void inorder(){inorder(root);}
//       void inorder(Node *p);
 //void levelorder(){levelorder(root);}
//        void levelorder(Node *p);
// int Height(){return Height(root);}
//        int height(Node *root);


// };
// void Tree:: createTree()
// {
//     Node *p,*t=NULL;
    
//     int x;
//     Queue q(100);
//     cout<<"Enter root value"<<endl;;
//     cin>>x;
//     root=new Node;
//     root->data=x;
//     root->lchild=root->rchild=NULL;
//     q.enqueue(root);
     
//     while(!q.isEmpty())
//     {
//        p=q.dequeue();
//         cout<<"Enter left child of ";
//         cin>>x;
//         if(x!=-1)
//         {
//             t=new Node;
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->lchild=t;
//             q.enqueue(t);
//         }

//          cout<<"Enter right child of ";
//         cin>>x;
//         if(x!=-1)
//         {
//             t=new Node;
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->rchild=t;
//             q.enqueue(t);
//         }
//     }
    
// }

// void Tree:: preorder(Node *p)
// {
//     if(p)
//     {
//         cout<<p->data<< " ";
//         preorder(p->lchild);
//         preorder(p->rchild);
//     }
// }

// void Tree:: inorder(Node *p)
// {
//     if(p)
//     {
       
//         inorder(p->lchild);
//          cout<<p->data<< " ";
//         inorder(p->rchild);
//     }
// }
// void Tree:: postorder(Node *p)
// {
//     if(p)
//     {
       
//         postorder(p->lchild);
//         postorder(p->rchild);
//          cout<<p->data<< " ";
//     }
// }
// void Tree:: levelorder(Node *p)
// {
//     Queue q(100);
//     cout<<p->data<<" ";
//     q.enqueue(p);
//     while(!q.isEmpty())
//     {
//         p=q.dequeue();
//         if(p->lchild)
//         {
//             cout<<p->lchild->data<<" ";
//             q.enqueue(p->lchild);
//         }
//         if(p->rchild)
//         {
//          cout<<p->rchild->data<<" ";
//          q.enqueue(p->rchild);
//         }
//     }
// }

// int main()
// {
//     Tree t;
//    t.createTree();
//    t.preorder(t.root);
// }

// Online C++ compiler to run C++ program online
#include <iostream>
#include<stdio.h>

using namespace std;
class Node
{
public:
 Node *lchild;
 int data;
 Node *rchild;
};
class Queue {
private:
 int front;
 int rear;
 int size;
 Node **Q;
public:
 Queue(){front=rear=-1;size=10;Q=new Node*[size];}
 Queue(int size){front=rear=-1;this->size=size;;Q=new
Node*[size];}
 void enqueue(Node *x);
 Node *dequeue();
 int isEmpty(){ return front==rear;}
};
void Queue::enqueue(Node *x)
{
 if(rear==size-1)
 printf("Queue Full\n");
 else
 {
 rear++;
 Q[rear]=x;
 }
}
Node *Queue::dequeue()
{
 Node *x=NULL;
 if(front==rear)
 printf("Queue is Empty\n");
 else
 {
 
 x=Q[front+1];
 front++;
 }
 return x;
}
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
 Queue q(100);

cout<<"Enter node value ";
cin>>x;
 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 q.enqueue(root);
 while(!q.isEmpty())
 {
 p=q.dequeue();
 cout<<"Enter left value of "<<p->data;
cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 q.enqueue(t);
 }

cout<<"Enter right child value "<<p->data;
cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 q.enqueue(t);
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
 void Tree::Levelorder( Node *p)
 {
 
 Queue q(100);
 printf("%d ",root->data);
 q.enqueue(root);
 while(!q.isEmpty())
 {
 root=q.dequeue();
 if(root->lchild)
 {
 printf("%d ",root->lchild->data);
 q.enqueue(root->lchild);
 }
 if(root->rchild)
 {
 }
 printf("%d ",root->rchild->data);
 q.enqueue(root->rchild);
 }
}
int Tree::Height(struct Node *root)
{
 
 int x=0,y=0;
 if(root==0)
 return 0;
 x=Height(root->lchild); y=Height(root->rchild);
 if(x>y)
 return x+1;
 else
 return y+1;
}
int main() {
 Tree t;
 t.CreateTree();
 cout<<"Preorder ";
 t.Preorder();
 cout<<endl;
 cout<<"Inorder ";
 t.Inorder();
 cout<<endl<<endl;
 return 0;
}



