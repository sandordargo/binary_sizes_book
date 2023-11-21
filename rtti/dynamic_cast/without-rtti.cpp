// using no RTTI, no dynamic casts
#include <iostream>
#include <memory>
#include <vector>


class Car {
public:
  virtual ~Car() = default;
  virtual void doSomeFun() = 0;
};

class OffRoader : public Car {
public:
  void doSomeFun() override {
    std::cout << "use all wheel drive on OffRoader\n";
  }
};

class Van : public Car {
public:
  void doSomeFun() override {
    std::cout << "attach third seatrow in a van\n";
  }
};

class Roadster : public Car {
public:
  void doSomeFun() override {
    std::cout << "remove roadster's roof\n";
  }
};

int main() {
    std::vector<std::unique_ptr<Car>> myCars;
    myCars.push_back(std::make_unique<OffRoader>());
    myCars.push_back(std::make_unique<Van>());
    myCars.push_back(std::make_unique<Roadster>());
    
    for (auto& car: myCars) {
      car->doSomeFun();
    }
    
    return 0;
}
