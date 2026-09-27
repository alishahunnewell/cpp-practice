#include <iostream>

//five() is a function that returns value 5 
int five()
{
    return 5;
}

int main()
{
    //these are all expressions; non empty sequence of literals, variables, operators, and function calls that calculate a value 
    //process of executing an expression called evalutaions, and produces a return value 
    int a{ 2 };             //initialize variable a with literal value 2 
    std::cout << a;
    int b{ 2 + 3} ;         //initialize variable b with computed value 5
//here int is the type, b is the identifier, 2+3 is the expression

    int c{ (2 * 3) + 4 };   //initialize variable c with computed value 10 
    int { b };              //initialize variable d with variable value 5 
    int e{ five() };        //initialize variable e with function return value 5

    //expressions involving operators with side effects are a little more tricky:
    int x;
    x = 5; //x=5 has side affect of assigning 5 to x, evaluates to x 
    x = 2 +3; //side effect of assigning 5 to x, evaluates to x 
    std::cout << x; //has side effect of printing value of x to console, evaluates to std::cout 

    //note expressions do not end in a semicolon and cannot be compiled by themselves, an expression statement is when its followed by a ;

    //useless expression statements for ex (2 *3;) is an expression statement that evaluates to value 6 then is discarded, syntax valid but useless

    //subexpression;an expression used as an operand, example x= 4 +5, within that the sybexpressions are (x) and (4+5), subexpression of (4+5) are 4 and 5

    //full expression is one that is not a subexpression
    //compound expression is an expression that contains two or more uses of operators (x = 4+ 5)
    return 0;

}