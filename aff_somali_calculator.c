#include <cs50.h>
#include <stdio.h>
#include <math.h>

double mult_nums(double a, double b), add_nums(double a, double b), subt_nums(double a, double b), div_nums(double a, double b), input, by, mul, sub, di, ad;
string name, tnx;
char operation, div, mult, add, subt;


int main()
{

div = '/';
mult = 'x';
subt = '-';
add = '+';

name = get_string("Asalamu alaykum saxiib, magaca?\n");
tnx = "Mahadsanid saxiib";
    do
    {
        operation = get_char("%s, somaha?\nMaxaad jeclaan lahayd inaan sameeyo? (/, x, + ama -)\n", name);
    }
    while (operation != div && operation != mult && operation != subt && operation != add);

    input = get_double("Lambarka koowaad: ");
    by = get_double("Lambarka labaad: ");

    if ( operation == div)
    {
        di =  div_nums(input, by);
        printf("%.2lf / %.2lf = %.2lf\n%s\n", input, by, di, tnx);
    }
    else if ( operation == mult)
    {
        mul =  mult_nums(input, by);
        printf("%.2lf x %.2lf = %.2lf\n%s\n", input, by, mul, tnx);
    }
    else if ( operation == add)
    {
        ad =  add_nums(input, by);
        printf("%.2lf + %.2lf = %.2lf\n%s\n", input, by, ad, tnx);
    }
    else if ( operation == subt)
    {
        sub = subt_nums(input, by);
        printf("%.2lf - %.2lf = %.2lf\n%s\n", input, by, sub, tnx);
    }

}


double mult_nums(double a, double b)
{
    double sum;
    sum = a * b;
    return sum;
}

double add_nums(double a, double b)
{
    double sum;
    sum = a + b;
    return sum;
}


double subt_nums(double a, double b)
{
    double sum;
    sum = a - b;
    return sum;
}

double div_nums(double a, double b)
{
    double sum;
    sum = a / b;
    return sum;
}

