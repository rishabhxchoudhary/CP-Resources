// Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* createBST(Node* root, int d){

    if ( root == NULL){
        root = new Node(d);
        return root;
    }

    if (d > root -> data){

        root -> right = createBST(root -> right, d);
    }

    else{

        root -> left = createBST(root -> left, d);
    }

    return root;

}

void takeIP(Node* &root){

    int data;
    cin>>data;

    while(data != -1){

        root = createBST(root, data);
        cin>>data;
    }
}


int inorder(Node* root, int k, int &i)
{
    
    //base case
    if(root == NULL) {
        return -1;
    }

    int left = inorder(root->left, k, i);

    if (left == -1){
        return left;
    }
    i++;

    if (i == k){
        return root -> data;
    }

    return inorder(root->right, k, i);


}


int main()
{   
    Node* root = NULL;
    takeIP(root);
    int i = 0;
    cout<<inorder(root, 3, i);
    
    return 0;
}
