// File: address.cpp
#include <iostream>
#include "address.h"

using namespace std;

//Here is our default fuction
Address::Address()
{
  street = "unknown";
  zip = "00000";
  city = "";
  state = "";
}

/*Here is our Non-Non-default - Accept 4
  strings (street, city, state, zip) and set each of the values*/
Address::Address(const string &street, const string &city,
                const string &state, const string &zip)
{
   setStreet(street);
   setCity(city);
   setState(state);
   setZip(zip);
}

//This fuction will set our address
void Address::setStreet(const string &street)
{
   this-> street = street;
}

//This will set our city
void Address::setCity(const string &city)
{
   this-> city =  city;
}

//This will set our State
void Address::setState(const string &state)
{
   this-> state = state;
}

//THis will set our zip
void Address::setZip(const string &zip)
{
   this-> zip = zip;
}

//This is our display fuction
void Address::display () const
{
   cout << getStreet() << endl << getCity()
        << ", " << getState() << " " << getZip() << endl;
}
