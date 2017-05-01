//
//  Faculty.h
//  College List
//
//  Created by Murtaza Oklu on 4/27/17.
//  Copyright © 2017 Murtaza Oklu. All rights reserved.
//

#ifndef Faculty_h
#define Faculty_h

#include "CollegeEmployee.h"
#include <cctype>

class Faculty : public CollegeEmployee
{
protected:
    bool isTenured;
    
public:
    
    Faculty()
    {
        
    }
    
    bool getIsTenured()
    {
        return isTenured;
    }
    
    void setIsTenured()
    {
        char response;
        
        cout << "Is tenured? (Y/N): ";
        cin >> response;
        cin.ignore();
        
        if(tolower(response) == 'y')
            isTenured = true;
        else
            isTenured = false;
    }
    
    void display()
    {
        CollegeEmployee::display();
        
        if(isTenured) cout << "Tenured\n";
        else cout << "Not tenured\n";
    }
};

#endif /* Faculty_h */
