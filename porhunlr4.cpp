#include <iostream>
using namespace std;

// Глобальная переменная для хранения символа
char currentChar = '\0';
bool charEntered = false;

// Функция для ввода символа
void inputChar() {
   
}

// Функция для вывода предыдущего символа
void printPreviousChar() {
   
}

// Функция для вывода следующего символа
void printNextChar() {
  
}

// Функция для отображения меню
void displayMenu() {
    cout << "\nМеню работы с символами ASCII:\n";
    cout << "1. Ввести символ\n";
    cout << "2. Показать предыдущий символ\n";
    cout << "3. Показать следующий символ\n";
    cout << "0. Выход\n";
    cout << "Выберите пункт меню: ";
}

int main() {
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                inputChar();
                break;
            case 2:
                printPreviousChar();
                break;
            case 3:
                printNextChar();
                break;
            case 0:
                cout << "Выход из программы...\n";
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, выберите пункт от 0 до 3.\n";
        }
    } while (choice != 0);

    return 0;
}