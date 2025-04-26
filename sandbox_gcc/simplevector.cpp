#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
T max_value(const T& a, const T& b) {
  return (a > b) ? a : b;
}

template <typename T>
void print_vector(const std::vector<T>& vec) {
  std::cout << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec[i];
    if (i < vec.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}


int main() {
  // Example usage with different data types:

  int int_max = max_value(5, 10);
  std::cout << "Max of 5 and 10 (int): " << int_max << std::endl;

  double double_max = max_value(3.14, 2.71);
  std::cout << "Max of 3.14 and 2.71 (double): " << double_max << std::endl;

  std::string string_max = max_value(std::string("hello"), std::string("world"));
  std::cout << "Max of \"hello\" and \"world\" (string): " << string_max << std::endl;


  // Example usage with a vector:
  std::vector<int> int_vec = {1, 5, 2, 8, 3};
  print_vector(int_vec);

  std::vector<std::string> string_vec = {"apple", "banana", "orange"};
  print_vector(string_vec);

  return 0;
}
