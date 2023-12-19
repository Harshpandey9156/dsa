// #include <iostream>
// #include <queue>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// node* treebuild(node* root)
//{
//     cout<<"enter the data : "<<endl;
//     int data;
//     cin>>data;
//
//     if (data==-1)
//     {
//         return NULL;
//     }
//     //root=new node(data);
//
//     cout<< "enter the data for inserting the data in left"<<data<<endl;
//     root->left =treebuild(root->left);
//     cout<< "enter the data for inserting the data in right"<<data<<endl;
//     root->right=treebuild(root->right);
//     return root;
// }
node *buildTree(node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// void levelordertraversal(node*root)
//{
//     queue<node*>q;
//     q.push(root);
//
//     while(!q.empty())
//     {
//         node*temp=q.front();
//         cout<<temp->data<<" ";
//         q.pop();
//
//         if(temp->right)
//         {
//             q.push(temp->right);
//         }
//         if(temp->left)
//         {
//             q.push(temp->left);
//         }
//     }
//
// }

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void reversetraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
}

// build from level order
void buildfromlevelorder(node * &root)
{
    queue<node *> q;
    cout << "enter a data for root" << endl;
    q.push(root);
    int data;
    cin >> data;
    root = new node(data);
    

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the left root for :" << temp->data << endl;

        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter the right root for :" << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){

    node *root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);

    cout << "inorder traversal are : ";
    inorder(root);
    cout << endl;
    cout << "preorder traversal are :";
    preorder(root);
    cout << endl;
    cout << "post order traversal are :";
    postorder(root);

    buildfromlevelorder(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}

