#include <iostream>
#include <fstream>
#include "readfile.h"
//#include "createlist.h"
//using namespace std;

// Задаем константы
#define MAX 80 // максимальное количество символов в файле

// --- !Нужно прописать путь до файла для Windows. Сейчас стоит путь для linux. Он не будет работать ---
#define MAIN_FILE_NAME "/home/apheyhys/CLionProjects/task3_cpp/mainlist.txt" // адрес основного текста
#define SEARCH_SYMBOL "/home/apheyhys/CLionProjects/task3_cpp/search_symbol.txt" // искомый символ
#define ADDED_SYMBOL "/home/apheyhys/CLionProjects/task3_cpp/added_symbol.txt" // символ, который нужно добавить
#define TOTAL_STRING "/home/apheyhys/CLionProjects/task3_cpp/totalstring.txt" // итоговый файл

// Объявляем структуру данных в которой будем хранить символьное значение и счетчик
struct Node{
    char value;
    int count;
    struct Node *next;
};

// Создаем новый список и заполняем его данными
struct Node* create_list(const char *N)
{
    std::cout << "YES" << std::endl;
    Node *symbols = new Node;
//    symbols=(Node *)calloc(80,sizeof(Node));
//    Node *p_begin = nullptr;
//    struct Node *p = nullptr;
    // Выделяем память
//    p_begin = (Node *)malloc(sizeof(Node));
//    p = p_begin;
//    p->next = nullptr;
//    p->count = 0;

//    printf("Исходная строка: ");
    for(char k = 1; k < *N; k++) {
//        std::cout << k << std::endl;
//        symbols[k].value << N[k];
//        symbols[k].count << k;
//        std::cout << N[k];
//        std::cout << count;
//        symbols = symbols->next;
        symbols->count = k-1;
        symbols->value = N[k-1];
//        symbols = symbols->next;
//        symbols->next = nullptr;

//        p->count = k-1;
//        p->value = N[k-1];
//        std::cout << k << std::endl;
//        p->next = (Node *)malloc(sizeof(Node));
//        // Следующий элемент
//        p = p->next;
//        printf("%c", N[k-1]); // Сразу печатаем символы, чтобы не создавать отдельную функцию для печати
//        // Заполняем новую структуру данными
//        p->next = nullptr;
    }
    std::cout << std::endl;
//    for(int i = 0; i < 79; i++) {
//       symbols = symbols->next;
//        std::cout << symbols[i].value << std::endl;
//    }
    return symbols;
}

int main() {
    std::cout << "Hello, Worlgfd!" << std::endl;
    std::ifstream file_input(MAIN_FILE_NAME);


    std::ofstream file_output(TOTAL_STRING);
    file_output << "Романова Ольга Валерьевна. Группа 1302. Начало: 20.03.2022, Конец: 24.05.2022. \n"
                   "Формулировка: Вставить элемент после первого элемента, имеющего заданное значение.\n";


    char * main_file = readfile(MAIN_FILE_NAME);
    std::cout << "Я здесь" << std::endl;
    for(char k = 0; k < *main_file; k++) {
//        std::cout << k;
        std::cout << main_file[k];
    }

    std::cout << std::endl;

    create_list(main_file);



//    std::cout << main_file << std::endl;

    file_input.close();

    file_output.close();
    return 0;
}

