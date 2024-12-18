#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left); 
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
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

void inorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(node* root){
    // base case 
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

void buildFromLevelOrder(node*& root){
    // Read the root node data
    cout << "Enter the data for root: " << endl;
    int data;
    cin >> data;
    
    // If the data is -1, we assume it's a null tree.
    if(data == -1){
        root = nullptr;
        return;
    }

    // Initialize the root node
    root = new node(data);

    // Create a queue for level order traversal
    queue<node*> q;
    q.push(root);

    // Process the nodes in level order
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        // Input the left child
        cout << "Enter left node for "  << temp->data << " (-1 for null): " << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        // Input the right child
        cout << "Enter right node for "  << temp->data << " (-1 for null): " << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}


int main() {
    
    node* root = NULL;

    buildFromLevelOrder(root);

    // creating Tree
    // root = buildTree(root);

    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    // cout << "Inorder traversal: " << endl;
    // inorder(root);
    // cout << endl;

    // cout << "Preorder traversal: " << endl;
    // preorder(root);
    // cout << endl;

    // cout << "Postorder traversal: " << endl;
    // postorder(root);
    // cout << endl;
}