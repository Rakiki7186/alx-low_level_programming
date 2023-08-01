#include "lists.h"
/**
 * get_nodeint_at_index - In a linked list return the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node to be returned
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
