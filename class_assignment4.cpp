#include <iostream>

using namespace std;

class CoffeeMachine {

private:

int coffee;

int water;

int sugar;

public:

CoffeeMachine(int coffee, int water, int sugar) {

this->coffee = coffee;

this->water = water;

this->sugar = sugar;

}

void drinkEspresso() {

coffee--;

water--;

}

void drinkAmericano() {

coffee--;

water -= 2;

}

void drinkSugarCoffee() {

coffee--;

water -= 2;

sugar--;

}