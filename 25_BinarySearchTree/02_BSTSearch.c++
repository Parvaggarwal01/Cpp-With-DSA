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

    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);

    cout << "Min Value : " << minVal(root) -> data << endl;
    cout << "Max Value : " << maxVal(root) -> data << endl;

    cout << "Enter element to search: " << endl;
    int x;
    cin >> x;

    if(search(root, x)){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}