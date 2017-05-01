//
//  Person.h
//  College List
//
//  Created by Murtaza Oklu on 4/27/17.
//  Copyright © 2017 Murtaza Oklu. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    string streetAddress;
    int zip;
    string phoneNumber;
    
public:
    Person()
    {
        
    }
    
    string getName()
    {
        return name;
    }
    
    void setName()
    {
        cout << "Enter the name: ";
        getline(cin, name);
    }
    
    string getStreetAddress()
    {
        return streetAddress;
    }
    
    void setStreetAddress()
    {
        cout << "Enter the street address: ";
        getline(cin, streetAddress);
    }
    
    int getZip()
    {
        return zip;
    }
    
    void setZip()
    {
        cout << "Enter the zip code: ";
        cin >> zip;
        cin.ignore();
    }
    
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    
    void setPhoneNumber()
    {
        cout << "Enter the phone number: ";
        getline(cin, phoneNumber);
    }
    
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Street Address: " << getStreetAddress() << endl;
        cout << "Zip: " << getZip() << endl;
        cout << "Phone Number: " << getPhoneNumber() << endl;
    }
};

#endif /* Person_h */
----------
