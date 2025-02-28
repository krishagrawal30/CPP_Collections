#include<iostream>
using namespace std;
class node
{
    public: 
        int d;
        node *l;
        node *r;
        node(int value)
        {
            d = value;
            l = r = nullptr;
        }

};
class tree
{
    public:
        node *root;
        tree()
        {
            root = nullptr;
        }  
        node *insert(node *n, int value)
        {
            if(n==nullptr)
                return new node(value);
            if(value < n->d) 
                n->l = insert(n->l, value);
            else if(value > n->d) 
                n->r = insert(n->r, value);
            return n;
        }
        void inorder(node *n)
        {
            if(n== nullptr) return;
            inorder(n->l);
            cout<<n->d <<" ";
            inorder(n->r);
        }
        void preorder(node *n)
        {
            if(n== nullptr) return;
            cout<<n->d <<" ";
            inorder(n->l);
            inorder(n->r);
        }
        void postorder(node *n)
        {
            if(n== nullptr) return;
            inorder(n->l);
            inorder(n->r);
            cout<<n->d <<" ";
        }
};
int main()
{
    tree t;
    t.root = t.insert(t.root, 50);
    t.root = t.insert(t.root, 30);
    t.root = t.insert(t.root, 20);
    t.root = t.insert(t.root, 40);
    t.root = t.insert(t.root, 70);
    t.root = t.insert(t.root, 60);
    t.root = t.insert(t.root, 80);
    cout << "In-order traversal of the tree: ";
    t.inorder(t.root);
    cout<<endl;
    cout << "Pre-order traversal of the tree: ";
    t.preorder(t.root);
    cout << endl;
    cout << "Post-order traversal of the tree: ";
    t.postorder(t.root);
    cout << endl;
    return 0;
}