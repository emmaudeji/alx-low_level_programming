#include "function_pointers.h"


/**
 * print_name - will print a name
 * @name: is a string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
 {
if(f != NULL)
    	f(nane);
 }
