#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"
#include <string>
using namespace std;

//This class will get the provide the set for info od the client
class Customer
{
  private:
    string name;
    Address address;
  public:
    string getName() const {return name;} 
    void setName(const string &name);

    Address getAddress() const {return address;}
    void setAddress (const Address &address);

    void display() const;

    //To defalt our variables
    Customer();
    Customer(const string &name, const Address &address);


};

#endif