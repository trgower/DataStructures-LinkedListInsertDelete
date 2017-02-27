/*

  Tanner Gower
  9/17/2016
  Project 2: The linked list with insert and delete

*/

#ifndef STUDENT_H
#define STUDENT_H

class Student
{

  private:
    int id;
    std::string name;
    std::string address;
    double gpa;

  public:
    Student();
    ~Student();

    void setId(int);
    void setName(std::string);
    void setAddress(std::string);
    void setGpa(double);

    int getId();
    std::string getName();
    std::string getAddress();
    double getGpa();
    std::string toString();

};

#endif
