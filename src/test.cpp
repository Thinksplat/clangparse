#include <iostream>
#include "test.h"

int Test::test() {
    return 3;
}

int main(int , char *[]) {
    Test t;
    std::cout << t.test() << std::endl;
}
