L1
Structures declarations
Q. No : 6610

1. What is a structure? 
A Structure is a derived data type to organize a group of related data items of different data types referring to a single entity. i.e., a single variable capable of holding data items of different data types.

The data items in a structure are usually related like different kinds of information about a person or about a part or about an account, etc.

Each data item in a structure is called a member, sometimes these members are also called fields.

The keyword used to create a structure is struct.

The advantage of using a structure is that the accessibility of members becomes easier since all the members of a specific structure gets allocation of continuous memory and therefore it minimize the memory access time.

Structures can be declared and defined in many number of ways.

Generally a structure can be declared as:
struct tag_name {
	data_type1 var1;
	data_type2 var2;
	....
	....
	data_typen varn;
};
The declaration begins with the keyword struct. The list of declaration of its members must be enclosed in braces, the tag_name is an identifier which specifies the new structure name.

The declaration of a structure does not reserve any storage space. But the definition of the structure creates structure variables.

The structure variables can be defined as:
struct tag_name svar1, svar2 ...svarn;
Let us consider an example:
struct example { 
	int a;
	float b;
	char c;
};  
struct example s1, s2, s3; // structure definitionIn the above code example is a new user defined data type which consists of 3 variables of different data types. The structure definition allocates a 7 bytes (2 + 4 + 1) memory to each structure variable s1, s2, s3.

Select all the correct statements given below.

A structure is a collection of different data type variables. (Correct)  
structure is the keyword used to declare a new structure.
Without a structure variable, memory is allocated to a structure.
struct is the keyword used in definition of a structure variable. (Correct) 

L1 / Structures declarations / Q. No : 6611
Understanding declarations and definitions of Structures 
Another way of declaring and defining a structure is:
struct {
	data_type1 var1;
	data_type2 var2;
	....
	....
	data_typen varn;
}svar1, svar2;
In the above type of syntax variables are declared directly with the declaration of a structure without choosing a name for the the structure and only two structure variables can only be defined. So, It is not possible to create new variables of this structure type later in the program.

Another syntax is:
struct tag_name {
	data_type1 var1;
	data_type2 var2;
	....
	....
	data_typen varn;
}svar1, svar2;
....
struct tag_name svar3, svar4;
Here, two structures variables are declared along with the structure tag, they can be used in the program where they are declared. A new structure variables can also be defined by using tag_name and used in the program.

A structure can also be declared by using the keyword typedef as:
typedef struct tag_name {
	data_type1 var1;
	data_type2 var2;
	....
	....
	data_typen varn;
}new_name;
new_name svar1, svar2, ..., svarn;
Here, typedef is used to create an alias name new_name for the user defined structure struct tag_name, so new_name can be used to define structure variables of the given type.

Click on the  button to know how to declare and define structures.

Select all the correct statements given below.

A tag_name is an optional in the declaration of a structure. (Correct)
Memory for the members of a structure can be allocated at the declaration time of a structure.
Structure variables can be defined any where in the program with in the scope of the declaration of that structure.  (Correct)
The keyword typedef is used to define the structure variables.


