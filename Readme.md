# 🧮 Scientific Calculator – Clash of Coders Capstone Project

## 📖 Project Description
This project is a **Scientific Calculator** written in **C language** as part of the *Clash of Coders* Capstone Project.  
It integrates concepts from both **C Programming (loops, functions, arrays)** and **Mathematics (basic arithmetic and power/square-root operations)** to create a fully functional, menu-driven calculator.  

The goal of this project is not only to make a calculator that works, but also to demonstrate **analytical understanding**, **structured programming**, and **modular code design**.

---

## 🧩 Concepts Used

### 💻 C Programming Concepts
- **Functions** – Modular design for menu and operations  
- **Loops** – Continuous program execution until user exits  
- **Conditional Statements (if / switch)** – Decision making for each operation  
- **Data Types** – `int` and `double` for handling both integer and decimal calculations  
- **Header Files** – `stdio.h`, `math.h`, and `stdlib.h`  

### 📊 Mathematical Concepts
- **Arithmetic Operations** (Addition, Subtraction, Multiplication, Division, Modulus)  
- **Power Calculation** using `pow()`  
- **Square Root Calculation** using `sqrt()`  
- **Error Handling** for division by zero and invalid inputs  

---

## ⚙️ Functionality & Features
✅ Addition  
✅ Subtraction  
✅ Multiplication  
✅ Division  
✅ Modulus (Remainder)  
✅ Power (x^y)  
✅ Square Root  
✅ Exit Option  

---

## 🧠 Code Explanation (Logic Breakdown)
- The program begins by displaying a **menu** of available operations.  
- It uses a **while(1)** loop to allow multiple calculations until the user selects **Exit**.  
- Each operation is handled via a **switch-case structure**, ensuring code clarity.  
- The **`math.h`** library is used for advanced functions like power and square root.  
- **Error handling** ensures no crashes occur due to invalid input (e.g., division by zero).  

---

## 🪜 How to Compile and Run

### 🧰 Requirements
- Compiler: GCC  
- IDE: Visual Studio Code or Code::Blocks  
- OS: Windows / Linux  

### 🔧 Compilation Command
```bash
gcc calculator.c -o calculator -lm
```

### ▶️ Run Command
```bash
./calculator
```

### ⚠️ Note
The `-lm` flag is essential to link the **math library** used for `pow()` and `sqrt()` functions.

---

## 📊 Sample Output
```
=============================
      SCIENTIFIC CALCULATOR
=============================
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus (Remainder)
6. Power (x^y)
7. Square Root
8. Exit
=============================
Enter your choice: 6
Enter base and exponent: 2 3
Result: 2.00 ^ 3.00 = 8.00
-------------------------------------
```

---

## 📂 Project Structure
```
Scientific-Calculator/
│
├── calculator.c      # Main source code
└── README.md         # Documentation file
```

---

## ✍️ Insights and Learning
Through this project, I learned:
- How to design structured and modular C programs using functions.  
- The importance of **error handling** for program stability.  
- How to integrate **mathematical operations** using the C standard library.  
- The use of **loops** and **conditional statements** for user interaction.  

---

## ✨ Author
**Harsh Raj**  
📧 Email: harshraj3102006@gmail.com  
💻 GitHub: [github.com/harshraj3102006](https://github.com/harshraj-in)

---

## 📜 License
This project is open-source and created for educational purposes as part of the *Clash of Coders* Capstone Challenge.

---

## 🔗 Submission
**Repository Link:** *[https://github.com/harshraj-in/coc-project-calculator]*
