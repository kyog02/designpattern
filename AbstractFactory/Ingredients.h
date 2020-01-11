#ifndef INGREDIENTSH
#define INGREDIENTSH

#include "IIngredients.h"

/**
 * Dough
 */
class ThinCrustDough:public Dough{};


/**
 * Sauce
 */
class MarinaraSauce:public Sauce{};

/**
 * Cheese
 */
class ReggianoCheese:public Cheese{};

/**
 * Veggies
 */
class Garlic:public Veggies{};
class Onion:public Veggies{};
class Mushroom:public Veggies{};
class Redpepper:public Veggies{};

/**
 * Pepperoni
 */
class SlicedPepperoni:public Pepperoni{};

/**
 * Clams
 */
class FreshClams:public Clams{};

#endif // INGREDIENTSH