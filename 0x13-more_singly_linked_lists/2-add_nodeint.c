#include "lists.h"
/**
 * add_nodeint - at the beginning of a linked list,add a new node 
 * @head: pointer to the first node in the list
 * @n: data to be inserted in that new node
 *
 * Return:the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
