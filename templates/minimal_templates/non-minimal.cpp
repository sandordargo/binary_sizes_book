#include <vector>

class Wine {};
class Bottle {};
void storeTemporarily(Bottle bottle) {}
void moveToCellar(Bottle bottle) {}
void uploadToStore(Bottle bottle) {}

template <typename Callable>
void prepareWineForSell(Callable bottlerFunction, Wine wine) {
  auto bottles = bottlerFunction(wine);
  
  for (const auto& bottle: bottles) {
    storeTemporarily(bottle);
    moveToCellar(bottle);
    uploadToStore(bottle);
  }
}

int main() {
    auto bottleWithScrewlock = [](const Wine& wine) { return std::vector<Bottle>(10);};
    auto bottleWithCork = [](const Wine& wine) { return std::vector<Bottle>(10);};
    auto bottleWithSyntethicCork = [](const Wine& wine) { return std::vector<Bottle>(10);};
    auto bottleWithWirehood = [](const Wine& wine) { return std::vector<Bottle>(10);};

    Wine wine;
    prepareWineForSell(bottleWithScrewlock, wine);
    prepareWineForSell(bottleWithCork, wine);
    prepareWineForSell(bottleWithSyntethicCork, wine);
    prepareWineForSell(bottleWithWirehood, wine);   
}
