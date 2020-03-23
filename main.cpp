#include <iostream>
#include<cstring>
using namespace std;
#include "person.h"
int main() {

person p;

    int i = 0,n=0,x;
    cout<<" input number of persons"<<endl;
cin>>x;
while(n!=x){
    cout << "input 1(information by default)" << endl << "input 2(information about men)" << endl << "input 3 for copy" << endl;
    cin >> i;

    if (i == 1) {
        person p1;
        p1.print();
    }

    if (i == 2) {
        int year;
        char name[100];
        char surname[100];

        cout << "Enter the age: ";
        cin >> year;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  sername: ";
        cin >> surname;
        cout << "\n";

        person p2(year, name, surname);
        cout << p2.getName() << " " << p2.getSurname() << " " << p2.getYear() << endl;
    }

    if(i == 3) {

        person p3(10, "Bob", "Potter");
        p3.print();
        cout << endl;
        person p4=p3;

        p4.print();
    }
    n++;
}
    return 0;

}

