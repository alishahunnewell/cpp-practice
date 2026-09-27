//literal constant is a fixed value that has been inserted directly into the source code , literals and variables both have value and type, but unlike a var the value of a literal cant be changed
#include <iostream> 

int main() 
{
    std::cout << 5 << '\n'; //print the value of a literal
    
    int x { 5}; 
    std::cout << x << '\n'; //print value of a variable 

    //now an operation in math is a process involving zero or more input calues (operands) that produces new value called output value, denoted by operator symbol 
    //for ex, 2+3  where 2 and 3 are operands and + is the operatir
    std::cout << 1 + 2 << '\n';
    
    return 0;

    //notes
    //arity; number of operands that an operator takes as input 
    //unary operators act on one operand, for example the - operator, given -5, operator- takes literal operand 5 and flips its sign to produce new output value 
    //binary operators act on two operands  like the + operator, typically binary takes the left operand and right operand and applied mathematical operator to produce new output value,
        //the insertion<< and extraction>> operators are binary operators, taking std::cout or std::cin>> on the left side and the value to ouput or variable to input on right side 
    //ternery operators act on three operands only one 
    //nullary operators act on zero operands, also only one 
}