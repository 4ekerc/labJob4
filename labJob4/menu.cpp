#include "header.h"

std::vector<STUDENT> students;

int numStudents = 0;

STUDENT human;
void inputData()
{
	for (size_t i = 0; i < numStudents; i++)
	{
		std::cout << "������� ������ ��� �������� ����� " << i + 1 << ":" << std::endl;
		std::cout << "���: "; std::cin >> human.name;
		std::cout << "�������: "; std::cin >> human.surname;
		std::cout << "������: "; std::cin >> human.group;
		std::cout << "������: "; std::cin >> human.grades;
		students.push_back(human);
	}
}

void printGoodGradesStudents()
{
	int counter = 0;
	for (const auto& student : students) 
	{
		if (student.grades == 4||student.grades == 5)
		{
			std::cout << "�������: "  << student.surname << ", ������ : " << student.group << std::endl;
			counter++;
		}
		
	}
	if (!counter)
	{
		std::cout << "�� �������� ������ ������ ����� �� �������\n";
	}
}

void printStudentsByGroup()
{
	int counter = 0;
	std::string group;
	std::cout << "������� ����� ������ �� �������� �� ������� ���������� �����." << std::endl; std::cin >> group;
	for (const auto& student : students)
	{
		if (student.group == group)
		{
				std::cout << "���: " << student.name << ", �������: " << student.surname << ", ������: " << student.grades << std::endl;
				counter++;
		}
	}
	if (!counter)
	{
		std::cout << "�� �������� ������ ������ ����� �� �������\n";
	}
}

void searchStudentBySurname()
{
	int counter = 0;
	std::string surname;
	std::cout << "������� ����� ������ �� �������� �� ������� ���������� �����." << std::endl; std::cin >> surname;
	for (const auto& student : students)
	{
		if (student.surname == surname)
		{
			std::cout << "���: " << student.name << ", ������: " << student.group << ", ������: " << student.grades << std::endl;
			counter++;
		}
	}
	if (!counter)
	{
		std::cout << "�� �������� ������ ������ ����� �� �������\n";
	}
}
