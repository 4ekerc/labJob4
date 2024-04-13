#pragma once
#include "header.h"
enum MENU 
{   
    EXIT,
    INPUT_DATA,
    PRINT_GOODGRADES_STUDENTS,
    ADD_STUDENT,
    PRINT_STUDENTS_BY_GROUP,
    SEARCH_STUDENT_BY_SURNAME
};

void inputData();
void printGoodGradesStudents();
void printStudentsByGroup();
void searchStudentBySurname();