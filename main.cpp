#include <iostream>
#include <string>

int main() {
    std::string list[10];
    int arr[10], count[10], n{10}, j;

    for (int i = 0; i < 10; i++) {
        std::getline(std::cin, list[i]);
    }

    for(int i = 0; i < 10; i++) {
        std::cout << list[i] << " "; 
    }

    for(j = 1; j < n; ++j) {
        if(arr[0] < arr[j]) {
            arr[0] = arr[j];
        }
    }

    for(int i = 0; i < 10; i++) {
        if(list[i].length() == arr[0]) {
            std::cout << "Longest string in array: " << list[i] << std::endl;
        }
    }

    return 0;
}
