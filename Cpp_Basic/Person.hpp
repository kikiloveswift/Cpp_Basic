//
//  Person.hpp
//  Cpp_Basic
//
//  Created by kong on 16/12/3.
//  Copyright © 2016年 kong. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

class Person
{
    
public:
    Person();
    void setName(char *inName);
    
public:
    char *name;
};

#endif /* Person_hpp */
