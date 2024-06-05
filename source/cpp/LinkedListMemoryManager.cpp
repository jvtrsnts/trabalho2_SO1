//
// Created by gabri on 04/06/2024.
//

// LinkedListMemoryManager.cpp
#include "../headers/LinkedListMemoryManager.h"
#include <iostream>

void LinkedListMemoryManager::allocate(int size) {
    // Implement the allocate method
      // prints the size for now
    std::cout << "Allocating " << size << " bytes" << std::endl;
}

void LinkedListMemoryManager::deallocate(int index) {
    // Implement the deallocate method
        // prints the index for now
    std::cout << "Deallocating block at index " << index << std::endl;
}

void LinkedListMemoryManager::printMemory() const {
    // Implement the printMemory method
    std::cout << "Printing memory" << std::endl;
}

int LinkedListMemoryManager::firstFit(int size) {
    // finds the first sequence of blocks that are empty and have enough space to allocate the size
    // and then fills the blocks with 1 and returns the index of the first block
    std::cout << "First fit" << std::endl;
    return 0;
}

int LinkedListMemoryManager::nextFit(int size) {
    // finds the next sequence of blocks that are empty and have enough space to allocate the size
    // and then fills the blocks with 1 and returns the index of the first block
    std::cout << "Next fit" << std::endl;
    return 0;
}