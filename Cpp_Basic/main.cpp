//
//  main.cpp
//  Cpp_Basic
//
//  Created by kong on 16/12/3.
//  Copyright © 2016年 kong. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Person myPerson;
    myPerson.setName((char *)"jack");
    
    Person otherPerson;
    otherPerson.setName((char *)"Rose");
    
    
    Person* thirdPerson = new Person();
    thirdPerson->setName((char *)"konglee");
    
    printf("myPerson's name is %s\n",myPerson.name);
    printf("otherPerson's name is %s\n",otherPerson.name);
    printf("thirdPerson's name is %s\n",thirdPerson->name);
    
    return 0;
}
