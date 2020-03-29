//
// Created by Lachezar on 26.3.2020 г..
//

#include <cstring>
#include <iostream>
#include "Employee.h"

Employee::Employee( ):name( ""),egn("") {

}

Employee::Employee( char * name, char* egn ) {
   this-> name=new char [strlen(name)+1];
   strcpy(this->name,name);
   this->egn=new char [strlen(egn)+1];
   strcpy(this->egn,egn);

}
Employee::Employee( const Employee & rhs) {
    if (this!= nullptr ) {
        dell();
        CpyEmployee(rhs);
       std::cout<<"~called";
    }

}
Employee& Employee::operator=( const Employee &rhs ) {
    if (this!= &rhs ) {
        delete name;
        delete egn;
        CpyEmployee(rhs);
    }

    return *this;
}

Employee::~Employee( ) {
   dell();

}

int Employee::set_name(char* name ) {
    for ( int i = 0; i < strlen(name)+1; ++ i ) {
        this->name[i]=name[i];
    }
    return 0;
}

int Employee::dell( ) {
    delete name;
    delete egn;
    return 0;
}

int Employee::set_egn(char* egn ) {
    for ( int i = 0; i < 11; ++ i ) {
        this->egn[i]=egn[i];
    }
    return 0;
}

int Employee::CpyEmployee(const Employee& rhs ) {
    name=new char[strlen(rhs.name)+1];
    strcpy(name,rhs.name);
    egn= new char[strlen(rhs.egn)+1];
    strcpy(egn,rhs.egn);
    return 0;
}

char *Employee::get_name( ) const {
    return name;
}
char *Employee::get_egn( ) const {
    return egn;
}
/*
unsigned Employee::get_len( ) const {
    return len;
}*/


int Employee::print( ) const {
    std::cout<<"name"<<name<<"\n";
    std::cout<<"egn"<<egn<<"\n";
    return 0;
}



std::ostream &operator<<( std::ostream & out, const Employee & rhs) {
    out<<"name is : "<<rhs.name<<"\n"
    << "egn is :"<<rhs.egn<<"\n";

    return out;
}



