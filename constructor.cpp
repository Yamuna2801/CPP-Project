#include<iostream.h>
#include<conio.h>
#include<string.h>

class Fruits {
    public:
    char name[10];
    int number;

    Fruits() {
    cout<<"Constructor for fruits"<<endl;
    }
};

int main() {
    clrscr();

    Fruits app;
    strcpy(app.name, "Apple");
    app.number = 1;

    Fruits ban;
    strcpy(ban.name, "Banana");
    ban.number = 2;
    cout<<app.name<<endl<<app.number<<endl;
    cout<<ban.name<<endl<<ban.number<<endl;

    getch();
    return 0;
}

/*
Construtors
  - Special function
  - called when object is created
  - no return type

  - default constructor
  -parameterised constructor
*/