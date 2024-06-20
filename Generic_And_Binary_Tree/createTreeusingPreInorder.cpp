#include<iostream>
#include<queue>
#include<map>
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




void levelOrderPrint(Node* root){
    //first push the root element and null into queue
    queue<Node* >q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 1){
        //now get thefront element from queue
        Node* front = q.front();
        // now pop it
        q.pop();

        //now check is it valid or null
        if(front == NULL){
            // then change the line and push another null
            cout<<endl;
            q.push(NULL);
        }
        else{
            //print the front element
            cout<<front->data<< " ";

            //nwo push left and  right into the queue
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }


}

int serachInorder(int inOrder[], int size, int element){
    for(int i = 0; i<size; i++){
        if(inOrder[i] == element){
            return i;
        }
    }
    return -1;
}

void createMapping(int inOrder[], int size, map<int, int>& valueToMap){
    for(int i = 0; i<size; i++){
        int element = inOrder[i];
        int index = i;
        valueToMap[element] = index;
    }
}


Node* constructTreeUsingInAndPreOrderTraversal(map<int, int>&valueToMap ,int inOrder[], int preOrder[], int &preindex, int inorderStart, int inorderEnd, int size){

        //base case
        if(preindex >= size || inorderStart > inorderEnd){
            return NULL;
        }

        //now 1 case solution
        //preOrder ka leftmost definitely root node hoga so create root node
        int element = preOrder[preindex];
        preindex++;
        Node* root = new Node(element);

        //now search position of element in the inorder array
        // int position = serachInorder(inOrder, size, element);
        int position = valueToMap[element];


        //now call for left and right part of the tree


        //recursive call for left subtree from inOrderStart to postion-1
        root->left = constructTreeUsingInAndPreOrderTraversal(valueToMap, inOrder, preOrder, preindex, inorderStart, position-1, size);


        //recursive call for right subtee from position+1 to inOrderEnd;
        root->right = constructTreeUsingInAndPreOrderTraversal(valueToMap, inOrder, preOrder, preindex, position+1, inorderEnd, size);

        return root;
}


int main(){
    int inOrder[] = {10, 8, 6, 2, 4, 12};
    int preOrder[] = {2, 8, 10, 6, 4, 12};
    int size = 6;
    int preIndex = 0;
    int inorderStart = 0;
    int inorderEnd = size-1;
    map<int, int>valueToMap;

    createMapping(inOrder, size,valueToMap);

    Node* root = constructTreeUsingInAndPreOrderTraversal(valueToMap, inOrder, preOrder, preIndex, inorderStart, inorderEnd, size);


    cout<<"here the created tree in levelwise"<<endl;;
    levelOrderPrint(root);
    cout<<endl;
    return 0;
}