#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



Node* buildTree(Node* root) {
    
     cout << "Enter data: ";
      int data;
     cin >> data;
     root = new Node(data);
    // // Create a new node with the entered data
    // Node* root = new Node(data);//yaha hum root node daal rhe hai 
     // Base case: if user enters -1, return NULL
    if (data == -1) {
        return NULL;//agar enterd data -1 hoga to back pos p chala jayega
    }

    // Recursively build left and right subtrees
    cout << "Enter data in left subtree of " << data << ":";
     root->left = buildTree(root->left);  

    cout << "Enter data in right subtree of " << data << ":";
    root->right = buildTree(root->right);

    return root;
}



// Now we are going to traverasal the tree 
//we are going to traverse in four diff ways

//1. level order traversal
void level_order_traversal(Node* root){
        cout<<"congrats your tree is ready"<<endl<<"in level order "<<endl;
        // we are going to traverse the tree throgh queue
        queue<Node*> q;
        q.push(root);//pusing the root value into root 
        
        q.push(NULL);// initialising a seperator 

        while(!q.empty()){

            Node* temp= q.front();//this will denote the value of front 
             q.pop();// agar queue khali nhi hai to print krwao usse queue se nikal kr 
            if(temp==NULL){
                cout<<endl; //agar queue me null hpga to new line mein print krenege
                   if(!q.empty()){
                    q.push(NULL); // agar queue empty nhi hoto null push krenge usme
                                  //  taki jb temp usse point krega to issi mein lautega

                   }
            }
            else{
               
               if( temp-> left){
                q.push(temp->left); // agar temp ka left null nhi hai to usse temp k left 
                  // push kreng
                  }
                 if( temp-> right){
                q.push(temp->right); // agar temp ka left null nhi hai to usse temp k left 
                  // push kreng
                  }
                 
                  cout<<temp->data<<"," ;
                  //insare above condition agar satisfy hota tb data insert hoga 
            }
} 
    }

// 2. Inorder traversal
void Inorder_traversal(Node* root){
    
   if(root==NULL){
      return;
}
else{
    // Implementing LNR
    Inorder_traversal(root->left);//L movement
    cout<<","<<root->data;// Printing Node data(N)
    Inorder_traversal(root->right); // R movement
}
}

void Preorder_traversal(Node* root){
     
   if(root==NULL){
      return;
}
else{
    // Implementing NLR
      cout<<","<<root->data;// Printing Node data(N)
    Preorder_traversal(root->left);//L movement
    Preorder_traversal(root->right); // R movement
}
}

void Postorder_traversal(Node* root){
 
   if(root==NULL){
      return;
}
else{

    // Implementing LRN
     
    Postorder_traversal(root->left);//L movement
    Postorder_traversal(root->right); // R movement
     cout<<","<<root->data;// Printing Node data(N)
}
}

void Build_from_levelordertraversal(Node* &root){

 queue<Node*> q;
 cout<<"enter data for root node: "<<endl;
 int data;
 cin>>data;

 root=new Node(data);//root k andar data ko daal rhe hai
 q.push(root);// queue ka nadar root ko daal rhe hai

 while(!q.empty()){
    // building a new variable that is pointing towards front of the queue
    Node* temp= q.front();
 
    //  queue ko pop kra rhe hai taki front av null ko point kre 
    q.pop();

// left node bna kr root se join krwate hai
    cout<<"Enter data for: "<<temp->data<<" to be inserted on left : "<<endl;
    int leftdata;
    cin>>leftdata;

    if(leftdata!=-1){
        temp->left= new Node(leftdata);
        q.push(temp->left);

    }

// Right node bna kr root se join krwate hai

cout<<"Enter data for: "<<temp->data<<" to be inserted on right : "<<endl;
int rightdata;
cin>>rightdata;

if(rightdata!=-1){
temp->right=new Node(rightdata);
q.push(temp->right);
}

 }

}


int main() {
    Node* root=NULL;
    
    //uncomment the below part if you wanna build tree  form level order traversal 
    // Build_from_levelordertraversal(root);
    // level_order_traversal(root);

    //comment the below part if you wanna build tree form ordinay form of tree
    
    root = buildTree(root);
     
     level_order_traversal(root);
    // The 'root' now points to the root of the binary tree
    // You can perform operations or traversals on the tree as needed
   
    level_order_traversal(root);
    cout<<"congrats!! your tree from InOrder traversal : "<<endl;
      Inorder_traversal(root);
      cout<<endl;
      cout<<"congrats!! your tree from PreOrder traversal : "<<endl;
      Preorder_traversal(root);
      cout<<endl;
      cout<<"congrats!! your tree from PostOrder traversal : "<<endl;
      Postorder_traversal(root);
      

    return 0;
}
