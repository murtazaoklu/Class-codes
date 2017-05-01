//
//  Student.h
//  College List
//
//  Created by Murtaza Oklu on 4/27/17.
//  Copyright © 2017 Murtaza Oklu. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include "Person.h"
#include <iomanip>

class Student : public Person
{
protected:
    string major;
    float GPA;
    
public:
    Student()
    {
        
    }
    
    string getMajor()
    {
        return major;
    }
    
    void setMajor()
    {
        cout << "Enter major: ";
        getline(cin, major);
    }
    
    float getGPA()
    {
        return GPA;
    }
    
    void setGPA()
    {
        cout << "Enter GPA: ";
        cin >> GPA;
        cin.ignore();
    }
    
    void display()
    {
        Person::display();
        cout << "Major: " << getMajor() << endl;
        cout << "GPA: " << setprecision(2) << fixed << getGPA() << endl;
    }
};

#endif /* Student_h */
