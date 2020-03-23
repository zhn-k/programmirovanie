#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<iostream>
#include<cstring>
class person {

private:
    int year;
    char *name;
    char *surname;
public:
    person();
    person(int year, char *name, char *surname);

person&operator=(person person0);

    void setYear(int);
    void setName(char *);
    void setSurname(char *);
    int getYear();
    char *getName();
    char *getSurname();
    void print();
    ~person();
};
#endif // PERSON_H_INCLUDED
