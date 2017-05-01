//
//  CollegeEmployee.h
//  College List
//
//  Created by Murtaza Oklu on 4/27/17.
//  Copyright © 2017 Murtaza Oklu. All rights reserved.
//

#ifndef CollegeEmployee_h
#define CollegeEmployee_h

#include "Person.h"

class CollegeEmployee : public Person
{
protected:
    string SSN;
    int annualSalary;
    string departmentName;
    
public:
    CollegeEmployee()
    {
        
    }
    
    string getSSN()
    {
        return SSN;
    }
    
    void setSSN()
    {
        cout << "Enter SSN: ";
        getline(cin, SSN);
    }
    
    int getAnnualSalary()
    {
        return annualSalary;
    }
    
    void setAnnualSalary()
    {
        cout << "Enter annual salary: ";
        cin >> annualSalary;
        cin.ignore();
    }
    
    string getDepartmentName()
    {
        return departmentName;
    }
    
    void setDepartmentName()
    {
        cout << "Enter department name: ";
        getline(cin, departmentName);
    }
    
    void display()
    {
        Person::display();
        cout << "SSN: " << getSSN() << endl;
        cout << "Annual Salary: " << getAnnualSalary() << endl;
        cout << "Department: " << getDepartmentName() << endl;
    }
};

#endif /* CollegeEmployee_h */
