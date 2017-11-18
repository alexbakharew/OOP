#include "stdafx.h"
#include "tree.h"
#include <iostream>
#include <cstdlib>
#include <memory>
#include "hexagon.h"
#include "TTreeItem.h"
#include <vector>
int main()
{
	/*
	TTree tree = TTree(); // create tree with root
	std::shared_ptr<TTreeItem> curr_item = new TTreeItem; // create curr item
	curr_item = tree.return_root();
	//std::cout << *curr_item << std::endl;
	//std::cout << *root.return_root() << std::endl;
	int n = 0; // Default value
	while (n != -1)
	{
		std::cout << "				What you want to do?" << std::endl;
		std::cout << "				1 - move forward" << std::endl;
		std::cout << "				2 - move back" << std::endl;
		std::cout << "				3 - print current item" << std::endl;
		std::cout << "				4 - add item" << std::endl;
		std::cout << "				5 - remove item" << std::endl;
		std::cout << "				-1 for exit" << std::endl;
		std::cin >> n;
		switch (n)
		{
			case 1:
			{
				curr_item = curr_item->move_forward();
				continue;
			}
			case 2:
			{
				curr_item = curr_item->move_back();
				continue;
			}
			case 3:
			{
				std::cout << *curr_item << std::endl;
				continue;
			}
			case 4:
			{
				std::cout << "In which node you want to add this item?" << std::endl;
				size_t n1;
				std::cin >> n1;
				curr_item->add(new_item, n1);
				continue;
			}
			case 5:
			{
				std::cout << "Which item you want to delete?" << std::endl;
				size_t n1;
				std::cin >> n1;
				curr_item->remove(n1);
				continue;
			}
			case -1: break;
			default:
			{
				std::cout << "Wrong input. Try again!" << std::endl;
			}
		}
	}
	/*
	TTreeItem* item1 = new TTreeItem;
	TTreeItem* item2 = new TTreeItem;
	TTreeItem* item3 = new TTreeItem;
	TTreeItem* item4 = new TTreeItem;
	TTreeItem* item5 = new TTreeItem;
	item1->add(item2, 0);
	item1->add(item3, 1);
	item1->add(item4, 2);
	item1->add(item5, 3);
	while (1)
	{
		item1 = item1->move_forward();
		std::cout << item1;
		item1->move_back();
	}
	*/
	TTreeItem* item1 = new TTreeItem();
	TTreeItem* item2 = new TTreeItem();
	std::cin >> item1 >> item2;
	item1 = item2;
	return 0;
}