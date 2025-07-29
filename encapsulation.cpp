#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student {
    public:
    char name[10];
    int roll_no;

    Student(char* name, int roll_no) {
      strcpy(this->name, name);
      this->roll_no = roll_no;
    }

    void display() {
      cout<<"Name: "<<name<<endl;
      cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main() {
    clrscr();

    Student yam("Yamuna", 28);
    yam.display();

    getch();
    return 0;
}

/*
  - Encapsulation
    - Data/Attributes & Function/Method - single entity - class
    - restrict access of the object - attributes
*/