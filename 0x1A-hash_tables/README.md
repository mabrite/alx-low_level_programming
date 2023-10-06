# 0x1A Hash Tables

## Overview

Welcome to the 0x1A Hash Tables repository! This repository contains C programs that demonstrate the implementation and usage of hash tables. Hash tables are a fundamental data structure used in computer science for efficient data storage and retrieval.

## Table of Contents

- [Introduction](#introduction)
- [Files](#files)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

This repository includes several C programs that demonstrate different aspects of hash table implementation, including handling collisions, resizing, and efficient retrieval of data.

## Files

- `hash_tables.c`: Main implementation file containing the functions for hash table operations.
- `hash_tables.h`: Header file containing function prototypes and data structure definitions.
- `0-main.c`: Main program to test the hash table implementation with various test cases.
- `djb2.c`: Implementation of the DJB2 hash function, a popular hash function used in hash table implementations.

## Usage

To compile and run the programs in this repository, follow these steps:

1. **Clone the Repository:**
   ```
   git clone https://github.com/your-username/0x1A-hash_tables.git
   ```

2. **Compile the Programs:**
   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
   ```

3. **Run the Program:**
   ```
   ./hash_tables
   ```

4. **Explore the Output:**
   The program will run various test cases and output the results, demonstrating the functionality of the hash table implementation.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or create a pull request. Make sure to follow the [contributing guidelines](CONTRIBUTING.md) when submitting contributions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Happy coding!
