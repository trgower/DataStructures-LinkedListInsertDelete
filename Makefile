project2: Main.o StudentList.o Student.o
	g++ Main.o StudentList.o Student.o -o project2

Main.o: Main.cpp StudentList.h Student.h
	g++ -c Main.cpp

StudentList.o: StudentList.cpp StudentList.h Student.h
	g++ -c StudentList.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp
