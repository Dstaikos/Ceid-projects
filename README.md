# CEID – First-Semester C Programming Exercises

![C](https://img.shields.io/badge/language-C-00599C)
![University of Patras](https://img.shields.io/badge/University-Patras-blue)
![Exercises](https://img.shields.io/badge/exercises-24-green)
![Lab Sessions](https://img.shields.io/badge/lab_sessions-4-orange)

A comprehensive collection of **C programming exercises** completed during the first semester of the Computer Engineering and Informatics Department (CEID) at the **University of Patras**. This repository demonstrates progressive learning through three distinct laboratory sessions, covering fundamental programming concepts from basic control structures to advanced data manipulation.

---

## 👨💻 Author
**Dstaikos** – First-year CEID student  
*Academic Year: 2024-2025*

---

## 📊 Repository Overview

| **Lab Session** | **Exercises** | **Key Topics** | **Complexity** |
|-----------------|---------------|----------------|----------------|
| Lab 1 | 6 + 4 functions | Basic I/O, Conditionals, Loops | Beginner |
| Lab 2 | 7 exercises | Advanced Loops, Functions, Algorithms | Intermediate |
| Lab 3 | 8 exercises | Arrays, Strings, Dynamic Memory | Advanced |
| Lab 4 | 3 exercises | File I/O, Control Structures, Basic Algorithms | Intermediate |

**Total:** 24 exercises across 4 progressive laboratory sessions

---

## 🗂️ Repository Structure

```
Ceid-projects/
├── Lab-Exercises-1/                    # Fundamentals & Functions
│   ├── Lab-Exercises-Using-Functions-1/
│   │   ├── func1.c                     # Triangle validation (function)
│   │   ├── func2.c                     # Time calculation (function)
│   │   ├── func3.c                     # Order cost calculator (function)
│   │   └── func4.c                     # Number reversal (function)
│   ├── excercise1.c                    # Triangle inequality theorem
│   ├── excercise2.c                    # Time until midnight
│   ├── excercise3.c                    # Order pricing with discounts
│   ├── excercise4.c                    # 5-digit number reversal
│   ├── excercise5.c                    # Date calculation (+50 days)
│   ├── excercise6.c                    # MAC address type detection
│   ├── analysis.txt                    # Detailed Greek analysis
│   └── ΆΣΚΗΣΗ 1.pdf                   # Assignment specifications
│
├── Lab-Exercises-2/                    # Loops & Algorithms
│   ├── exercise1.c                     # Number grid (1-100)
│   ├── exercise2.c                     # ASCII character table
│   ├── exercise3.c                     # Population growth calculator
│   ├── exercise4.c                     # Mathematical series sum
│   ├── exercise5.c                     # Prime number checker
│   ├── exercise6.c                     # Consecutive number frequency
│   ├── exercise7.c                     # Statistical calculations
│   ├── analysis.txt                    # Detailed Greek analysis
│   └── ΆΣΚΗΣΗ 2.pdf                   # Assignment specifications
│
├── Lab-Exercises-3/                    # Arrays & Advanced Data Structures
│   ├── exercise1.c                     # 2D array manipulation (5×5 → 4×4)
│   ├── exercise2.c                     # Matrix operations & transformations
│   ├── exercise3.c                     # Bookstore inventory system
│   ├── exercise4.c                     # Word length histogram
│   ├── exercise5.c                     # String search & pattern matching
│   ├── exercise6.c                     # Dynamic memory & column sums
│   ├── exercise7.c                     # Hangman game implementation
│   ├── exercise8.c                     # Hotel reservation system
│   ├── analysis.txt                    # Detailed Greek analysis
│   └── ΆΣΚΗΣΗ 3.pdf                   # Assignment specifications
│
├── Lab-Exercises-4/                    # Consolidation & Additional Exercises
│   ├── exercise1.c                     # Basic algorithm practice
│   ├── exercise2.c                     # Control structures & I/O
│   ├── exercise3.c                     # String & array exercises
│   ├── analysis.txt.txt                # Detailed Greek analysis
│
└── README.md                           # This comprehensive guide
```

---

## 🎯 Learning Progression

### **Phase 1: Foundation Building** (Lab 1)
Establishing core programming concepts and problem-solving methodologies.

### **Phase 2: Algorithmic Thinking** (Lab 2) 
Developing computational logic and mathematical problem-solving skills.

### **Phase 3: Data Structure Mastery** (Lab 3)
Implementing complex data manipulation and real-world applications.

---

## 📚 Detailed Exercise Analysis

### 🔰 **Lab Session 1: Fundamentals & Control Structures**

#### **Core Exercises**

| Exercise | Problem | Key Concepts | Difficulty |
|----------|---------|--------------|------------|
| **1** | Triangle Validity Checker | Conditional logic, Triangle inequality theorem | ⭐ |
| **2** | Midnight Time Calculator | Time arithmetic, Input validation | ⭐⭐ |
| **3** | Order Pricing System | Complex conditionals, Discount logic | ⭐⭐ |
| **4** | 5-Digit Number Reversal | Digit manipulation, Modular arithmetic | ⭐⭐ |
| **5** | Date Progression (+50 days) | Calendar logic, Loop control | ⭐⭐⭐ |
| **6** | MAC Address Classifier | Hexadecimal processing, Network concepts | ⭐⭐⭐ |

#### **Function-Based Implementations**
Refactored versions of exercises 1-4 demonstrating modular programming principles.

```c
// Example: Triangle validation with function
float func1(float a, float b, float c) {
    return (a + b > c && a + c > b && b + c > a) ? 1 : 0;
}
```

---

### 🔄 **Lab Session 2: Loops & Mathematical Algorithms**

| Exercise | Problem | Algorithm Type | Complexity |
|----------|---------|----------------|------------|
| **1** | Number Grid Display | Nested loops, Formatting | ⭐ |
| **2** | ASCII Character Table | Character encoding, Loop control | ⭐⭐ |
| **3** | Population Growth Model | Iterative calculation, Growth algorithms | ⭐⭐ |
| **4** | Mathematical Series Sum | Series computation, Pattern recognition | ⭐⭐ |
| **5** | Prime Number Detection | Number theory, Optimization | ⭐⭐⭐ |
| **6** | Consecutive Frequency Analysis | Sequence processing, Statistical analysis | ⭐⭐⭐ |
| **7** | Statistical Calculator | Multi-operation processing, Data analysis | ⭐⭐⭐ |

#### **Algorithmic Highlights**
- **Population Growth**: Compound interest simulation
- **Prime Detection**: Optimized trial division method
- **Frequency Analysis**: Real-time consecutive element tracking

---

### 🗃️ **Lab Session 3: Advanced Data Structures & Applications**

| Exercise | Problem | Data Structure | Real-World Application |
|----------|---------|----------------|------------------------|
| **1** | Matrix Dimension Reduction | 2D Arrays | Image processing simulation |
| **2** | Matrix Transformations | Multi-dimensional arrays | Linear algebra operations |
| **3** | Bookstore Inventory | 3D Arrays, String handling | Database simulation |
| **4** | Word Length Histogram | String processing, Frequency arrays | Text analysis |
| **5** | Pattern Matching Engine | String algorithms, Search optimization | Text processing |
| **6** | Dynamic Column Calculator | Dynamic memory allocation | Flexible data processing |
| **7** | Interactive Hangman Game | String manipulation, Game logic | Entertainment software |
| **8** | Hotel Management System | 2D Arrays, Menu systems | Hospitality software |

#### **Advanced Programming Concepts**

```c
// Dynamic memory allocation example (Exercise 6)
int* func(int** matrix, int rows, int cols) {
    int* columnSums = (int*)calloc(cols, sizeof(int));
    // Column sum calculation logic
    return columnSums;
}
```

```c
// String pattern matching (Exercise 5)
int find_positions(char* word, char* text, int* positions) {
    // Advanced string search implementation
    return matchCount;
}
```

---

### 🔧 **Lab Session 4: Consolidation & Additional Exercises**

| Exercise | Problem | Key Concepts | Difficulty |
|----------|---------|--------------|------------|
| **1** | Basic algorithm practice | Loops, Conditionals, Simple I/O | ⭐ |
| **2** | Control structures & I/O | File I/O, Input validation | ⭐⭐ |
| **3** | String and array tasks | String manipulation, Array processing | ⭐⭐ |

#### Notes
Lab 4 contains small consolidation exercises and analysis in `Lab-Exercises-4/analysis.txt.txt`.

---

## 🛠️ Technical Implementation Details

### **Programming Paradigms Demonstrated**
- **Procedural Programming**: Structured approach with functions
- **Modular Design**: Separation of concerns and reusability
- **Input Validation**: Robust error handling and user experience
- **Memory Management**: Dynamic allocation and deallocation
- **Algorithm Optimization**: Efficient computational approaches

### **C Language Features Utilized**
- ✅ **Basic I/O**: `printf()`, `scanf()`, `fgets()`
- ✅ **Control Structures**: `if-else`, `while`, `for`, `switch`
- ✅ **Functions**: Parameter passing, return values, recursion
- ✅ **Arrays**: 1D, 2D, 3D array manipulation
- ✅ **Strings**: String processing, `string.h` library functions
- ✅ **Pointers**: Dynamic memory, pointer arithmetic
- ✅ **Structures**: Data organization and encapsulation
- ✅ **File Handling**: Text processing and data persistence

### **Development Environment**
- **Compiler**: GCC (GNU Compiler Collection)
- **Standards**: C99/C11 compliance
- **Platform**: Cross-platform compatibility (Windows/Linux/macOS)

---

## 📈 Learning Outcomes & Skills Developed

### **Core Programming Skills**
- ✅ **Problem Decomposition**: Breaking complex problems into manageable components
- ✅ **Algorithm Design**: Developing efficient computational solutions
- ✅ **Data Structure Selection**: Choosing appropriate data representations
- ✅ **Code Organization**: Writing maintainable and readable code
- ✅ **Debugging Techniques**: Systematic error identification and resolution

### **Mathematical & Logical Thinking**
- ✅ **Mathematical Modeling**: Translating real-world problems into code
- ✅ **Pattern Recognition**: Identifying algorithmic patterns and optimizations
- ✅ **Logical Reasoning**: Developing sound conditional and iterative logic

### **Software Engineering Practices**
- ✅ **Code Documentation**: Comprehensive commenting and analysis
- ✅ **Version Control**: Systematic project organization
- ✅ **Testing Methodologies**: Input validation and edge case handling

---

## 🎓 Academic Context

**Course**: Introduction to Programming (C Language)  
**Institution**: Computer Engineering & Informatics Department (CEID)  
**University**: University of Patras, Greece  
**Semester**: Fall 2024  
**Instructor Guidance**: Laboratory-based learning with practical applications

### **Assessment Criteria**
- **Correctness**: Functional accuracy and requirement fulfillment
- **Code Quality**: Readability, organization, and best practices
- **Problem-Solving**: Algorithmic thinking and optimization
- **Documentation**: Analysis files and comprehensive commenting

---

## 🚀 Future Applications

These foundational exercises prepare students for:
- **Data Structures & Algorithms** (Advanced CS courses)
- **Object-Oriented Programming** (C++, Java)
- **Systems Programming** (Operating Systems, Embedded Systems)
- **Software Engineering** (Large-scale application development)
- **Competitive Programming** (Algorithm contests and challenges)

---

## 📝 Usage Instructions

### **Compilation**
```bash
gcc -o program_name source_file.c
./program_name
```

### **For Dynamic Memory Exercises**
```bash
gcc -o program_name source_file.c -std=c99
```

### **Debugging**
```bash
gcc -g -o program_name source_file.c
gdb ./program_name
```

---

## 📄 Documentation

Each laboratory session includes:
- **📋 PDF Specifications**: Original assignment requirements (in Greek)
- **📝 Analysis Files**: Detailed implementation explanations (in Greek)
- **💻 Source Code**: Fully commented C implementations
- **🧪 Test Cases**: Comprehensive input/output examples

---

*This repository represents a comprehensive journey through fundamental C programming concepts, demonstrating progressive skill development and practical application of computer science principles.*