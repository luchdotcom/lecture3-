//
// Created by Lachezar on 26.3.2020 г..
////Задача. Изградете йерархия от класове Programmer и Employee.
//// Съставете конструктор Programmer(string name, double salary),
// който извиква базовия конструктор. След което съставете функция get_name,
// която връща името във формат "Hacker, Harry (Programmer)".
// Класовете да имат съответно set и get функции, конструктор с параметри с
//// подразбиращи се стойности, копиращ конструктор, предефиниране на операциите за
//// присвояване и операциите за изход в поток <<.

#ifndef H_WORK_LEKTURE_3_EMPLOYEE_H
#define H_WORK_LEKTURE_3_EMPLOYEE_H


class Employee {
    friend std::ostream& operator <<(std::ostream& , const Employee&);
public:
    Employee();
    Employee( char*, char*);
    Employee( const Employee&);
    Employee& operator=( const Employee &);
    ~Employee();

    int set_name(char*);
    int set_egn(char*);
  ///  int set_len();

    char * get_name()const ;
    char *get_egn()const ;
   // unsigned get_len()const ;

    int print()const ;

protected:
    int dell();
    int CpyEmployee( const Employee&);

private:
    char *name;
    char *egn;
   // unsigned len;


};

std::ostream& operator <<(std::ostream& , const Employee&);
#endif //H_WORK_LEKTURE_3_EMPLOYEE_H
