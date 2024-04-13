#include "header.h"

std::vector<STUDENT> students;

int numStudents = 0;

STUDENT human;
void inputData()
{
	for (size_t i = 0; i < numStudents; i++)
	{
		std::cout << "Введите данные для студента номер " << i + 1 << ":" << std::endl;
		std::cout << "Имя: "; std::cin >> human.name;
		std::cout << "Фамилия: "; std::cin >> human.surname;
		std::cout << "Группа: "; std::cin >> human.group;
		std::cout << "Оценки: "; std::cin >> human.grades;
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
			std::cout << "Фамилия: "  << student.surname << ", Группа : " << student.group << std::endl;
			counter++;
		}
		
	}
	if (!counter)
	{
		std::cout << "По заданным данным никого найти не удалось\n";
	}
}

void printStudentsByGroup()
{
	int counter = 0;
	std::string group;
	std::cout << "Введите номер группы по которому вы желаете произвести поиск." << std::endl; std::cin >> group;
	for (const auto& student : students)
	{
		if (student.group == group)
		{
				std::cout << "Имя: " << student.name << ", Фамилия: " << student.surname << ", Оценки: " << student.grades << std::endl;
				counter++;
		}
	}
	if (!counter)
	{
		std::cout << "По заданным данным никого найти не удалось\n";
	}
}

void searchStudentBySurname()
{
	int counter = 0;
	std::string surname;
	std::cout << "Введите номер группы по которому вы желаете произвести поиск." << std::endl; std::cin >> surname;
	for (const auto& student : students)
	{
		if (student.surname == surname)
		{
			std::cout << "Имя: " << student.name << ", Группа: " << student.group << ", Оценки: " << student.grades << std::endl;
			counter++;
		}
	}
	if (!counter)
	{
		std::cout << "По заданным данным никого найти не удалось\n";
	}
}
