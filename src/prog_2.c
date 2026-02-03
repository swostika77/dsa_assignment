#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

char stack[MAX];
int top =-1;

void push(char ch){
    stack[++top]=ch;
}

char pop(){
    return stack[top--];
}

char peek(){
    if(top==-1)return '\0';
    return stack[top];
}

int precedence(char op){
    if(op=='+'||op=='-')return 1;
    if(op=='*'||op=='/')return 2;
    return 0;
}
void infixToPostfix(char infix[],char postfix[]){
    int i, k=0;
    char ch;
    top=-1;
    for(i=0;i<strlen(infix);i++){
        ch=infix[i];
        if(isdigit(ch)){
            postfix[k++]=ch;
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while(top!=-1 && peek()!='(')
            postfix[k++]=pop();
            if(top!=-1)pop();
        }
        else{
            while(top!=-1 &&precedence(peek())>=precedence(ch))
            postfix[k++]=pop();
            push(ch);
        }
    }
    while(top!=-1){
        postfix[k++]=pop();
    }
    postfix[k]='\0';
}
int evaluatePostfix(char postfix[]){
    int i;
    int operandStack[MAX];
    int topOperand=-1;
    for(i=0; i<strlen(postfix);i++){
        char ch =postfix[i];
        if(isdigit(ch)){
            operandStack[++topOperand]=ch-'0';
        }
        else{
            int val2=operandStack[topOperand--];
            int val1=operandStack[topOperand--];
            switch(ch){
                case '+':operandStack[++topOperand]=val1+val2;break;
                case'-':operandStack[++topOperand]=val1-val2;break;
                case '*':operandStack[++topOperand]=val1*val2;break;
                case '/':operandStack[++topOperand]=val1/val2; break;

            }
        }
    }
    return operandStack[topOperand];
}
int main(){
    char infix[MAX],postfix[MAX];

    printf("Enter an infix expression:");
    scanf("%s",infix);
    infixToPostfix(infix,postfix);
    printf("Postfix expression: %s\n",postfix);
    printf("Evaluated result: %d\n",evaluatePostfix(postfix));
    return 0;
}