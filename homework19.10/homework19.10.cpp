#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

// Базовый класс Человек
class Human {
protected:
    string name_;
    int age_;

public:
    Human(string name, int age) : name_(name), age_(age) {}

    // Метод для вывода информации о человеке
    void PrintInformation() {
        cout << "Имя: " << name_ << endl;
        cout << "Возраст: " << age_ << endl;
    }
};

// Наследный класс Житель дома
class Resident : public Human {
private:
    int NumKV_;

public:
    Resident(string name, int age, int NumKV) : Human(name, age), NumKV_(NumKV) {}

    // Метод для вывода информации о жителе дома
    void PrintInformation()  {
        Human::PrintInformation();
        cout << "Номер квартиры: " << NumKV_ << endl;
    }

    // Метод для оплаты коммунальных услуг
    void toPay() {
        cout << name_ << " оплатил коммунальные услуги." << endl;
    }
};

// Наследный класс Управляющий домом
class Manager : public Human {
private:
    int numberOfApartments_;

public:
    Manager(string name, int age, int numberOfApartments) : Human(name, age), numberOfApartments_(numberOfApartments) {}

    // Метод для вывода информации об управляющем домом
    void PrintInformation() {
        Human::PrintInformation();
        cout << "Количество квартир в доме: " << numberOfApartments_ << endl;
    }

    // Метод для организации собрания жильцов
    void OrganizeMeeting() {
        cout << name_ << " организовал собрание жильцов." << endl;
    }
};

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создание объекта класса ЖительДома
    Resident житель("Иван", 30, 15);

    // Создание объекта класса УправляющийДомом
    Manager управляющий("Петр", 45, 100);

    // Вывод информации о жителе дома
    cout << "Информация о жителе дома:" << endl;
    житель.PrintInformation();

    // Вывод информации об управляющем домом
    cout << "\nИнформация об управляющем домом:" << endl;
    управляющий.PrintInformation();

    // Оплата коммунальных услуг жителем дома
    житель.toPay();

    // Организация собрания жильцов управляющим домом
    управляющий.OrganizeMeeting();

    system("pause");
    return 0;
}
