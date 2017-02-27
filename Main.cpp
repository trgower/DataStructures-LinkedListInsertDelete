/*

  Tanner Gower
  9/17/2016
  Project 2: The linked list with insert and delete

*/

#include <iostream>
#include "StudentList.h"
#include <ctime>
#include <cstdlib>

using namespace std;

const int kNumStudents = 10;

int main ()
{
  srand(time(0));

  Student students[kNumStudents];
  StudentList unsortedStudentList, sortedStudentList;
  cout << "----------UNSORTED ARRAY----------" << endl;
  for (int i = 0; i < kNumStudents; i++) {
    cout << students[i].toString() << endl;

    // append student to end of linked list
    // appendNode sets next to NULL, so we don't need it here
    unsortedStudentList.appendNode(students[i]);
  }
  cout << endl;

  cout << "----------UNSORTED LINKED LIST----------" << endl;
  unsortedStudentList.printElements();
  cout << endl;

  for (int i = 0; i < kNumStudents; i++) {
    sortedStudentList.insertNode(students[i]);
  }

  cout << "----------SORTED LINKED LIST----------" << endl;
  sortedStudentList.printElements();
  cout << endl;

  cout << "Deleting the 5th element of the sorted list" << endl;
  sortedStudentList.deleteNode(1);

  cout << "----------RESULTING LINKED LIST----------" << endl;
  sortedStudentList.printElements();
  cout << endl;

  cout << "Inserting a new student to the sorted list, id = ";
  Student insertMe;
  cout << insertMe.getId() << endl;
  sortedStudentList.insertNode(insertMe);

  cout << "----------RESULTING LINKED LIST----------" << endl;
  sortedStudentList.printElements();
  cout << endl;

  return 0;
}
