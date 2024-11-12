
namespace MyClass {
class Base {
public:
    Base() {};
    virtual ~Base() {};

    virtual bool func(int a, int b) = 0;
};

class Derived : public Base {
public:
    Derived() {};
    ~Derived() {};

    bool func(int a, int b) override;
private:

};

}
