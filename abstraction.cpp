#include<iostream.h>
#include<conio.h>

class Remote {
    private:
    void TurnOn() {
      cout<<"Turning On"<<endl;
    }
    public:
    void on() {
      TurnOn();
      cout<<"Remote On"<<endl;
    }
};

int main() {
    clrscr();

    Remote r;
    r.on();

    getch();
    return 0;
}
/*
Abstraction - hiding unwanted
  - Access Specifiers
*/