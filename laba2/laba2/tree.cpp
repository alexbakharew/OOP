#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "tree.h"
#include "hexagon.h"
#include "TTreeItem.h"
TTree::TTree()
{
	std::cout << "Creation of root" << std::endl;
	std::shared_ptr<TTreeItem> item(new TTreeItem);
//	std::cin >> item;
	root = item;
}
std::shared_ptr<TTreeItem> TTree::return_root()
{
	return root;
}
TTree::~TTree()
{
	//root->remove;
}
