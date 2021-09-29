/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include <string>

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
void Professor(std::string first_name, std::string last_name, float age, std::string employee_id);
    
std::string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(std::string value);
    
void Teaches();
    
std::string ToString();
private: 
    std::string m_employeeID;
};

#endif //_PROFESSOR_H