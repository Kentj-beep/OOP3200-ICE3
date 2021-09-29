/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>

#include "Person.h"


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
void Student(std::string first_name, std::string last_name, float age, std::string student_id);
    
std::string getStudentID();
    
/**
 * @param value
 */
void setStudentID(std::string value);
    
void Studies();
    
std::string ToString();
private: 
    std::string m_studentID;
};

#endif //_STUDENT_H