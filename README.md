# MyVector — Custom C++ Dynamic Array

This is a beginner-to-intermediate C++ project where I implemented a simplified version of the C++ Standard Library's `std::vector`.

The goal was to learn and apply core C++ fundamentals:
- Dynamic memory management (`new`, `delete`)
- Class structure with headers and implementation files
- Constructors and destructors
- Encapsulation and method design
- Manual resizing of arrays
- Makefile-based compilation

---

## Project Overview

This project defines a custom `MyVector` class that:
- Stores integers in a dynamic array
- Grows automatically when it runs out of space
- Supports pushing new elements
- Returns elements by index
- Tracks the current size

---

## Project Structure

```
cpp-vector/
├── main.cpp             # Tests and runs the class
├── MyVector.h           # Class declaration (interface)
├── MyVector.cpp         # Class definition (implementation)
├── Makefile             # Compile instructions
└── README.md            # You're reading this
```

---

## Features Implemented

- [x] Custom constructor and destructor
- [x] Private memory managed with `new` and `delete[]`
- [x] `push(int)` with dynamic resizing (doubling capacity)
- [x] `get(int)` with bounds checking
- [x] `size()` returns the number of stored elements
- [x] Testing through `main.cpp`
- [ ] (optional) `pop()`, `clear()`, `operator[]` — coming soon

---

## Sample Output

When running `main.cpp`:

```
v[0] = 10
v[1] = 20
v[2] = 30
...
```

---

## How to Compile and Run

### Using Makefile

```bash
make         # Compiles the project
./main       # Runs the program
make clean   # Deletes the compiled binary
```

### Or manually (without Makefile):

```bash
g++ -o main main.cpp MyVector.cpp
./main
```
