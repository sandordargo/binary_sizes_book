#include <memory>
#include <vector>

#include "car.h"
#include "offroader.h"
#include "van.h"
#include "roadster.h"

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