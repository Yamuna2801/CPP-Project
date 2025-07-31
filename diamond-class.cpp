#include<iostream.h>
#include<conio.h>

class A {
    public:
    void show() {
     cout<<"Show"<<endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public C, public B {
};

int main() {
    clrscr();

    D d;
    d.show();

    getch();
    return 0;
}