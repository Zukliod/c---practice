#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base show\n"; }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived show\n"; }
};

// Additional classes to show non-virtual behavior
class NonVirtualBase {
public:
    void show() { std::cout << "NonVirtualBase show\n"; }
};

class NonVirtualDerived : public NonVirtualBase {
public:
    void show() { std::cout << "NonVirtualDerived show\n"; }
};

int main() {
    std::cout << "Virtual dispatch:\n";
    Base* vptr = new Derived();
    vptr->show(); // Calls Derived::show
    delete vptr;

    std::cout << "\nNon-virtual (static) dispatch:\n";
    NonVirtualBase* nvptr = new NonVirtualDerived();
    nvptr->show(); // Calls NonVirtualBase::show (static binding)
    delete nvptr;
    return 0;
}