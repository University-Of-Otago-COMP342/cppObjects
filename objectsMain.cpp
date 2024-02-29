#include <iostream>
#include <memory>
#include <vector>

#include "Object.h"
#include "Derived.h"

int main(int argc, char *argv[]) {

    Object obj;
    Derived der;
    Object& ref = der;
    Object* ptr = new Derived();
    obj.whatAmI();
    der.whatAmI();
    ref.whatAmI();
    ptr->whatAmI();
    delete ptr;

    return 0;
}

