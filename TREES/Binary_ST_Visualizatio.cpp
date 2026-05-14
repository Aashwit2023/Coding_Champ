#include <iostream>
#include <iomanip>
using namespace std;

class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        int data;
    };

    tree_node* root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const { return root == NULL; }

    void insert(int);
    void remove(int);
    void print_postorder();

private:
    void postorder(tree_node*, int indent);
};

/* ---------------- INSERT ---------------- */

void BinarySearchTree::insert(int val)
{
    tree_node* newNode = new tree_node;
    newNode->data = val;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (isEmpty())
    {
        root = newNode;
        return;
    }

    tree_node* current = root;
    tree_node* parent = nullptr;

    while (current != nullptr)
    {
        parent = current;
        if (val < current->data)
            current = current->left;
        else
            current = current->right;
    }

    if (val < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;
}

/* ---------------- REMOVE ---------------- */

void BinarySearchTree::remove(int val)
{
    if (isEmpty())
    {
        cout << "Tree is empty!" << endl;
        return;
    }

    tree_node* curr = root;
    tree_node* parent = nullptr;

    while (curr != nullptr && curr->data != val)
    {
        parent = curr;
        if (val < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (curr == nullptr)
    {
        cout << "Value not found!" << endl;
        return;
    }

    // 0 or 1 child
    if (curr->left == nullptr || curr->right == nullptr)
    {
        tree_node* child =
            (curr->left != nullptr) ? curr->left : curr->right;

        if (parent == nullptr)
            root = child;
        else if (parent->left == curr)
            parent->left = child;
        else
            parent->right = child;

        delete curr;
    }
    // 2 children
    else
    {
        tree_node* successor = curr->right;
        tree_node* successorParent = curr;

        while (successor->left != nullptr)
        {
            successorParent = successor;
            successor = successor->left;
        }

        curr->data = successor->data;

        if (successorParent->left == successor)
            successorParent->left = successor->right;
        else
            successorParent->right = successor->right;

        delete successor;
    }
}

/* ---------------- PRINT ---------------- */

void BinarySearchTree::print_postorder()
{
    postorder(root, 0);
}

void BinarySearchTree::postorder(tree_node* p, int indent)
{
    if (p != nullptr)
    {
        if (p->right)
            postorder(p->right, indent + 6);

        if (indent)
            cout << setw(indent) << ' ';

        if (p->right)
            cout << "   /\n" << setw(indent);

        cout << p->data << "\n";

        if (p->left)
        {
            cout << setw(indent) << ' ' << "   \\\n";
            postorder(p->left, indent + 6);
        }
    }
}

/* ---------------- MAIN ---------------- */

int main()
{
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    cout << "BST before deletion:\n";
    bst.print_postorder();

    cout << "\nDeleting 50...\n";
    bst.remove(50);

    cout << "\nBST after deletion:\n";
    bst.print_postorder();

    return 0;
}
