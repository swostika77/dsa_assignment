# Question 1: Balanced Parentheses

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

- We declared three test expressions
- For each expression:
  - Reset the stack
  - Called `isBalanced()`
  - Printed the result: "Balanced" or "Not Balanced"

## Sample Output

Expression 1: Not Balanced
Expression 2: Not Balanced
Expression 3: Balanced
