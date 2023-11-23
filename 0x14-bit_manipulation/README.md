BIT MANIPULATION
               ............................................
Bit manipulation is a fundamental technique that involves manipulating indvidual bits pr group of bits within a large piece of data.

    TYPES OF BIT WISE OPERATORS
  .....................................................................
1) AND(&) operator; this operator takes two numbers and perform bit wise AND operation.
it is true when both numbers are true 
( that is 1) and false otherwise

2) OR operator: this is a bit wise operator that is used to perform OR operations ( | );
it is true when one or all of the numbers are true, and false when both numbers are 0.

3) NOT Operator: it is a unary operator, which means: it takes only one number and perform NOT operators on it.
it's job is to compliment a number that is to bring out the inverse of a number.

        4 ) LEFT SHIF OPERATORS ( << )
         ..................................................
left shift operator is a binary operator that accepts two values,
example:
            1st operand << 2nd operand
The first value (1st number) is the operator to be ledft shifted. while the second value (2nd number) is the number of position in which it is to be shifted to.

when a number is left shifted, it moves to the left and leaves an empty gap which is later filled with 0 

example: before shifting
var = 3; /* 3 -> 011 in binary */
and in hexadecimal -> 0000 0011
var << 1
after been shifted 1 bit to left 
=> -> where the next space will be filled with a zero.

=> 0000 0110

NOTE: left shitfting is equivalent to multiplication by 2 ^right operand (2  to the power right operand).

       5) RIGHT SHIFT OPERATOR 
  ........................................................................
The right shift operator is a binary operator which means it requires two values

 1st operand >> 2nd operand
the right shift operator is thesame like division by 2^2nd operand.

example: int var = 3;
/* in binary 3 = 011 */
and in octal it is /* 0000 0011 */

var >> 1

_0000 001 => 0000 0001 -> 1 in decimal

6) EXCLUSIVE OR OPERATOR

This is an operator that has 2 operands A and B.
It is true when either A or B is 1 and false when A and B both 1 or both 0   
