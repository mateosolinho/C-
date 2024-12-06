
# C++ Coding Guidelines

## 1. Naming Conventions
- **Classes and Structures**: Use **CamelCase** (capitalize the first letter of each word).
  ```cpp
  class MyClassName { };
  ```
- **Functions**: Use **camelCase** (lowercase the first word, capitalize the subsequent ones).
  ```cpp
  void calculateSum();
  ```
- **Variables**: Use descriptive names in **camelCase**.
  ```cpp
  int studentCount;
  ```
- **Constants and Macros**: Write in **ALL_CAPS_WITH_UNDERSCORES**.
  ```cpp
  const int MAX_SIZE = 100;
  #define BUFFER_SIZE 256
  ```

## 2. Indentation and Spacing
- Use **2 or 4 spaces** for indentation, but avoid tabs. Be consistent throughout the project.
  ```cpp
  if (x > 0) {
      cout << "Positive number";
  }
  ```
- Add spaces between operators and operands.
  ```cpp
  int sum = a + b; // Correct
  ```

## 3. Braces
- Open braces on the same line as the control statement (K&R style).
  ```cpp
  if (condition) {
      // Code block
  } else {
      // Another code block
  }
  ```

## 4. Comments
- Write comments to explain **why**, not **what** the code does.
- **Inline comments**: Use `//` for short notes.
- **Block comments**: Use `/* ... */` for longer explanations.
  ```cpp
  // Calculates the area of a circle
  double area = PI * radius * radius;
  ```

## 5. Use Constants and Types
- Prefer **`const`**, **`constexpr`**, or **`enum`** for constant values.
  ```cpp
  const int DAYS_IN_WEEK = 7;
  ```

## 6. Memory Management
- Use **smart pointers** (`std::unique_ptr` or `std::shared_ptr`) instead of raw pointers to avoid memory leaks.
  ```cpp
  std::unique_ptr<int> ptr = std::make_unique<int>(10);
  ```

## 7. Use of Namespaces
- Use **`namespace`** to avoid naming conflicts, but do not use `using namespace` in header files.
  ```cpp
  namespace MyApp {
      class MyClass { };
  }
  ```

## 8. Modularization
- Separate code into `.h` (declarations) and `.cpp` (implementations) files.
  ```cpp
  // my_class.h
  class MyClass {
      void printMessage();
  };
  
  // my_class.cpp
  void MyClass::printMessage() {
      cout << "Hello";
  }
  ```

## 9. Error Handling
- Use exceptions (`try-catch`) for error handling instead of return codes.
  ```cpp
  try {
      // Code that may throw an exception
  } catch (const std::exception& e) {
      cout << e.what();
  }
  ```

## 10. Modern C++ Practices
- Prefer modern features from C++11 and later standards:
  - Use **`auto`** for deducible types.
  - Use **`nullptr`** instead of `NULL`.
  - Use uniform initialization `{}`.
  ```cpp
  auto num = 10;
  int array[] = {1, 2, 3};
  ```

## Recommended Standards
- **C++ Core Guidelines**: Comprehensive best practices maintained by the C++ community and Bjarne Stroustrup. [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
- **Google C++ Style Guide**: Widely used industry guidelines. [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

By following these guidelines, your code will be easier to read, maintain, and share with other developers.
