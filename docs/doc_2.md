# Question 2: Infix to Postfix Conversion and Evaluation

## Data Structure Used
We used **stacks** to implement both **operator handling** and **postfix evaluation**:

1. **Operator Stack (`char stack[MAX]`)**  
   - Stores operators (`+`, `-`, `*`, `/`) and parentheses while converting infix → postfix  
   - `top` keeps track of the last inserted element  

2. **Operand Stack (`int operandStack[MAX]`)**  
   - Stores integer values while evaluating the postfix expression  
   - `topOperand` keeps track of the last inserted number  

---

## Functions Description

1. `push(char ch)`  
   - Pushes a character (operator or opening bracket) onto the **operator stack**  

2. `pop()`  
   - Pops the top element from the **operator stack** and returns it  

3. `peek()`  
   - Returns the top element of the **operator stack** without removing it  

4. `precedence(char op)`  
   - Returns the precedence of an operator  
   - `*` and `/` → 2, `+` and `-` → 1, others → 0  

5. `infixToPostfix(char infix[], char postfix[])`  
   - Converts the **infix expression** to **postfix expression**  
   - Algorithm:  
     1. Scan the infix expression left to right  
     2. If a digit → append to postfix  
     3. If `(` → push to operator stack  
     4. If `)` → pop from stack to postfix until `(` is found  
     5. If operator → pop operators with **higher or equal precedence** to postfix, then push current operator  
     6. After scanning, pop remaining operators to postfix  
     7. Terminate `postfix` string with `'\0'`  

6. `evaluatePostfix(char postfix[])`  
   - Evaluates a **postfix expression**  
   - Algorithm:  
     1. Scan postfix left to right  
     2. If digit → push to **operand stack**  
     3. If operator → pop two operands, apply operation, push result back  
     4. Top of operand stack after scan → **final result**  

---

## Main Function Overview
- Reads an **infix expression** from the user  
- Calls `infixToPostfix()` → converts to postfix  
- Prints **postfix expression**  
- Calls `evaluatePostfix()` → prints **evaluated result**  

- This structure allows **easy input of different infix expressions** and consistent evaluation.

---

## Sample Output

**Example 1:**  
Enter an infix expression:3*4*(4+9)  
Postfix expression: 34*49+*  
Evaluated result: 156  

**Example 2:**  
Enter an infix expression:38-5+7  
Postfix expression: 385-7+  
Evaluated result: 10  

**Example 3:**  
Enter an infix expression:3+7/(2+3)*2  
Postfix expression: 3723+/2*+  
Evaluated result: 5  