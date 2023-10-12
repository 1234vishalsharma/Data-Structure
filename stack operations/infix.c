// infix Expression :-   a+b; a-b;    a/b;    b+54;         <operand1>  {<opeartor>}  <operand2>

// Prefix expression   +ab , -ab   { <opeartor>}  <operand1>  <opearnd2>

// postfix      ab+    , ab-    <operand1>    <operand2>    {<operator>}


// precedency of operators 
// 3. (),^
// 2. *,/
// 1. +,-

#include<stdio.h>
int main()
{
    int infixexp;
    printf("Enter the infix expression :");
    scanf("%d",&infixexp);
    return 0;
}