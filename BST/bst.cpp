#include<iostream>
#include<queue>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }


};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    // cout<<"here"<<endl;

    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
    }
    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void createNode(Node* &root){
    cout<<"Enter the data of Node"<<endl;
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }


}

void levelOrderTraversal(Node* root){

    if(root == NULL){
        return;
    }
    
    queue<Node* >q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
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

void preOrderTraversal(Node* root){
    if(root ==  NULL){
        return;
    }

    // NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    // LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

Node* minValue(Node* root){
    if(root == NULL){
        return NULL;
    }

    Node* temp = root;
    while(temp->left){
        temp = temp->left;
    }
    return temp;
}


Node* maxValue(Node* root){
    if(root == NULL){
        return NULL;
    }

    Node* temp = root;
    while(temp->right){
        temp = temp->right;
    }
    return temp;
}

bool searchInBST(Node* root, int target){
    //base case
    if(root == NULL){
        return false;
    }

    //1 case solution
    if(root->data == target){
        return true;
    }

    //recurssion
    bool leftAns = false;
    bool rightAns = false;

    if(target > root->data){
        rightAns = searchInBST(root->right, target);
    }
    else{
        leftAns = searchInBST(root->left,target);
    }

    return leftAns || rightAns;
}

Node* deleteFromBST(Node* root, int target){
    //base case
    if(root == NULL){
        return NULL;//no root to delete so return null
    }

    if(root->data == target){
        //deletion of node
        //4 cases 
        
        if(root->left == NULL && root->right == NULL){
            //1 case => left and right both are null
            //delete the root and return null
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            //2 case => left non null and right is null
            Node* childSubtree = root->left;
            delete root;
            return childSubtree;
        }
        else if(root->left == NULL && root->right != NULL){
            //3 case => left null and right is non null
            Node* childSubtree = root->right;
            delete root;
            return childSubtree;
        }
        else{
            //4 case => left and right both are non null
            //first find max node from left
            Node* maxi = maxValue(root->left);
            //then replace it with root
            root->data = maxi->data;
            //delete the maxi
            root->left = deleteFromBST(root->left, maxi->data);
            return root;
        }
    }
    else if(target < root->data){
        //left me jao
        root->left = deleteFromBST(root->left, target);
    }
    else{
        //right me jao
        root->right = deleteFromBST(root->right, target);
    }

    return root;
}

int main(){

    Node* root = NULL;
    createNode(root);


    levelOrderTraversal(root);

    cout<<"printing the preorder traversal "<<endl;
    preOrderTraversal(root);

    cout<<"Printing the inorder traversal "<<endl;
    inOrderTraversal(root);

    cout<<"Printing the postorder traversal "<<endl;
    postOrderTraversal(root);
    cout<<endl;

    Node* min = minValue(root);
    if(min == NULL){
        cout<<"there is no root availble so no min value"<<endl;;
    }
    else{
        cout<<"min value of the tree is : "<<min->data<<" "<<endl;
    }


    Node* max = maxValue(root);
    if(max == NULL){
        cout<<"there is no root available so no max value here "<<endl;
    }
    else{
        cout<<"max value of the tree is : "<<max->data<<" "<<endl;
    }

    cout<<endl;
    int target;
    cout<<"enter the target which you want to find out"<<endl;
    cin>>target;
    cout<<endl;

    while(target != -1){
        bool ans = searchInBST(root, target);
        if(ans){
            cout<<"target found in ans "<<endl;
        }
        else{
            cout<<"target not found in ans"<<endl;
        }

        cout<<"enter the target"<<endl;
        cin>>target;
        
    }


    int tar;
    cout<<"enter the target node which you want to delete"<<endl;
    cin>>tar;
    cout<<endl;

    while(tar != -1){
       root = deleteFromBST(root, tar);
        cout<<"printing level order traversal"<<endl;
        levelOrderTraversal(root);

        cout<<"enter the target node which you want to delete"<<endl;
        cin>>tar;
        cout<<endl;
    }



    return 0;
}