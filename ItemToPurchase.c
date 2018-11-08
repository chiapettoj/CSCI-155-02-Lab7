/*
  AUTHOR(S): John R. Chiapetto
  TEAMMATES: Sam Schoonveld
  CLASS:     CSCI 155-02
  FILE:      ItemToPurchase.c
  DATE:      11/07/2018
  DESC:      Accompaniment to the ItemToPurchase.h header file. Defines methods
             that are declared in the header.
*/

#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

void makeItemBlank(ItemToPurchase * itp) {
  strcpy((* itp).itemName, "none");
  (* itp).itemCost = 0;
  (* itp).itemCount = 0;
}

int calcItemCost(ItemToPurchase itp) {
  return itp.itemCost * itp.itemCount;
}

void printItemCost(ItemToPurchase itp) {
  int total_cost = calcItemCost(itp);
  printf(
    "%s %d @ $%d = $%d\n",
    itp.itemName,
    itp.itemCount,
    itp.itemCost,
    total_cost
  );
}

void addItemToCart(ItemToPurchase items[], int index) {
  char word2[25];

  printf("Enter the item name:\n");
  scanf("%s", items[index].itemName);
  scanf("%s", word2);

  strcat(items[index].itemName, " ");
  strcat(items[index].itemName, word2);

  printf("Enter the item price:\n");
  scanf("%d", &items[index].itemCost);

  printf("Enter the item quantity:\n");
  scanf("%d", &items[index].itemCount);
}
