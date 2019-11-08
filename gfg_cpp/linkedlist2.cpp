
#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>
typedef struct Node {

       int Value;

       struct Node *Fwd;

       struct Node *Bwd;

 } nod;
int main() {

nod a;a.Value = 1;a.Fwd = NULL; a.Bwd = NULL;
nod b;b.Value = 2;b.Fwd = NULL; b.Bwd = NULL;
nod c;c.Value = 3;c.Fwd = NULL; c.Bwd = NULL;
a.Fwd = &b; b.Bwd = &a;
b.Fwd = &c; c.Bwd = &b;
nod* X = &a;
while (X != NULL) {
   printf("%d ", X->Value);
   X = X->Fwd;
}
printf("\n");

X = &b;
X->Bwd->Fwd = X->Fwd; X->Fwd->Bwd = X->Bwd ;
X = &a;
while (X != NULL) {
   printf("%d ", X->Value);
   X = X->Fwd;
}
printf("\n");
  system("pause");
 return 0;
}
