//
// Created by Lachezar on 26.3.2020 г..
//

#include "Programmer.h"
Programmer::Programmer():Employee(),title("Hacker"),salary (0){
    //Employee();//  moje li taka ?????
}
Programmer::Programmer(char *name, char * egn, std::string title, double salary):Employee(name,egn),title(title),salary(salary){}
Programmer::Programmer( const Programmer&rhs ):Employee(rhs){
        title=rhs.title;
        salary=rhs.salary;
}

Programmer &Programmer::operator=( const Programmer & rhs ) {
    if (this!=&rhs ) {
        Employee::operator=(rhs);
        title=rhs.title;
        salary= rhs.salary;
    }
    return *this;
}

Programmer::~Programmer( ) {}

int Programmer::set_title(std::string n ) {
    std::cin>> n;
    return 0;
}

int Programmer::set_salary() {
    return 0;
}

std::string Programmer::get_title() const {
    return title;
}

double Programmer::get_salary() const {
    return salary;
}

std::ostream& operator <<(std::ostream& out, const Programmer& rhs){
    out<<"name"<<rhs.get_name()<<"\n"<<"egn "<<rhs.get_egn()<<"\n";
    out<<"Title "<<rhs.get_title()<<"\n"<<"Salary "<<rhs.get_salary()<<"\n";
    return out;
}