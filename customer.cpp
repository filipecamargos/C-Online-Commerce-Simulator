#include <iostream>
#include "customer.h"
#include "address.h"

using namespace std;

//Set our customer names
void Customer::setName(const string &name)
{
  this-> name = name;
}

//Set our Address with our Address object
void Customer::setAddress (const Address &address)
{
  this-> address = address;
}

//This display fuction will use our address object and customer name
void Customer::display() const
{
  cout << getName() << endl << address.getStreet() 
       << endl << address.getCity() << ", " << address.getState()
       << " " << address.getZip() << endl;
}

//Defautl function for name and address
Customer::Customer()
{
  name = "unspecified";
}

//The No-Defalt for name and address
Customer::Customer(const string &name, const Address &address)
{
  setName(name);
  setAddress(address);

}