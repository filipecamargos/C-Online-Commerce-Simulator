// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

//The Address Obejc;
class Address
{
  private:
   string street;
   string city;
   string state;
   string zip;
  public:
  //Our getter and Setters
   string getStreet() const {return street;}
   void setStreet(const string &street);

   string getCity()const {return city;}
   void setCity(const string &city);

   string getState()const{return state;}
   void setState(const string &state);

   string getZip()const {return zip;}
   void setZip(const string &zip);

   void display() const;

   //Here is our default fuctions
   Address();
   Address(const string &street, const string &city,
                const string &state, const string &zip);

};

#endif