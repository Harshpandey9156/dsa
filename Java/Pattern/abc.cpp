#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> alternateSort(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end()); // Step 2: Sort the list
    std::vector<int> result;
    for (int i = 0; i < arr.size(); i += 2) { // Step 3: Traverse and add alternate elements
        result.push_back(arr[i]);
    }
    return result;
}

int main() {
    // Input for arr
    int arr_size;
    
    std::cin >> arr_size;
    std::vector<int> arr;
    for (int idx = 0; idx < arr_size; idx++) {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }

    // Output
    std::vector<int> result = alternateSort(arr);
    for (int idx = 0; idx < result.size() - 1; idx++) {
        std::cout << result[idx] << " ";
    }
    std::cout << result[result.size() - 1];

    return 0;
}
