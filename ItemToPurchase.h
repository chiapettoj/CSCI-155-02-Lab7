/*
  AUTHOR(S): John R. Chiapetto
  TEAMMATES: Sam Schoonveld
  CLASS:     CSCI 155-02
  FILE:      ItemToPurchase.h
  DATE:      11/07/2018
  DESC:      Header to define the ItemToPurchase type and declare the methods
             makeItemBlank, printItemCost, and addItemToCart;
*/

typedef struct {
  char itemName[32];
  int itemCount;
  int itemCost;
} ItemToPurchase;

void makeItemBlank(ItemToPurchase * itp);

void printItemCost(ItemToPurchase itp);

void addItemToCart(ItemToPurchase items[], int index);
