#include "search_algos.h"

/**
  * linear_search - Searches for value in array using linear search
  *
  * @array: a pointer to first element in search array
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: if the value is NULL, return -1
  *         Else return the first index where the value is located
  */

int linear_search(int *array, size_t size, int value)
{
      unsigned int i;

      if (array == NULL)
          return (-1);
  
      for (i = 0; i < size; i++)
      {
          printf("Value checked array[%d] = [%d]\n", i, array[i]);
          if (array[i] == value)
              return (i);
      }
      return (-1);
}
