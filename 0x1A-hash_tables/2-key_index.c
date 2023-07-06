#include "hash_tables.h"

/**
 * key_index - To get the index at which a key
 *      pair is stored in array of a hash table.
 * @key:  key to get the index of.
 * @size: size of the array of the hash table.
 *
 * Return: The index of key.
 * Description: Use the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
