L2 / Comment Lines & Tokens / Q. No : 5930
Understanding Comments 

Make the following changes in the code given below:
Comment the statement which prints "Mango".
Remove the comment on the statement which prints "Banana".

#include <stdio.h>
void main() {
	printf("Orange\n");
	printf("Banana\n");
}


L2 / Comment Lines & Tokens / Q. No : 5932
Whitespace characters and Tokens in C 
Whitespace Characters

In English,we use space to separate two words. When it comes to typing text in a computer, there are different types of characters that are used to separate text by creating a space. These are called whitespace characters.

The different whitespace characters in C are:
Space ' ' – (ASCII SP) produced by pressing spacebar
Tab '\t' – (ASCII HT) produced by pressing the tab key
Form Feed character '\f' – (ASCII FF) usually used as the page separator char between lines/paragraphs
Line Terminator chars (used to separate two lines) – produced by pressing Enter key:
Line Feed - '\n' (ASCII LF also called NL - New Line) - used in all Unix and Mac OS X systems
Carriage Return - '\r' (ASCII CR) – used in MAC OS 9 and below
Carriage Return followed by Line Feed- '\r\n' (ASCII CRLF) – used in Windows systems
Tokens

The basic buildings blocks used to write a C program are called tokens.

Consider the example given below:
#include <stdio.h>
void main() {
       int num1 = 10, num2 = 20;
       printf("sum of two numbers = %d", num1 + num2);
}
Individual fragments like void, main, { etc are different types of tokens.

In C, tokens can be classified into six categories as given below :
Identifiers – These are simple names used to refer to or identify something. For example, names of variables, functions are called Identifiers. In the code given above, main, num1, num2, printf are Identifiers.
Keywords – These are one of the 32 reserved words like int, for, if, etc. These words have special meaning when used as part of the program. We shall learn more about them in later sections.
Constants – These are fixed values like 10, 20 etc, which are used in a program.
String constants – String constants are specified within double quotations. Example-"Total", "CodeTantra" etc.
Separators – The following are called as separators - ( ) { } [] ; , . .
Operators – The following are called operators, - = > < == >= etc. We shall learn more about them in later sections.
Select all the correct statements from the list given below:

The tokens num1and num2 are called Keywords.
The token int is called a keyword. (CORRECT)
The token num1 which is a variable name is called an Identifier. (CORRECT)
The open brace { and the close brace } used to open and close the function blocks respectively, are called Operators.

L2 / Comment Lines & Tokens / Q. No : 5935
Writing escape characters in a statement 
The code given below contains text that prints "DennisRitchieBrianKernighan".

Make the suggested changes to the code so that it prints "DennisRitchieBrianKernighan" as shown below.
Dennis	Ritchie
Brian	Kernighan
To make the required changes, follow the steps given below to introduce the \t TAB character and the \n new line character appropriately:
Insert a \t between "Dennis" and "Ritchie". Make sure that no extra space or any other character apart from \t are inserted.
Insert a \n between "Ritchie" and "Brian" Make sure that no extra space or any other character apart from \n are inserted.
Insert a \t between "Brian" and "Kernighan". Make sure that no extra space or any other character apart from \t are inserted.

#include <stdio.h>
void main() {
	printf("Dennis\tRitchie\nBrian\tKernighan\n");
}

L2 / Variables & Keywords / Q. No : 5919
Character set of C language 

Each and every language in the world requires alphabets to form words. Likewise, a programming language also needs a set of characters to write a program.

The set of characters used in a language is known as its Character Set.

Every language makes use of its own character set to form words or symbols that make up the vocabulary of the language.

C language is case sensitive. By case sensitive, we mean that the C compiler treats lowercase and uppercase characters differently. For example, the variable name num1 is different from Num1.

C language has its own character set. The character set for ANSI Standard C (ANSI C) is as follows:
Uppercase alphabets: A to Z
Lowercase alphabets: a to z
Decimal digits: 0 to 9
Special characters: + - * / % = < >  : ; , .’ “ ?! # \ ( ) { } _ [ ] & | ^ ~

Escape sequences: \b \t \v \r \f \n \\ \' \"\? \0 \aSelect the correct statements from the list below:

C compiler treats lowercase and uppercase characters as the same.
Character set contains alphabet, digits, special symbols and escape sequences. (CORRECT)
Any character which begins with \ is called an escape sequence. (CORRECT)
We can use characters of Chinese or Hindi to write a C program.

L2 / Variables & Keywords / Q. No : 5939

Read the code given below to learn naming conventions in identifiers.

For example, consider the program given below:
#include <stdio.h>
void main() {
 	int age = 2; // age is an integer variable

	int firstNumber = 2; // firstNumber is an integer variable

	// If there are two or more words in an identifier/variable - User can also use "camel case" style to declare a variable.


	int second_number = 3; // second_number is an integer variable

	// Any space cannot be used between two words of an identifier/variable; User can use underscore (_) instead of space.


	int _i_am_also_a_valid_identifier = 4; // _i_am_also_a_valid_identifier is an integer variable

	// An identifier/variable name must be start with an alphabet or underscore (_) only, no other special characters, digits are allowed as first character of the identifier/variable name.


	printf("age = %d\n", age);
	printf("firstNumber = %d\n", firstNumber);
	printf("second_number = %d\n", second_number);
	printf("_i_am_also_a_valid_identifier = %d\n", _i_am_also_a_valid_identifier);
}
Fill in the missing code in the below program to print the values of the given variables.
Sample Test Cases
Test Case 1:
Expected Output:
age·=·2
firstNumber·=·2
second_number·=·3
_i_am_also_a_valid_identifier·=·4

#include <stdio.h>
void main() {
	int age = 2;
	int firstNumber = 2;
	int second_number = 3;
	int _i_am_also_a_valid_identifier = 4;
	printf("age = %d\n", ); // Fill in the missing code
	printf("firstNumber = %d\n", ); // Fill in the missing code
	printf("second_number = %d\n", ); // Fill in the missing code
	printf("_i_am_also_a_valid_identifier = %d\n", ); // Fill in the missing code
}



