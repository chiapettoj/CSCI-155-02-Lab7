#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

int main() {
  ItemToPurchase items[2];

  makeItemBlank(&items[0]);
  makeItemBlank(&items[1]);

  addItemToCart(items,0);

  char c = getchar();
  while(c != '\n' && c != EOF) {
     c = getchar();
  }

  addItemToCart(items,1);

  printf("TOTAL COST\n");
  printItemCost(items[0]);
  printItemCost(items[1]);
  printf("\nTotal: $%d", calcItemCost(items[0]) + calcItemCost(items[1]));
}
