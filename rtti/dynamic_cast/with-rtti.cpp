// Ugly RTTI way using dynamic casts
#include <iostream>
#include <memory>
#include <vector>


class Car {
public:
  virtual ~Car() = default;
};

class OffRoader : public Car {
public:
  void turnOnAllWheelDrive() {
    std::cout << "use all wheel drive on OffRoader\n";
  }
};

class Van : public Car {
public:
  void attachThirdSeatRow() {
    std::cout << "attach third seatrow in a van\n";
  }
};

class Roadster : public Car {
public:
  void removeRoof() {
    std::cout << "remove roadster's roof\n";
  }
};

void prepareCarForFun(Car* car) {
    OffRoader* offroader = dynamic_cast<OffRoader*>(car);
    if (offroader) {
      offroader->turnOnAllWheelDrive();
    }
    
    Van* van = dynamic_cast<Van*>(car);
    if (van) {
      van->attachThirdSeatRow();
    }
    
    Roadster* roadster = dynamic_cast<Roadster*>(car);
    if (roadster) {
      roadster->removeRoof();
    }
}

int main() {
    std::vector<std::unique_ptr<Car>> myCars;
    myCars.push_back(std::make_unique<OffRoader>());
    myCars.push_back(std::make_unique<Van>());
    myCars.push_back(std::make_unique<Roadster>());
    
    for (auto& car: myCars) {
      prepareCarForFun(car.get());
    }
    
    return 0;
}
