#include <iostream.h>
#include <conio.h>

class first {
public:
    void show() {
        cout << "Class first." << endl;
    }
};

class second {
public:
    first f;

    second() {
        f.show();
    }
};

void main() {
    clrscr();
    second x;
    getch(); 
}
