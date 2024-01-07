#include <iostream>
#include <queue>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;

    node(int n){
        this->data=n;
        this->left=NULL;
        this->right=NULL;

    }
};
node createtree(node*root){
    cout<<"enter the data "<<endl;
    int data;
    cin>>data;
    if(data=-1){
        return ;
    }
    root->data=data;
    cout<<"enter the left data of "<<data<<endl;
    root->left=createtree();

}