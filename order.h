#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "product.h"
#include "customer.h"

using namespace std;

//This class will get the provide the set for info od the Order
class Order
{
  //The Data
  private:
    Product product;
    int quantity;
    Customer customer;

  public:
  //Getter and Setters
   Product getProduct() const {return product;}
   void setProduct(const Product &product);
   
   int getQuantity() const {return quantity;} 
   void setQuantity(const int quantity);
    
   Customer getCustomer() const {return customer;}
   void setCustomer(const Customer &customer);

   string getShippingZip() const {return customer.getAddress().getZip();}
   float getTotalPrice() const {return product.getTotalPrice() * quantity;}

   //Display Fuctions
   void displayShippingLabel() const;
   void displayInformation() const;

   //Default and No- default fucntion
   Order();
   Order(const Product &product, const int quantity, const Customer &customer);

};

#endif