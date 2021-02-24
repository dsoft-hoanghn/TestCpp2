#include <stdexcept>
#include <string>
#include <iostream>

class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const
    {
        return value;
    }

    Node* getLeft() const
    {
        return left;
    }

    Node* getRight() const
    {
        return right;
    }

private:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
    public:
        static bool contains(const Node *root, int Value)
        {
            if (root->getValue() == Value) return true;
            else if (root->getValue() < Value && root->getRight() != NULL)
            {
                return contains(root->getRight(), Value);
            }
            else if (root->getLeft() != NULL)
                return contains(root->getLeft(), Value);
            return false;
            throw std::logic_error("Waiting to be implemented");
        }
};

#ifndef RunTests
int main()
{
    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);

    std::cout << "this is result: " << BinarySearchTree::contains(&n2, 3);
}
#endif