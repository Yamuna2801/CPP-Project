#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student {
    public:
    int roll_no;
    char name[10];

    /*//inside the class
    void display() {
	cout<<"Name: "<<name<<endl;
	cout<<"roll_no: "<<roll_no<<endl;
    }*/
    void display();               //Function declaration
};
    //Outside the class
void Student::display() {        //Function definition
    cout<<"Name: "<<name<<endl;
    cout<<"roll_no: "<<roll_no<<endl;
}

int main() {
    clrscr();

    Student yam;
    yam.roll_no = 1;
    strcpy(yam.name, "Yamuna");

    yam.display();

    getch();
    return 0;
}
