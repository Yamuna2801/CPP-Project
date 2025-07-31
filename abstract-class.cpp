#include<iostream.h>
#include<conio.h>

class Remote {
    public:
    virtual void on() = 0;
};

class SamsungTV : public Remote {
    public:
    void on() {
      cout<<"This is Samsung TV"<<endl;
    }
};

class LGTV : public Remote {
    public:
    void on() {
      cout<<"This is LG TV"<<endl;
    }
};

int main() {
    clrscr();

    Remote *r = new LGTV();
    r->on();

    r = new SamsungTV();
    r->on();

    getch();
    return 0;
}