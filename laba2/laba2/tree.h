#pragma once
#include<cstdlib>
#include"hexagon.h"
#include"TTreeItem.h"
class TTree
{
public:
	TTree();
	std::shared_ptr<TTreeItem> return_root();
	~TTree();
private:
	std::shared_ptr<TTreeItem> root;
};