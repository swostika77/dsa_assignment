#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;

void push(char ch){
    top++;
    stack[top]=ch;
}

char pop(){
    char ch=stack[top];
    top--;
    return ch;
}

int isMatching(char open, char close){
    if(open=='(' && close==')')
    return 1;
    if(open=='{'&& close=='}')
    return 1;
    if(open=='['&& close==']')
    return 1;
    return 0;
}

int isBalanced(char expression[]){
    int i;
    char temp;
    for(i=0; i<strlen(expression); i++){
        if(expression[i]=='('|| expression[i]=='{'||expression[i]=='['){
            push(expression[i]);
        }
        if(expression[i]==')'|| expression[i]=='}'||expression[i]==']'){
            if(top==-1)
            return 0;
            temp=pop();
            if(!isMatching(temp,expression[i]))
            return 0;
        }
    }
    if(top==-1)
    return 1;
    else 
    return 0;
}
int main(){
    char expression1[]="a+(b-c)*(d";
    char expression2[]="m+[a-b*(c+d*{m)]";
    char expression3[]="a+(b-c)";

    top=-1;
    printf("Expression 1:%s\n",isBalanced(expression1)?"Balanced":"Not Balanced");

     top=-1;
    printf("Expression 2:%s\n",isBalanced(expression2)?"Balanced":"Not Balanced");

     top=-1;
    printf("Expression 2:%s\n",isBalanced(expression3)?"Balanced":"Not Balanced");


}