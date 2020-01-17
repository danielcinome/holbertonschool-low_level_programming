#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key : is the key
 * @size : is the size of the array of the hash table
 * Return: index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = 0;

	value = hash_djb2(key);
	value = value % size;
	return (value);
}
