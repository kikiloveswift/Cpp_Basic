//
//  Person.cpp
//  Cpp_Basic
//
//  Created by kong on 16/12/3.
//  Copyright © 2016年 kong. All rights reserved.
//

#include "Person.hpp"
#include <sstream>
using namespace std;

Person::Person():name("")
{
    
}
void Person::setName(char *inName)
{
    name = inName;
}
