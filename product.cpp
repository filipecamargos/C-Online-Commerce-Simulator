/***************************************************************
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include <iostream>
#include <iomanip>
#include "product.h"

using namespace std;

//Here is our default fuction
Product::Product()
{
  name = "none";
  description = "";
  weight = 0;
  price = 0;
}

//The No-default function that will take values
Product::Product(const string &name, const string &description,
        const float price, const float weight)
{
  setName(name);
  setDescription(description);
  setBasePrice(price);
  setWeight(weight);
}

//This fuction will get our valuer of our products
void Product::prompt()
{
  cout << "Enter name: ";
  getline(cin, name);

  cout << "Enter description: ";
  getline(cin, description);

  cout << "Enter weight: ";
  cin >> weight;
  cin.ignore();

  cout << "Enter price: ";
  cin  >> price;

  if (price < 0 || cin.fail())
     do
     {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter price: ";
        cin >> price;
     }
     while (price < 0 || cin.fail());
  
}

//This fuction will caculate our tax
float Product::getSalesTax() const
{
   float tax = price * 0.06;
   return tax;
}

//This fuction will caculate the shipping cost
float Product::getShippingCost() const
{
   float flat = 2;
   
   if (weight > 5 )
   {
      flat += ((weight - 5) * 0.10);
   }
   if (weight == 0)
   {
     return 0;
   }

   return flat;
}

//This Fuction caculate the total buy adding our caculations
float Product::getTotalPrice() const
{
   float total = price + getShippingCost() + getSalesTax();

   return total;
}

/*This is our Display Advertising Profile: Should display the name, base price, and description*/
void Product::displayAdvertising() const
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << name << " - $" << price << endl << "(" << description << ")" << endl;
}

/*This is our Display Inventory Line Item: Should display the base price, name, and weight*/
void Product::displayInventory() const
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "$" << price << " - " << name << " - ";
   cout.precision(1);
   cout << weight << " lbs" << endl;

}

/*This Display Receipt: Should display the name, base price, sales tax, shipping cost, and total price */
void Product::displayReceipt() const
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << name << endl;
   cout << "  Price:" << setw(10) << "$" << setw(8) 
        << price << endl;
   cout << "  Sales tax:" << setw(6) << "$" << setw(8) 
        << getSalesTax() << endl;
   cout << "  Shipping cost: $" << setw(8) 
        << getShippingCost() << endl;
   cout << "  Total:" << setw(10) << "$" << setw(8) 
        << getTotalPrice() << endl;

}

// This fuction will set the name 
void Product::setName(const string &name)
{
  this-> name = name;
}

//This fuction will set the Description
void Product::setDescription(const string &description)
{
  this-> description = description;
}

//this fuction will set the price
void Product::setBasePrice(const float price)
{
  this-> price = price;
}

//this fuction will set the weight
void Product::setWeight(const float weight)
{
  this-> weight = weight;
}