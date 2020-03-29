//
// Created by Lachezar on 26.3.2020 г..
//Задача. Изградете йерархия от класове Programmer и Employee.
//// Съставете конструктор Programmer(string name, double salary),
// който извиква базовия конструктор. След което съставете функция get_name,
// която връща името във формат "Hacker, Harry (Programmer)".
// Класовете да имат съответно set и get функции, конструктор с параметри с
// подразбиращи се стойности, копиращ конструктор, предефиниране на операциите за
// присвояване и операциите за изход в поток <<.


#ifndef H_WORK_LEKTURE_3_PROGRAMMER_H
#define H_WORK_LEKTURE_3_PROGRAMMER_H

#include <iostream>
#include "Employee.h"

class Programmer :public Employee{
public:
    Programmer();
    Programmer(char *,char *, std::string, double);
    Programmer( const Programmer& );
    Programmer& operator=(const Programmer &) ;
    ~Programmer();

    int set_title(std::string);
    int set_salary();

    std::string get_title()const ;
    double get_salary()const ;

private:
    std::string title;
    double salary;
};
std::ostream& operator <<(std::ostream&, const Programmer&);

#endif //H_WORK_LEKTURE_3_PROGRAMMER_H
