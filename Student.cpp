/*

  Tanner Gower
  9/17/2016
  Project 2: The linked list with insert and delete

*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Student.h"

using namespace std;

Student::Student()
{
  id = rand() % 899999 + 100000;
  name = "John Doe";
  address = "123 Address Line, San Marcos, TX 78666";
  gpa = 4.0;
}

Student::~Student()
{
  // DELETES
}

void Student::setId(int newId) { id = newId; }
void Student::setName(string newName) { name = newName; }
void Student::setAddress(string newAddress) { address = newAddress; }
void Student::setGpa(double newGpa) { gpa = newGpa; }

int Student::getId() { return id; }
string Student::getName() { return name; }
string Student::getAddress() { return address; }
double Student::getGpa() { return gpa; }
string Student::toString() {
  stringstream ss;
  ss << id << ", " << name << ", " << address << ", " << gpa;
  return ss.str();
}
