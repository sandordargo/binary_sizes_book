#include <functional>
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::function<int(int)>> callback_registry;

void register_callback(std::function<int (int)> callback) {
    callback_registry.push_back(callback);
}

void invoke_callbacks(int value) {
    // Retrieve callbacks from the registry and invoke them
    for (const auto& callback : callback_registry) {
        int result = callback(value);
        std::cout << "Callback result: " << result << std::endl;
    }
}

int main() {
    std::function<int (int)> cb {
        [i = std::make_shared<int>(42)] (const int val) {
            return val + *i;
        }
    };

    register_callback(cb);
    invoke_callbacks(51);
}
