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
Student(const std::string& first_name, const std::string& last_name, float age, std::string student_id);
    
std::string getStudentID() const;
    
/**
 * @param value
 */
void setStudentID(const std::string& value);
    
void Studies() const;
    
std::string ToString() override;

private: 
    std::string m_studentID;
};

#endif //_STUDENT_H