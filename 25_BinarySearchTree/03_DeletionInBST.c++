#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else {
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

Node* insertIntoBST(Node* root, int data){
    // base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root -> data){
        root -> right = insertIntoBST(root -> right, data);
    } else{
        root -> left = insertIntoBST(root -> left, data);
    }
    return root;
}

void inorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(Node* root){
    // base case 
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root){
    // base case
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    // base case
    if(root == NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        // right child
        if(root -> right != NULL && root -> left == NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        

        // 2 child
        if(root -> right != NULL && root -> left != NULL){
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
    else if(root -> data > val){
        // left part
        root -> left = deleteFromBST(root -> left, val);
        return root;
    } else {
        // right part
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

bool search(Node* root, int x){
    if(root == NULL){
        return false;
    }

    if(root -> data == x){
        return true;
    }

    if(root -> data > x){
        // left part
        return search(root->left, x);
    } else {
        return search(root->right, x);
    }
}




int main(){
    Node* root = NULL;

    cout << "Enter the data to create BST" << endl;
    takeInput(root);

    cout << "After deletion: " << endl;
    levelOrderTraversal(root);

    int x;
    cout << "Enter the data you want to delete: ";
    cin >> x;
    cout << endl;

    root = deleteFromBST(root, x);
    cout << "Before deletion: " << endl;
    levelOrderTraversal(root);

    return 0;
}




