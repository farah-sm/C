#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
// Keep asking user for change owed until they input a positive number
    do
    {

    cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;

// If cents is equal more than or equal to 25 execute code inside expression
    while (cents >= 25)
    {
// Subtract the value of cents by 25 and store in the variable cents
        cents -= 25;
// Increment quarters by 1
        quarters++;
    }
// Return the incremented amount of quarters
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
// If cents is equal more than or equal to 10 execute code inside expression
    while (cents >= 10)
    {
 // Subtract the value of cents by 10 and store in the variable cents
        cents -= 10;
// Increment dimes by 1
        dimes++;
    }
// Return the incremented amount of dimes
    return dimes;
}

int calculate_nickels(int cents)
{
   int nickels = 0;
// If cents is equal more than or equal to 5 execute code inside expression
    while (cents >= 5)
    {
// Subtract the value of cents by 5 and store in the variable cents
        cents -= 5;
// Increment nickels by 1
        nickels++;
    }
// Return the incremented amount of nickels
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
// If cents is equal more than or equal to 1 execute code inside expression
    while (cents >= 1)
    {
// Subtract the value of cents by 1 and store in the variable cents
        cents -= 1;
// Increment pennies by 1
        pennies++;
    }
// Return the incremented amount of pennies
    return pennies;
}

