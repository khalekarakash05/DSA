#include<iostream>
#include<queue>
#include<map>
using namespace std;

//create node class
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
//create function for node
Node* createNode(){
    cout<<"enter the value for node: ";
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }

    //create a node
    Node* root = new Node(data);

    //left call
    cout<<"enter the node for left: ";
    root->left = createNode();

    //right call
    cout<<"enter the node for right: ";
    root->right = createNode();


    return root;
}

//inorder preorder postorder traversal
//inorder Traversal => 
void inOrder(Node* root){
    if(root == NULL){
        return ;
    }


    // LNR
    //call for left
    inOrder(root->left);

    //print node
    cout<<root->data<<" ";

    //call for right
    inOrder(root->right);
}

//preOrder Traversal
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }

    // NLR
    //print the node
    cout<<root->data<<" ";

    //left call
    preOrder(root->left);

    //right call
    preOrder(root->right);
}

//postOrder traversal

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    //LRN
    //call for left
    postOrder(root->left);

    //call for right
    postOrder(root->right);

    //print the node
    cout<<root->data<<" ";
}

//levelorder traversal using queue
void leverOrderTraversal(Node* root){
    //base case
    queue<Node*>q;
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
            //print the root node and pusnh it's right and left child
            cout<<front->data<<" ";
            //push left and right child if they are not null
            if(front->left != NULL){
                q.push(front->left);
            }

            if(front->right){
                q.push(front->right);
            }
        }
    }
}

//leftviw printing

void printLeftView(Node* root, int level, vector<int>& leftView){
    if(root == NULL){
        return;
    }


    if(level == leftView.size()){
        leftView.push_back(root->data);

    }

    //left call
    printLeftView(root->left, level+1, leftView);
    printLeftView(root->right, level+1, leftView);

}

//right view printing
void printRightView(Node* root, int level, vector<int>& leftView){
    if(root == NULL){
        return;
    }


    if(level == leftView.size()){
        leftView.push_back(root->data);

    }

    //right call
    printRightView(root->right, level+1, leftView);

    //left call
    printRightView(root->left, level+1, leftView);
    

}


//top view 
void printTopView(Node* root){
    //make a map and queue with the pair of node and horizontal dist

    // if(root == NULL){
    //     return ;
    // }
    map<int, int>hdToNodeMap;

    queue<pair<Node*, int>>q;

    //initial push
    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node* , int>front = q.front();
        Node* frontNode = front.first;
        int hd = front.second;
        q.pop();

        //agar hd map pe pahle store nahi hua hai to store kar lo
        if(hdToNodeMap.find(hd) == hdToNodeMap.end()){
            hdToNodeMap[hd] = frontNode->data;
        }

        //child ko handle kar lo
        if(frontNode->left){
            //left me hd -1 ho jayega
            q.push(make_pair(frontNode->left, hd-1));
        }

        if(frontNode->right){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    //print 
    cout<<"printing the top view fo  tree"<<endl;
    for(auto i : hdToNodeMap){
        cout<<i.second<<" ";
    }
    cout<<endl;
}

int main(){

    Node* root = createNode();

    // input =>  10 15 25 -1 45 65 -1 -1 96 -1 -1 -1 11 16 -1 -1 -1

    
    leverOrderTraversal(root);
    cout<<endl;


    cout<<"printing preOrderTraversal "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"printing inOrder "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"printing postOrder "<<endl;
    postOrder(root);
    cout<<endl;

    vector<int>leftView;
    int level = 0;
    // printLeftView(root, level, leftView);
    printRightView(root, level, leftView);

    // cout<<" printing left view : "<<endl;
    // for(int i = 0; i<leftView.size(); i++){
    //     cout<<leftView[i]<<" ";
    // }
    // cout<<endl;


    cout<<" printing right view : "<<endl;
    for(int i = 0; i<leftView.size(); i++){
        cout<<leftView[i]<<" ";
    }
    cout<<endl;

    printTopView(root);

    return 0;
}