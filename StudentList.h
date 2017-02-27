/*

  Tanner Gower
  9/17/2016
  Project 2: The linked list with insert and delete

*/

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

class StudentList
{

  private:
    class StudentNode {
      public:
        Student student;
        StudentNode* next;
    };

    StudentNode *head;

  public:
    StudentList();
    ~StudentList();

    void appendNode(Student);
    void insertNode(Student);
    void deleteNode(int);
    void printElements();

};

#endif
