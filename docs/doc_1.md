# Question 1: Balanced Parentheses

## Introduction

Balanced parentheses checking is a fundamental application of the stack data structure. In mathematical expressions and programming languages, brackets must appear in matching pairs and in the correct order. Incorrectly balanced parentheses may lead to syntax errors or incorrect computations.

This program demonstrates how a stack can be used to efficiently verify whether an expression contains properly matched and ordered brackets.

---

## Problem Statement

The objective of this program is to check whether a given mathematical expression contains balanced parentheses. The program must verify correct matching of different types of brackets such as (), {}, and [] using a stack data structure. If every opening bracket has a corresponding closing bracket in the correct order, the expression is considered balanced.


## Data Structure Used
We used a **stack** implemented as an array to store opening brackets. 
- Stack works as LIFO (Last In First Out)
- `top` keeps track of the last inserted element

## Functions Description

1. `push(char ch)`  
   - Pushes an opening bracket into the stack  

2. `pop()`  
   - Removes the top element from the stack  

3. `isMatching(char open, char close)`  
   - Checks if the pair of brackets match  

4. `isBalanced(char expression[])`  
   - Main function to check the whole expression
   - Returns 1 if balanced, 0 if not


## Main Function Overview
- Three test expressions are declared:
  1. `"a + (b - c) * (d"`
  2. `"m + [a - b * (c + d * {m)]"`
  3. `"a + (b - c)"`  
- For each expression:
  1. Reset `top = -1` (empty stack)  
  2. Call `isBalanced()`  
  3. Print result: `"Balanced"` or `"Not Balanced"`  

- This structure allows **easy testing** of multiple expressions sequentially.


## Sample Output
Expression 1: Not Balanced  
Expression 2: Not Balanced  
Expression 3: Balanced  


## Notes and Observations
- The program **only checks brackets**, it ignores other characters like letters, numbers, or operators.  
- Maximum stack size is **100**, so expressions longer than 100 brackets may fail.  
- Stack is ideal here because it efficiently keeps track of **nested brackets**.  