#include <iostream>
#include "Group.h"
#include "Student.h"
#include "Deanery.h"
int main()
{

    Deanery d;
    d.createStudents(90);               //read data for students from file
    d.createGroups(2);                  //create 2 groups of 30 people
    //expell twonesses from two groups
    d.expell("PI1");
    d.expell("PI2");

    d.transfer(31, "PI2", "PI2");     //movement student

    d.election();                       //election in every group

    d.getInfo();                        //deanery stat
    d.writeToFile();                    //write new data

    return 0;
}