
#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>
typedef struct node 
{
  int value;
  struct node *next;
} node_t;
void rearrange(struct node *list)
{
  struct node *p, * q;
  int temp;
  if ((!list) || !list->next) 
      return;
  p = list;
  q = list->next;
  while(q) 
  {
     temp = p->value;
     p->value = q->value;
     q->value = temp;
     p = q->next;
     q = p?p->next:0;
  }
}
int main() {
node_t a;
a.value = 1;
node_t *aa = &a;

int n = 7;
int arr[] = {1, 2, 3, 4, 5, 6, 7};
for (int i = 1; i<n; i++) {
   node_t *b;
   b = (node_t*)malloc(sizeof(node_t));
   b->value = arr[i];
   b->next = NULL;
   aa->next = b;
   aa = b;
}
aa = &a;
for (int i = 0; i<n; i++) {
   cout << aa->value << " ";
   aa = aa->next;
}
cout << endl;
rearrange(&a);
aa = &a;
for (int i = 0; i<n; i++) {
   cout << aa->value << " ";
   aa = aa->next;
}
cout << endl;
  system("pause");
 return 0;
}
