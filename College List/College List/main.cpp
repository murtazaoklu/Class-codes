//
//  main.cpp
//  College List
//
//  Created by Murtaza Oklu on 4/27/17.
//  Copyright © 2017 Murtaza Oklu. All rights reserved.
//

#include <iostream>
#include <cctype>

#include "Person.h"
#include "CollegeEmployee.h"
#include "Faculty.h"
#include "Student.h"

char displayMenu()
{
    char response;
    
    cout << "Enter the type of person (C, F, S) or Q to quit: ";
    cin >> response;
    cin.ignore();
    
    return tolower(response);
}

int main()
{
    /*
    Faculty newPerson;
    
    newPerson.setName();
    newPerson.setStreetAddress();
    newPerson.setZip();
    newPerson.setPhoneNumber();
    newPerson.setSSN();
    newPerson.setDepartmentName();
    newPerson.setAnnualSalary();
    newPerson.setIsTenured();
    newPerson.display();
    
    Student student;
    
    student.setName();
    student.setStreetAddress();
    student.setZip();
    student.setPhoneNumber();
    student.setMajor();
    student.setGPA();
    student.display();
    */
    
    CollegeEmployee ce[4];
    Faculty f[3];
    Student s[7];
    
    int ceCount = 0, fCount = 0, sCount = 0;
    
    while(true)
    {
        char c = displayMenu();
        
        if(c == 'q')
        {
            break;
        }
        else if(c == 'c')
        {
            if(ceCount == 4)
            {
                cout << "You reached the maximum for College Employees already!\n";
                continue;
            }
            else
            {
                ce[ceCount].setName();
                ce[ceCount].setStreetAddress();
                ce[ceCount].setZip();
                ce[ceCount].setPhoneNumber();
                ce[ceCount].setSSN();
                ce[ceCount].setAnnualSalary();
                ce[ceCount].setDepartmentName();
                ceCount++;
            }
        }
        else if(c == 'f')
        {
            if(fCount == 3)
            {
                cout << "You reached the maximum for Faculty already!\n";
                continue;
            }
            else
            {
                f[fCount].setName();
                f[fCount].setStreetAddress();
                f[fCount].setZip();
                f[fCount].setPhoneNumber();
                f[fCount].setSSN();
                f[fCount].setAnnualSalary();
                f[fCount].setDepartmentName();
                f[fCount].setIsTenured();
                fCount++;
            }
        }
        else if(c == 's')
        {
            if(sCount == 7)
            {
                cout << "You reached the maximum for Students already!\n";
                continue;
            }
            else
            {
                s[sCount].setName();
                s[sCount].setStreetAddress();
                s[sCount].setZip();
                s[sCount].setPhoneNumber();
                s[sCount].setMajor();
                s[sCount].setGPA();
                sCount++;
            }
        }
        else
        {
            continue;
        }
    }
    
    cout << "College Employees" << endl;
    cout << "-----------------" << endl;
    
    if(!ceCount)
        cout << "No College Employee Information Found!\n\n";
    else
    {
        for(int i = 0; i < ceCount; i++)
            ce[i].display();
        cout << endl;
    }
    
    cout << "Faculty" << endl;
    cout << "-----------------" << endl;
    
    if(!fCount)
        cout << "No Faculty Information Found!\n\n";
    else
    {
        for(int i = 0; i < fCount; i++)
            f[i].display();
        cout << endl;
    }
    
    cout << "Student" << endl;
    cout << "-----------------" << endl;
    
    if(!sCount)
        cout << "No Student Information Found!\n\n";
    else
    {
        for(int i = 0; i < sCount; i++)
            s[i].display();
        cout << endl;
    }
    
    return 0;
}
