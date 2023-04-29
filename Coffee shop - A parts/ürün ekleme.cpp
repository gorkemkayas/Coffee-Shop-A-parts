#include <iostream>
#include <string>
#include "windows.h"

using namespace std;
static float total_price = 0;
bool controller;


float sum_price(float _price) {

	total_price += _price;

	return total_price;
}
class Product
{
public:

	string name, type, description;
	float price;
	int stock;


	Product(string _name, string _type, float _price,  int _stock, string _description = "")
	{
		name = _name;
		type = _type;
		price = _price;
		stock = _stock;
		description = _description;
	}

	void show() {
		cout << name << ": " << price << "$" << "  (" << description << ")" << endl;
	}

	int stock_down(int number_of_times)
	{
		if (stock - number_of_times >= 0)
		{
			stock -= number_of_times;
			
			controller = true;

			return stock;
		}
		else
		{	
			cout << "\n\n";
			Sleep(2000);
			cout << "	  " << name << " is out of stock" << endl;
			cout << "	  Current stock is : " << stock << endl << endl;
			
			controller = false;

			return 0;
		}
		
	}

};

int main()
{	
					// Creating products:
						// Hots;
	Product filter_coffee("Filter Coffee", "Hot Drinks", 2, 50,"Brewed, balanced, dense filter coffee");
	Product latte("Latte", "Hot Drinks", 4, 50,"Balanced blend of rich espresso, steamed velvety milk and milk foam");
	Product mocha("Mocha", "Hot Drinks", 4, 50,"Espresso is served with mocha sauce and steam-heated milk,complete with cream.");
	Product hot_chocolate("Hot Chocolate", "Hot Drinks", 4, 50,"Sweet flavor that emerges when steamed milk meets mocha sauce");
	Product tea("Tea", "Hot Drinks", 2, 50,"Freshly brewed black tea from carefully selected Turkish Tea leaves");

						// Colds;
	
	Product lemonade("Lemonade", "Cold Drinks", 3, 50,"Lemonade obtained from carefully selected lemons from Mersin");
	Product milkshake("Milkshake", "Cold Drinks", 5, 50,"A drink made with a tremendous harmony of milk, crushed ice, chocolate and various fruits.");
	Product frappe("Frappe", "Cold Drinks", 5, 50,"Greek iced coffee drink made from instant coffee, water, sugar, and milk.");
	
					  // Desserts;

	Product muffin("Muffin", "Desserts", 10, 50,"Belgian Chocolate Muffin. A pleasant meeting of chocolate chips with muffins");
	Product brownie("Brownie", "Desserts", 15, 50,"An indispensable taste with butter and dark chocolate");
	Product cheesecake("Cheesecake", "Desserts", 15, 50,"Cheesecake decorated with a special cheese filling and lemon sauce combined with a biscuit base");
	Product magnolia("Magnolia", "Desserts", 10, 50,"A dessert with banana, cream and sponge cake");


	string choice;
	int choice_int;

					// First screen

	cout << "\n        Welcome to our Coffee Shop!" << endl << endl;

	while (true)
	{

		cout << "***   		  Menu		   ***" << endl << endl;

		cout << "	  1) Hot Drinks" << endl;
		cout << "	  2) Cold Drinks" << endl;
		cout << "	  3) Desserts" << endl << endl;

		cout << "Choice: ";
		cin >> choice;
		cout << endl;

		if (choice == "1") 
		{
			cout << "	  1)";  filter_coffee.show();
			cout << "	  2)"; latte.show();
			cout << "	  3)"; mocha.show();
			cout << "	  4)"; hot_chocolate.show();
			cout << "	  5)"; tea.show(); 
			cout << endl;

			cout << "Select one : ";
			cin >> choice;

			if (choice == "1")
			{
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				filter_coffee.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * filter_coffee.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "2")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				latte.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * latte.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "3")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				mocha.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * mocha.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "4")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				hot_chocolate.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * hot_chocolate.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "5")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				tea.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * tea.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
				}
		}
		else if (choice == "2")
		{
			cout << "	  1)"; lemonade.show();
			cout << "	  2)"; milkshake.show();
			cout << "	  3)"; frappe.show();
			cout << endl;

			cout << "Select one : ";
			cin >> choice;

			if (choice == "1")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				lemonade.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * lemonade.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "2")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				milkshake.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * milkshake.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "3")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				frappe.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * frappe.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
		}
		else if (choice == "3")
		{
			cout << "	  1)"; muffin.show();
			cout << "	  2)"; brownie.show();
			cout << "	  3)"; cheesecake.show();
			cout << "	  4)"; magnolia.show();
			cout << endl;

			cout << "Select one : ";
			cin >> choice;

			if (choice == "1")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				muffin.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int*muffin.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "2")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				brownie.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * brownie.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "3")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * cheesecake.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
			else if (choice == "4")
			{	
				cout << "\n How many: ";
				cin >> choice_int;
				cout << endl;
				cout << "\n	  product is adding..." << endl;
				magnolia.stock_down(choice_int);
				Sleep(2000);
				if (controller == true)
				{
					sum_price(choice_int * magnolia.price);
					cout << "\n	  Total price is: " << total_price << "$\n\n" << endl;
				}
				Sleep(1000);
				cout << "Will you continue with the order (1) or proceed to the payment part? (2): ";
				cin >> choice;
				cout << endl;

				if (choice == "1")
				{
					Sleep(1000);
					continue;
				}
				else if (choice == "2")
				{
					cout << "\n		PAYMENT PART - PAYMENT PART - PAYMENT PART - PAYMENT PART" << endl;
					break;
				}
				else
				{
					cout << "Please select 1 or 2" << endl;
					continue;
				}
			}
		}
		else 
		{
			cout << "Invalid request. Please choose between 1-3. " << endl << endl;
			continue;

		}


	}
	

}