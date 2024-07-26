/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treeDataSturcture.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:56:54 by omakran           #+#    #+#             */
/*   Updated: 2024/07/26 11:50:35 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

======>>> Regular Tree (N-ary Tree):

A regular tree (often called an n-ary tree)
  is a tree in which each node can have zero or more child nodes.
            
          A
         /|\
        / | \
       B  C  D
      /|  |\
     E F  G H
         /|\ 
        I J K

In this example, the root node "A" has three children (B, C, D).
The node "B" has two children (E, F), and the node "C" has three children (G, H, I), and so on.

--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------

====>>> Binary Tree:

A binary tree is a type of tree in which each node has at most two children, referred to as the left child and the right child.

          A
         / \
        B   C
       / \   \
      D   E   F
     /         \
    G           H


#####==>>> I, J, K in the regular tree, and G, H in the binary tree are all => (leaf nodes) because they do not have any children.

*/

#include <iostream>

// represtent the node:
struct Node {
  int data;
  Node* left;
  Node* right;
};

// create the node:
Node* creationNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->left = newNode->right = NULL; // make sure that the left and right children are NULL
  return newNode;
}


int main() {
  // Level 1:
  Node* root = creationNode(1);
  // Level 2:
  root->left = creationNode(2);
  root->right = creationNode(3);
  // Level 3:
  root->left->left = creationNode(4);
  root->left->right = creationNode(5);
  root->right->left = creationNode(6);
  root->right->right = creationNode(7);
  // Level 4:
  root->left->right->right = creationNode(9);
  root->right->right->left = creationNode(15);
  
  return 0;
}