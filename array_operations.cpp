#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Function to print array elements
template <typename T>
void printArray(const vector<T>& arr) {
  cout << "Array elements: ";
  for (size_t i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function to demonstrate basic array operations
void demonstrateArrayOperations() {
  // Initialize a vector
  vector<int> numbers;
  numbers.push_back(5);
  numbers.push_back(2);
  numbers.push_back(8);
  numbers.push_back(1);
  numbers.push_back(9);

  cout << "\n=== Basic Array Operations ===\n";

  // Print original array
  printArray(numbers);

  // Add elements
  numbers.push_back(6);
  cout << "After adding 6: ";
  printArray(numbers);

  // Remove last element
  numbers.pop_back();
  cout << "After removing last element: ";
  printArray(numbers);

  // Access elements
  cout << "First element: " << numbers.front() << endl;
  cout << "Last element: " << numbers.back() << endl;
  cout << "Element at index 2: " << numbers[2] << endl;

  // Size operations
  cout << "Array size: " << numbers.size() << endl;

  // Sort array
  sort(numbers.begin(), numbers.end());
  cout << "After sorting: ";
  printArray(numbers);

  // Search for element
  int searchValue = 8;
  auto it = find(numbers.begin(), numbers.end(), searchValue);
  if (it != numbers.end()) {
    cout << "Found " << searchValue
         << " at position: " << (it - numbers.begin()) << endl;
  } else {
    cout << searchValue << " not found in array" << endl;
  }
}

// Function to demonstrate array manipulation
void demonstrateArrayManipulation() {
  cout << "\n=== Array Manipulation ===\n";

  // Initialize array
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);
  cout << "Original array: ";
  printArray(arr);

  // Insert element at specific position
  arr.insert(arr.begin() + 2, 10);
  cout << "After inserting 10 at position 2: ";
  printArray(arr);

  // Remove element at specific position
  arr.erase(arr.begin() + 3);
  cout << "After removing element at position 3: ";
  printArray(arr);

  // Reverse array
  reverse(arr.begin(), arr.end());
  cout << "After reversing: ";
  printArray(arr);

  // Fill part of array with specific value
  fill(arr.begin(), arr.begin() + 2, 0);
  cout << "After filling first two elements with 0: ";
  printArray(arr);
}

// Function to demonstrate 2D arrays
void demonstrate2DArray() {
  cout << "\n=== 2D Array Operations ===\n";

  // Create 2D vector (3x3 matrix)
  vector<vector<int> > matrix(3, vector<int>(3));
  matrix[0][0] = 1;
  matrix[0][1] = 2;
  matrix[0][2] = 3;
  matrix[1][0] = 4;
  matrix[1][1] = 5;
  matrix[1][2] = 6;
  matrix[2][0] = 7;
  matrix[2][1] = 8;
  matrix[2][2] = 9;

  // Print matrix
  cout << "Matrix:\n";
  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Access and modify elements
  matrix[1][1] = 0;
  cout << "\nAfter setting middle element to 0:\n";
  for (size_t i = 0; i < matrix.size(); i++) {
    for (size_t j = 0; j < matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  cout << "Array Operations Demo\n";
  cout << "--------------------\n";

  demonstrateArrayOperations();
  demonstrateArrayManipulation();
  demonstrate2DArray();

  return 0;
}