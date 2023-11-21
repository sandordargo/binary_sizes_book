#include <functional>
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::move_only_function<int(int)>> callback_registry;

void register_callback(std::move_only_function<int (int)> callback) {
    callback_registry.push_back(std::move(callback));
}

void invoke_callbacks(int value) {
    // Retrieve callbacks from the registry and invoke them
    for (auto&& callback : callback_registry) {
        int result = callback(value);
        std::cout << "Callback result: " << result << std::endl;
    }
}

int main() {
    register_callback([i = std::make_unique<int>(42)] (const int val) {
            return val + *i;
        });
    invoke_callbacks(51);
}
