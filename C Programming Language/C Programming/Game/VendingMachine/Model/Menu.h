#pragma once
//********************************************
// char* title = "printMenu"
// made by Lieman at 2020.05.29
//
// description:
//	printMenu example
//********************************************





// preprocessor
#include <stdio.h>
#include <stdlib.h>
#include "Beverage.h"

#pragma warning(disable:4996)





// global variable
typedef struct Menu {
    Beverage** beverageArray; // 더블포인터 = 포인터의 포인터
    int count;
} Menu;





// function
int _Menu_cheappestCost(Menu* menu) {
    if (menu->count == 0) {
        return 0;
    }

    int cheappestCost = menu->beverageArray[0]->cost;

    for (int index = 1; index < menu->count; index++) {
        int beverageCost = menu->beverageArray[index]->cost;
        if (cheappestCost > beverageCost) {
            cheappestCost = beverageCost;
        }
    }

    return cheappestCost;
}

void _Menu_addBeverage(struct Menu* menu, Beverage* beverage) {
    menu->beverageArray = (Beverage**)realloc(menu->beverageArray, sizeof(Beverage*) * (menu->count + 1)); // memory leak warning

    menu->beverageArray[menu->count] = beverage;
    menu->count++;
}

void _Menu_removeBeverage(struct Menu* menu, Beverage* beverage) {
    free(menu->beverageArray[menu->count - 1]);
}





// allocation
Menu* menu_alloc(Beverage** beverageArray, int beverageCount) {
    Menu* menu = (Menu*)malloc(sizeof(Menu));

    return menu;
}

// initializer
Menu* newMenu(Beverage** beverageArray, int beverageCount) {
    Menu* menu = menu_alloc(beverageArray, beverageCount);

    // initialize properties
    menu->beverageArray = beverageArray;
    menu->count = beverageCount;

    return menu;
}