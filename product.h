/***************************************************************
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product
{
  private:
    string name;
    float price;
    float weight;
    string description; 

  public:
    void prompt();
    float getSalesTax() const;
    float getShippingCost() const;
    float getTotalPrice() const;
    void displayAdvertising() const;
    void displayInventory() const;
    void displayReceipt() const;

    //My getter and Setter
    string getName() const {return name;}
    void setName(const string &name);

    string getDescription() const {return description;}
    void setDescription(const string &description);

    float getBasePrice() const {return price;}
    void setBasePrice(const float price);

    float getWeight() const {return weight;}
    void setWeight(const float weight);

    //Our default fuction
    Product();

    //Our No-Default fuction
    Product(const string &name, const string &description,
            const float price, const float weight);


};


#endif
