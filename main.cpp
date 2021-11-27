#include <iostream>
using namespace std;
#include "AVLTree.h"

int main()
{
	AVLTree<int, int> tree;
	for (int i = 1; i <=10; i++)
	{
		tree.insert(i, i);
	}

	tree.delete_(10);
	tree.delete_(5);
	tree.delete_(1);
	
	tree.inorderPrintKeys();
	cout << endl << endl;
	cout <<"Height of the Tree: "<< tree.getTreeHeight();
	
	
}
