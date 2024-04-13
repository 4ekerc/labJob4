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
		std::cout << " Введите номер меню \n";
		std::cout << "[1] Ввод с клавиатуры данных студентов;\n";
		std::cout << "[2] Вывод на дисплей фамилий и номеров групп всех студентов, имеющих оценки 4 и 5;\n";
		std::cout << "[3] Добавление студентов;\n";
		std::cout << "[4] Вывод на дисплей всех студентов по указаному номеру группы;\n";
		std::cout << "[5] Поиск студента по фамилии.\n";
		std::cout << "[0] Выход\n";

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
			std::cout << "Сколько людей вы хотите добавить? "; std::cin >> numStudents;
			inputData();
			for (const auto& student : students) {
				std::cout << "Имя: " << student.name << ", Фамилия: " << student.surname << ", Группа: " << student.group << std::endl;
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
			std::cout << "Сколько людей вы хотите добавить? "; std::cin >> numStudents;
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
		default: system("cls"); std::cout << "Неккоректный ввод пункта меню\n";
			break;
		}
	}
}


