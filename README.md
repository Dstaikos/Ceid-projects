# CEID – First-Semester C Programming Exercises

![C](https://img.shields.io/badge/language-C-00599C)
![University of Patras](https://img.shields.io/badge/University-Patras-blue)
![Exercises](https://img.shields.io/badge/exercises-25-green)
![Lab Sessions](https://img.shields.io/badge/lab_sessions-4-orange)
![Final Project](https://img.shields.io/badge/final_project-1-red)

A comprehensive collection of **C programming exercises** completed during the first semester of the Computer Engineering and Informatics Department (CEID) at the **University of Patras**. This repository demonstrates progressive learning through three distinct laboratory sessions, covering fundamental programming concepts from basic control structures to advanced data manipulation.

---

## 👨💻 Author
**Dstaikos** – First-year CEID student
*Academic Year: 2024-2025*

---

## Repository Overview

| **#Lab** | **Exercises** | **Key Topics** | **Complexity** |
|-----------------|---------------|----------------|----------------|
| Lab 1 | 6 + 4 functions | Basic I/O, Conditionals, Loops | Beginner |
| Lab 2 | 7 exercises | Advanced Loops, Functions, Algorithms | Intermediate |
| Lab 3 | 8 exercises | Arrays, Strings, Dynamic Memory | Advanced |
| Lab 4 | 3 exercises | File I/O, Control Structures, Basic Algorithms | Intermediate |

**Total:** 24 exercises + 1 comprehensive final project across

---

## Repository Structure

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
│   ├── exercise1.c                     # Bank account management system
│   ├── exercise2.c                     # Employee data analysis
│   ├── exercise3.c                     # String processing & translation
│   ├── analysis.txt                    # Detailed Greek analysis
│   └── ΆΣΚΗΣΗ 4.pdf                   # Assignment specifications
│
├── OrdersHandlingApp.c                 # FINAL SEMESTER PROJECT
│                                       # Complete order management system
│                                       # Features: Menu-driven interface,
│                                       # File I/O, Status tracking, Cost calculation
│
└── README.md                           # This comprehensive guide
```

---

## Final Semester Project: Orders Handling Application

**OrdersHandlingApp.c** - A comprehensive order management system representing the culmination of first-semester C programming skills.

### **Features:**
- **Menu-Driven Interface**: Interactive 12-option menu system
- **Order Status Tracking**: PENDING → READY → CLOSED workflow
- **Cost Calculation**: Automatic pricing with discount logic
- **File I/O Operations**: Save/load orders to/from text files
- **Customer Search**: Find orders by customer name
- **Business Logic**: Real-world order processing simulation

### **Technical Implementation:**
- **Structures & Enums**: Complex data organization
- **File Handling**: Persistent data storage
- **Menu Systems**: User-friendly interface design
- **Business Logic**: Discount calculations and status management


---

## Usage Instructions

### **Compilation**
```bash
gcc source_file.c -o program_name
./program_name
```

### **Debugging**
```bash
gcc -g -o program_name source_file.c
gdb ./program_name
```


---

## 📄 Documentation

Each laboratory session includes:
- **PDF Specifications**: Original assignment requirements (in Greek)
- **Analysis Files**: Detailed implementation explanations (in Greek)
- **Source Code**: Fully commented C implementations
- **Test Cases**: Comprehensive input/output examples

---

*This repository represents a comprehensive journey through fundamental C programming concepts, demonstrating progressive skill development and practical application of computer science principles.*
