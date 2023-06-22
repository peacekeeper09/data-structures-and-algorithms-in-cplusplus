#include <iostream>
using namespace std;

struct {
    int length;
    int breadth;
}rect1;

struct rectangle {
    int l;
    int b;
}rect2;

int main() {
    rect1.length = 10;
    rect1.length = 15;

    rect2.l = 15;
    rect2.b = 20;

    rectangle rect3 = {12,3};
    struct rectangle rect4 = {40,25};

}
