#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
  int val;
  struct ListNode *next;
};

void  createNode(int sum, struct ListNode **head)
{
  struct ListNode *node = malloc(sizeof(struct ListNode));
  if (!node)
      return ;
  node->next = NULL;
  node->val = sum;
  if (!(*head))
  {
    (*head) = node;
    return ;
  }
  struct ListNode *tmp;
  tmp = (*head);
  while (tmp = tmp->next)
  {
    tmp = tmp->next;
  }
  tmp->next = node;
}
/*
struct ListNode *addTwuNumbers(struct ListNode *l1, struct ListNode *l2)
{
  int sum, save;
  save = 0;
  struct ListNode *head;

  head = NULL;
  while (l1 && l2)
  {
    sum = l1->val + l2->val + save;
    if (sum > 9)
    {
      save = 1;
    }
    else {
      save = 0;
    }
    sum = sum % 10;
    createNode(sum, &head);
    l1 = l1->next;
    l2 = l2->next;
  }

  while (l1->next)
  {
    sum = l1->val + save;
    if (sum > 9)
    {
      save = 1;
    }
    else {
      save = 0;
    }
    sum = sum % 10;
    createNode(sum , &head);
    l1 = l1->next;
  }
  while (l2->next)
  {
    sum = l2->val + save;
    if (sum > 9)
    {
      save = 1;
    }
    else {
      save = 0;
    }
    sum = sum % 10;
    createNode(sum, &head);
    l2 = l2->next;
  }
  if (save)
    createNode(1, &head);

  return (head);
}
*/

void ftprintNode(struct ListNode *head)
{
  struct ListNode *tmp;

  tmp = head;
  while (tmp->next != NULL)
  {
    printf("%d\n", tmp->val);
    tmp = tmp->next;
  }
}

int main()
{
  struct ListNode *head;

  head = NULL;
  createNode(3,&head);
  createNode(6, &head);
  createNode(9, &head);

  ftprintNode(head);
}
