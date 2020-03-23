
#include "person.h"
using namespace std;
person::person():person(0,"none","none"){}

person::person( int year,  char *name,  char *surname)
{
  this->name = 0;
    this->surname = 0;

  setName(name);
  setSurname(surname);
  setYear(year);
}
void person::print()
{
    cout << "year = " << year << "\nname = "<< name << "\nsurname = " << surname << "\n";
}
person& person::operator =(person person0)
{
    this-> year =person0.year;
    this-> name =person0.name;
    this-> surname =person0.surname;
}
void person::setYear(int year)
{
    this->year=year;
}
void person::setName(char *name)
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void person::setSurname(char *surname)
{
   delete [] this->surname;
   size_t len=strlen(surname);
   this-> surname = new char[len+1];
   strcpy(this->surname, surname);
}
 char *person::getSurname()
    {
       return surname;
    }

char *person::getName()
    {
        return name;
    }
int person::getYear()
    {
        return year;
    }

    person::~person()
    {
        delete [] name;
        delete [] surname;
    }
