#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_lst
{
    int data;
    struct s_lst *next;
} t_lst; 

t_lst *sort_list(t_lst *lst, int (*cmp)(int, int));

int asc(int a, int b) {
    return a > b;
}


t_lst *sort_list(t_lst *lst, int (*cmp)(int, int))
{
    t_lst *tmp;
    int nb; 

    t_lst *t = lst; 

    while (lst->next)
    {
        tmp = lst->next;
        while (tmp)
        {
            if (cmp(tmp->data, lst->data))
            {
                nb = tmp->data;
                tmp->data = lst->data;
                lst->data = nb;
            }
            tmp = tmp->next;
        }
        lst = lst->next;
    }
    return t; 
}

int main() {
    t_lst *head = (t_lst*)malloc(sizeof(t_lst));
    head->data = 3;
    head->next = (t_lst*)malloc(sizeof(t_lst));
    head->next->data = 1;
    head->next->next = (t_lst*)malloc(sizeof(t_lst));
    head->next->next->data = 2;
    head->next->next->next = NULL;

    printf("Original list: ");
    t_lst *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    head = sort_list(head, asc);

    printf("Sorted list: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    current = head;
    while (current != NULL) {
        t_lst *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

