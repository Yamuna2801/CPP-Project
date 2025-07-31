#include<iostream.h>
#include<conio.h>
#include<string.h>

class Fruits {
    public:
    char name[10];
    int noOfFruits;
    void display() {
     cout<<"Constructor for display"<<endl;
    }
};

class Dryfruits: public Fruits {
    public:
    char name[10];
    int noOfFruits;
};

int main() {
    clrscr();

    Fruits app;
    strcpy(app.name, "Apple");
    app.noOfFruits = 2;

    Dryfruits myDryfruits;
    myDryfruits.display();

    cout<<"Fruit Name: "<<app.name<<endl;
    cout<<"Number of fruits: "<<app.noOfFruits<<endl;

    getch();
    return 0;
}