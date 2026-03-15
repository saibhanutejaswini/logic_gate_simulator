# Logic Gate Simulator in C

This project is a simple **digital logic gate simulator written in C**.
It demonstrates how basic logic gates work and how digital circuits can be simulated using programming.

## Features

* Simulates fundamental logic gates:

  * AND
  * OR
  * XOR
  * NAND
  * NOR
  * NOT
* Interactive **logic gate simulator**
* **Truth table generator**
* Modular code using **header files**

## Project Structure

logic-gate-simulator
│
├ gates.h        – function declarations for logic gates
├ gates.c        – implementation of logic gates
├ simulator.c    – interactive logic gate simulator
├ truth_table.c  – generates truth tables
└ README.md      – project documentation

## How to Compile

Compile the simulator:

```
gcc simulator.c gates.c -o simulator
```

Compile the truth table generator:

```
gcc truth_table.c gates.c -o truth_table
```

## How to Run

Run the simulator:

```
./simulator
```

Run the truth table generator:

```
./truth_table
```

## Concepts Used

* Digital Logic Gates
* Truth Tables
* Modular Programming in C
* Header Files

## Author

Sai Bhanu Tejaswini
