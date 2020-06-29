#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *lchild;
    int data;
    Node *rchild;
}*root=nullptr;
void create() {
   Node *p,*t;
   int x;
   scanf("%d",&x);
   root = new Node;
   root->data = x;
   root->lchild = root->rchild = nullptr;
   queue<Node *> q;
   q.push(root);
   while(!q.empty()) {
        p = q.front();
        q.pop();
        t = new Node;
        printf("Enter left child: of %d\n",p->data );
        int number;
        cin >> number; //t->data
        if(number != -1) {
            t->data = number;
            t->lchild = t->rchild = nullptr;
            p->lchild = t;
            q.push(t);
        }
        printf("Enter right child: of %d\n",p->data);
        cin >> number;
        t = new Node;
        if(number != -1) {
            t->data = number;
            t->lchild = t->rchild = nullptr;
            p->rchild = t;
            q.push(t);
        }
    }
}
void preorder(Node *p) {
    if(p) {
        cout << p->data << endl;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(Node *p) {
    if(p) {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}
void postorder(Node *p) {
    if(p) {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d\n",p->data);
    }
}
void preorder_iterative(Node *t) {
    stack<Node *>st;
    while(t||!st.empty()) {
        if(t) {
            printf("%d ",t->data);
            st.push(t);
            t = t->lchild;
        } else {
            t = st.top();
            st.pop();
            t = t->rchild;

        }
    }
}
void inorder_iterative(Node *t) {
    stack<Node *>st;
    while(t||!st.empty()) {
        if(t){
            st.push(t);
            t = t->lchild;
        } else {
            t = st.top();
            st.pop();
            printf("%d ",t->data);
            t = t->rchild;
        }
    }
}
void levelorder(Node *p) {
    queue<Node *> q;
    q.push(p);
    while(!q.empty()) {
        p = q.front();
        q.pop();
        if(p) {
            cout << p->data << " ";
            if(p->lchild) {
                q.push(p->lchild);
            }
            if(p->rchild) {
                q.push(p->rchild);
            }
        }
    }
}
int count_nodes(Node *p) {
    if(p) {
        return count_nodes(p->lchild)+count_nodes(p->rchild)+1;
    }
    return 0;
}
int height(Node *p) {
    int x = 0,y = 0;
    if(p==0) {
        return 0;
    }
    x = height(p->lchild);
    y = height(p->rchild);
    if(x>y) {
        return x+1;
    } else {
        return y+1;
    }
}
int nodes_with_degree_2(Node *p) {
    int x,y;
    if(p){
        x = nodes_with_degree_2(p->lchild);
        y = nodes_with_degree_2(p->rchild);
        if(p->lchild&&p->rchild){
            return x+y+1;
        } else {
            return x+y;
        }
    }
}
int leaf_nodes(Node *p) {
    int x,y;
    if(p) {
        x = leaf_nodes(p->lchild);
        y = leaf_nodes(p->rchild);
        if(!p->lchild&&!p->rchild) {
            return 1;
        } else {
            return x+y;
        }
    }
    return 0;
}
int nodes_with_degree1(Node *p) {
    int x,y;
    if(p) {
        x = nodes_with_degree1(p->lchild);
        y = nodes_with_degree1(p->rchild);
        /***if(((p->lchild==0)&&p->rchild)||((p->rchild==0)&&p->lchild)){
            return x+y+1;
        }*/
        if(p->lchild!=0 ^ p->rchild!=0) //l xor r = lr' + l'r
        {
            return x + y + 1;
        } else {
            return x + y;
        }
    }
    return 0;
}
int main() {
    create();
    cout << "Nodes: " << count_nodes(root) << endl;
    cout << "Height: " << height(root) << endl;
    cout << "Nodes with degree 2: " << nodes_with_degree_2(root) << endl;
    cout << "Leaf Nodes:" << leaf_nodes(root) << endl;
    cout << "Nodes with degree one : " << nodes_with_degree1(root) << endl;

}

//8 3 5 12 -1 10 6 -1 4 -1 -1 17 -1 9 7 -1 -1 -1 -1 -1 -1

