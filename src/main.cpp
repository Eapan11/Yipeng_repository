#include "source.h"
#include <iostream>

class CutinReasoning {
public:
    CutinReasoning() = default;
    CutinReasoning(const double &speed, const double &currRadius) : currSpeed(speed), currRadius(currRadius) {};
    void InitData(const double &speed, const double &currRadius);

    const float GetAcc()
    {
        return currSpeed * currSpeed / currRadius;
    }

    ~CutinReasoning() {}
private:
    double currSpeed {0.0};
    double currRadius {1.0};
};

void CutinReasoning::InitData(const double &speed, const double &currRadius)
{
    currSpeed = speed;
    this->currRadius = currRadius;
}

int main()
{
    // CutinReasoning car;
    // car.InitData(2.0, 3.0);
    // std::cout << "-----Testing-----" << std::endl;
    // std::cout << car.GetAcc() << std::endl;
    MyClass::Base* base = new MyClass::Derived();
    bool flag = base->func(3, 2);
    std::cout << flag << std::endl;
    return 0;
} 