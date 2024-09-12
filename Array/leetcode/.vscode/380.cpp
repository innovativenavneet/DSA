#include <unordered_map>
#include <vector>
#include <cstdlib> // for rand() function
#include <ctime>   // for seeding random number generator

class RandomizedSet {
private:
    std::unordered_map<int, int> val_to_index; // HashMap to store value -> index mapping
    std::vector<int> values;                   // Vector to store the actual values

public:
    RandomizedSet() {
        // Seed the random number generator
        std::srand(std::time(nullptr));
    }

    bool insert(int val) {
        if (val_to_index.find(val) != val_to_index.end()) { // If value already exists, return false
            return false;
        }
        values.push_back(val);                    // Append the value to the end of the vector
        val_to_index[val] = values.size() - 1;    // Store its index in the HashMap
        return true;
    }

    bool remove(int val) {
        auto it = val_to_index.find(val);
        if (it == val_to_index.end()) {           // If value doesn't exist, return false
            return false;
        }
        int index = it->second;                   // Get the index of the value to be removed
        int last_val = values.back();             // Get the last value in the vector
        values[index] = last_val;                 // Replace the value to be removed with the last value
        val_to_index[last_val] = index;           // Update the index of the last value in the HashMap
        values.pop_back();                        // Remove the last element from the vector
        val_to_index.erase(it);                   // Delete the value from the HashMap
        return true;
    }

    int getRandom() {
        return values[std::rand() % values.size()]; // Return a random element from the vector
    }
};
