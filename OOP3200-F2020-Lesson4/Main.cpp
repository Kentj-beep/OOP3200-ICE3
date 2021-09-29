/*
 * Name: Jacob Kent
 * Student #: 100609784
 * Date: Sept 29, 2021
 * Project: ICE 3
 * Using files from Tom Tsiliopoulos
 *
 *
 */
#include <iostream>
#include <vector>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    // Person is abstract, can't instantiate 
    Person person = Person("Jane", "Dough", 22);
    person.SaysHello();

    std::cout << person.ToString() << std::endl;

    Student student = Student("Jacob", "Kent", 23, "100609784");
    student.SaysHello();
    student.Studies();

    std::cout << student.ToString() << std::endl;

    Professor professor = Professor("Bernardo", "de la Paz", 68, "Sherlock123");
    professor.SaysHello();
    professor.Teaches();

    std::cout << professor.ToString() << std::endl;

    // Dynamic Memory Allocation with Objects

    std::vector<Person*> people;

    people.push_back(new Professor("Juan", "Life", 34, "xq3tv0lmno"));

    people[0]->SaysHello();

    std::cout << people[0]->ToString() << std::endl;

    people.push_back(new Student("Mike", "Road", 19, "L313787954"));
    people[1]->SaysHello();
    // people[1]->Studies();
}

