#include <memory>
#include <vector>

#include "car.h"
#include "offroader.h"
#include "van.h"
#include "roadster.h"

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