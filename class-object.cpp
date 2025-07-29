#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student {
    public:          //Access Specifier
    int roll_no;     //Attributes
    char name[10];   //Attributes
};

int main() {
    clrscr();

    Student yam;      //Object
    yam.roll_no = 1;
    strcpy(yam.name, "Yamuna");

    cout<<yam.name<<endl;
    cout<<yam.roll_no<<endl;

    getch();
    return 0;
}