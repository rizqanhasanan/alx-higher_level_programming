
#include "lists.h"
#include <stdio.h>

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @head: Pointer the list
 * @number: Number insert
 * Return: the head of new list
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *insert;
        listint_t *node;

	insert = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
	       return (NULL);

	node->n = number;
	node->next = NULL;

	if (*head == NULL)
        {
	          *head = node;							       return (node);					
}

        if (insert->next == NULL)
        {
	      if (insert->n < number)
	      {
                        insert->next = node;						     return (node);						}							             else								  {									         node->next = insert;
		        *head = node;
	                return (node);						   }							
}

while (insert)
{
	      if (insert->next)
	      {
		       if (insert->n > number)						    {										node->next = insert;						     *head = node;
			       break;			
             }
	               else if (insert->next->n > number)			  {									         node->next = insert->next;					      insert->next = node;						   break;					    }
   else
	insert = insert->next;	
   }							
   else									{									  node->next = NULL;
	insert->next = node;
	break;																	}								}
	return (node);
	}
