#include "header.h"

extern int numStudents;
extern int addStudents;
extern std::vector<STUDENT>students;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");
	int choice;

	while (true)
	{	
		std::cout << " ������� ����� ���� \n";
		std::cout << "[1] ���� � ���������� ������ ���������;\n";
		std::cout << "[2] ����� �� ������� ������� � ������� ����� ���� ���������, ������� ������ 4 � 5;\n";
		std::cout << "[3] ���������� ���������;\n";
		std::cout << "[4] ����� �� ������� ���� ��������� �� ��������� ������ ������;\n";
		std::cout << "[5] ����� �������� �� �������.\n";
		std::cout << "[0] �����\n";

		std::cin >> choice;
		switch (choice)
		{
		case EXIT:
		{
			system("cls");
			return 0;
		}
		case INPUT_DATA:
		{
			system("cls");
			std::cout << "������� ����� �� ������ ��������? "; std::cin >> numStudents;
			inputData();
			for (const auto& student : students) {
				std::cout << "���: " << student.name << ", �������: " << student.surname << ", ������: " << student.group << std::endl;
			}
			break;

		}
		case PRINT_GOODGRADES_STUDENTS:
		{
			system("cls");
			printGoodGradesStudents(); break;
		}
		case ADD_STUDENT:
		{
			system("cls");
			std::cout << "������� ����� �� ������ ��������? "; std::cin >> numStudents;
			inputData(); break;
		}
		case PRINT_STUDENTS_BY_GROUP:
		{
			system("cls");
			printStudentsByGroup();	break;
		}
		case SEARCH_STUDENT_BY_SURNAME:
		{
			system("cls");
			searchStudentBySurname();
			break;
		}
		default: system("cls"); std::cout << "������������ ���� ������ ����\n";
			break;
		}
	}
}


