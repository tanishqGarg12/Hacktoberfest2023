//this is my code to remove a element from the array

#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    
    int elementToRemove = 3;  // Element you want to remove
    
    // Find the element in the vector
    auto it = std::find(myVector.begin(), myVector.end(), elementToRemove);

    if (it != myVector.end()) {
        // Remove the element if found
        myVector.erase(it);
        
        // Print the modified vector
        for (int element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Element not found in the vector." << std::endl;
    }

    return 0;
}
