/*

  Tanner Gower
  9/17/2016
  Project 2: The linked list with insert and delete

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "StudentList.h"

using namespace std;

StudentList::StudentList()
{
  head = NULL;
}

StudentList::~StudentList()
{
  // destroy stuff
}

void StudentList::appendNode(Student newStudent)
{
  StudentNode* newNode = new StudentNode;
  newNode->student = newStudent;
  newNode->next = NULL;
  if (!head) { // list is empty, point head to newNode
    head = newNode;
  } else {
    StudentNode* curr; // node used to traverse the list
    curr = head;
    while (curr->next) // move curr to the last node in list
      curr = curr->next;

    curr->next = newNode; // append to end of list
  }
}

void StudentList::insertNode(Student newStudent)
{
  StudentNode* newNode = new StudentNode;
  newNode->student = newStudent;
  if (!head) { // list is empty, point head to newNode
    head = newNode;
    newNode->next = NULL;
  } else {
    StudentNode *curr = NULL, *prev = NULL;
    curr = head;
    while (curr && curr->student.getId() < newNode->student.getId()) {
      prev = curr;
      curr = curr->next;
    }

    if (!prev)
      head = newNode;
    else
      prev->next = newNode;
    newNode->next = curr;
  }
}

void StudentList::deleteNode(int index)
{
  if (head) {
    StudentNode *curr = NULL, *prev = NULL;
    curr = head;
    for (int i = 1; i < index && curr; i++) {
      prev = curr;
      curr = curr->next;
    }

    if (curr) {
      if (!prev) // Delete first element in list
        head = curr->next;
      else
        prev->next = curr->next;
      cout << "Deleting node with id = " << curr->student.getId() << endl;
      delete curr;
    } else {
      cout << "List has less than " << index << " elements." << endl;
    }
  }
}

void StudentList::printElements()
{
  StudentNode* curr = head;
  while (curr) {
    cout << curr->student.toString() << endl;
    curr = curr->next;
  }
}
