#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:

    int data;
    Node* left;
    Node* right;


    Node (int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }



};

Node* createTree(){
    cout<<"enter the value for the data"<<endl;

    int data;
    cin>>data;

    //if there is no data in the left or right of the node then 
    //data should be -1 and it is null
    if(data == -1){
        return NULL;
    }

    //step 1: create the root node
    Node* root = new Node(data);
    //step2: create the left subtree
    cout<<"left of node "<<root->data<<endl;
    root->left = createTree();//recurssive call

    // step 3: create the right subtree
    cout<<"right of the node "<<root->data<<endl;
    root->right = createTree();

    //return the root node
    return root;
}


void preOrderTraversal(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    //NLR
    // N
    cout<<root->data<<" ";
    // L
    preOrderTraversal(root->left);
    //R
    preOrderTraversal(root->right);


}

void inOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    //LNR
    inOrderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    // LRN
    //L
    postOrderTraversal(root->left);
    //R
    postOrderTraversal(root->right);
    //N
    cout<<root->data<<" ";
}

//level order traversal => breadth first search

void levelOrderTraversal(Node* root){
    //create a queue for tracking the nodes
    queue<Node* > q;

    //now push the root node into the queue
    q.push(root);
    q.push(NULL);



    //now start traversing
    while(!q.empty()){
        //pahle parent ko fetch karke pop karo q se aur print kar do 
        //fir left and right child ko push kar do queue me
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            //valid case
            cout<<front->data<<" ";

        if(front->left){
            q.push(front->left);
        }

        if(front->right){
            q.push(front->right);
        }
        }
    }
}


int main(){
    Node* root = createTree();
    cout<<"printing the root node of the tree "<<root->data<<endl;


    cout<<"printing preorder  ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"printing inorder  ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"printing postorder  ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"printing the levelorder ";
    levelOrderTraversal(root);
    cout<<endl;

    return 0;
}