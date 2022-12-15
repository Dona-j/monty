A C programming task at ALX School!
================================================================================
## Project Description:
Group project
 Project is done by: Innocent omodiale, Dona Jimmy.
 Project starts Dec 13, 2022 6:00 AM, and end by Dec 16, 2022 6:00 AM

0x19. C-
Stacks, Queues - LIFO, FIFO is a project that teaches the concepts of LIFO and FIFO, stack and queue data structures, and their common implementations and use cases. It also emphasizes the proper way to use global variables in C. The project involves writing code in C to implement these concepts and pass a set of tests. LIFO and FIFO refer to the way items are added and removed from a data structure. LIFO stands for Last In, First Out, and means that the last item added to the data structure is the first one to be removed. FIFO stands for First In, First Out, and means that the first item added to the data structure is the first one to be removed. A stack is a data structure that uses LIFO, and is commonly used to store and manage function calls in a program. A queue is a data structure that uses FIFO, and is commonly used to store data that needs to be processed in the order it was received. The most common implementations of stacks and queues are using arrays and linked lists. Stacks and queues have many different use cases, including managing function calls, storing data for processing, and implementing undo/redo operations in applications. Global variables should be used sparingly and with caution in C, as they can cause issues with program organization and maintenance.

# The Monty language

   Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

# Monty byte code files

   Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language.

## Compilation & Output
Code is compiled this with:      
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

## The monty program

    Usage: monty file
        where file is the path to the file containing Monty byte code
    If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
    If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
        where <file> is the name of the file
    If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
        where is the line number where the instruction appears.
        Line numbers always start at 1
    The monty program runs the bytecodes line by line and stop if either:
        it executed properly every line of the file
        it finds an error in the file
        an error occured
    If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
    You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)

## Example

There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

     julien@ubuntu:~/monty$ cat -e bytecodes/000.m
     push 0$
     push 1$
     push 2$
       push 3$
                   pall    $
      push 4$
      push 5    $
      push    6        $
      pall$
      julien@ubuntu:~/monty$

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

      julien@ubuntu:~/monty$ cat -e bytecodes/001.m
	       push 0 Push 0 onto the stack$
     push 1 Push 1 onto the stack$
     $
	push 2$
     push 3$
                   pall    $
		   $
	$
                           $
			   push 4$
     $
	    push 5    $
          push    6        $
      $
	pall This is the end of our program. Monty is awesome!$
     julien@ubuntu:~/monty$





## Team

* [**Innocent A. Omodiale**](https://github.com/innobrightcafe)
* [**Dona Jimmy**](pls enter your link)

