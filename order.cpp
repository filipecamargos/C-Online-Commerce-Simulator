#include <string>
#include "product.h"
#include "customer.h"
#include "order.h"

using namespace std;

//This fuction will set the Product
void Order::setProduct(const Product &product)
{
  this-> product = product;
}
   
//THis Fuction will set the QUantity 
void Order::setQuantity(const int quantity)
{
  this-> quantity = quantity;
}
    
//This Fuction will Set the Customer
void Order::setCustomer(const Customer &customer)
{
  this-> customer = customer;
}

//This fuction will display the Label
void Order::displayShippingLabel() const
{
  customer.display();
}

//This fuction will Display the full Info
void Order::displayInformation() const
{
  cout << customer.getName() << endl 
       << product.getName() << endl
       << "Total Price: $" << getTotalPrice() << endl;
}

//Our Default Order
Order::Order()
{
  quantity = 0;
}

//Our No-Default
Order::Order(const Product &product, const int quantity, const Customer &customer)
{
  setProduct(product);
  setCustomer(customer);
  setQuantity(quantity);
}
