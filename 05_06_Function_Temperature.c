#include <stdio.h>

float Fahrenheit(float a, int b)
{
    if(b==1)//for celsius
    {
        return 1.8*a+32;
    }
    else if(b==2)//for kelvin
    {
        return 1.8*(a-273)+32;
    }
    else if(b==3)//for rankine
    {
        return a - 459.67;
    }
}

float Celsius(float a, int b)
{
    if(b==1)//for fahrenheit
    {
        return 5*(a-32)/9;
    }
    else if(b==2)//for kelvin
    {
        return a-273;
    }
    else if(b==3)//for rankine
    {
        return (a - 491.67) * 5/9;
    }
}

float Kelvin(float a, int b)
{
    if(b==1)//for fahrenheit
    {
        return 5*(a-32)/9+273;
    }
    else if(b==2)//for  celsius
    {
        return a+273;
    }
    else if(b==3)//for rankine
    {
        return a*5/9;
    }
}

float Rankine(float a, int b)
{
    if(b==1)//for fahrenheit
    {
        return a + 459.67;
    }
    else if(b==2)//for celsius
    {
        return a*9/5 + 491.67;
    }
    else if(b==3)//for kelvin
    {
        return 1.8*a;
    }
}
int main()
{
    int Choice;
    float temper;
        printf("1. Fahrenheit--> '1'\n2. Celsius--> '2'\n3. Kelvin--> '3'\n4. Rankine--> '4'\n");
    printf("Chose Your Temperature Scale according to given value: ");
    scanf("%d",&Choice);
    if(Choice==1)
    {
        printf("Enter the scale Value: ");
        scanf("%f",&temper);
        printf("\nCelsius= %.2f",Celsius(temper,1));
        printf("\nKelvin= %.2f",Kelvin(temper,1));
        printf("\nRankine= %.2f",Rankine(temper,1));
    }
    else if(Choice==2)
    {
        printf("Enter the scale Value: ");
        scanf("%f",&temper);
        printf("\nFahrenheit= %.2f",Fahrenheit(temper,1));
        printf("\nKelvin= %.2f",Kelvin(temper,2));
        printf("\nRankine= %.2f",Rankine(temper,2));
    }
    else if(Choice==3)
    {
        printf("Enter the scale Value: ");
        scanf("%f",&temper);
        printf("\nFahrenheit= %.2f",Fahrenheit(temper,2));
        printf("\nCelsius= %.2f",Celsius(temper,2));
        printf("\nRankine= %.2f",Rankine(temper,3));
    }

    else if(Choice==4)
    {
        printf("Enter the scale Value: ");
        scanf("%f",&temper);
        printf("\nFahrenheit= %.2f",Fahrenheit(temper,3));
        printf("\nCelsius= %.2f",Celsius(temper,3));
        printf("\nKelvin= %.2f",Kelvin(temper,3));
    }
    else
        printf("\n\nWrong Number was submitted!!\nPlease Enter the Correct number and try again:");

    return 0;
}
