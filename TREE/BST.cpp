#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
}
};

Node* InsertintoBST(Node* root, int d){
    if(root==NULL){//ofc starting m root null hoga
        root=new Node(d);//data root m insert krwa denge
        return root;
    }
    if(d>root->data){
        //here we are saying if the given data is greater than data at root than
        // we are recusively calling a function
         root->right=InsertintoBST(root->right,d);
    }
    else{
        root->left=InsertintoBST(root->left,d);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root= InsertintoBST(root,data);
        // when we call the functionin main the indertinto bst will passs as an argument
         cin>>data;
    }
}
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
                // cout<<endl; //agar queue me null hpga to new line mein print krenege
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
Node* min_value_BST(Node* root){
    Node* temp= root;
    while(temp->left!= NULL){
        temp=temp->left;
    }
    return temp;
}
Node* max_value_BST(Node* root){
    Node* temp= root;
    while(temp->right!= NULL){
        temp=temp->right;
    }
    return temp;
}

// Implementing deletion code
Node* delete_BST(Node* root, int value){
    // Base case
    if (root==NULL){
        return root;
    }
    //Another base case agar value mil jaye to
    if(root->data==value){
    //   for 0 child
     if((root->left==0) && (root->right==0)){
        delete root;
        return NULL;
     }
    // for 1 child
    // there will be two cases if right is null or left is null 
     if((root->left!=NULL)&& (root->right==NULL)){
       Node* temp= root->left;
       delete root;
       root->left = temp;
       return temp;
      }

      if((root->right!=NULL) && (root->left==NULL)){
        Node* temp=root->right;
        delete root;
        root->right= temp;
        return temp;

        // dono cases m root ka data delete ho rha hai o hum krana chahte hai
        // or left ka or right k data copy ho rha hai uski jagah
      }
    // for 2 child
      if((root->left!=NULL) && (root->right!=NULL)){
        int mini = min_value_BST(root->right)->data;//function calling and passing right side
                                            // of the node and storing its data into mini
        //  replacing the data of mini that i just copied in root data 
         root->data=mini;
        //  recursively calling this function to delete the root->right that we copied  
         root->right= delete_BST(root->right,mini);
         return root;

      }
 

    }
    else if(root->data>value){
     root->left=delete_BST(root->left,value);
     return root;
    }
    else {
        root->right=delete_BST(root->right,value);
        return root;
    }

}

int main()
{
    Node* root=NULL;
    cout<<"taking input to insert in BST"<<endl;
    takeinput(root);
   level_order_traversal(root);
   cout<<"traversal from Inorder: "<<endl;
   Inorder_traversal(root);
   cout<<endl;
    cout<<"traversal from Preorder: "<<endl;
   Preorder_traversal(root);
   cout<<endl;
 cout<<"traversal from Postorder: "<<endl;
   Postorder_traversal(root);
   cout<<endl;

cout<<"the minimum value of BST is : "<<min_value_BST(root)->data;
cout<<endl;
cout<<"the maximum value of BST is : "<<max_value_BST(root)->data;

cout<<"after deletion the tree looks like "<<endl;

delete_BST(root,27);
level_order_traversal(root);


    return 0;
}