#include <stdio.h>
#include <stdlib.h>

int calc_salary(int salary_hour, int hours);
int calc_importe(int salary);

int main()
{
    int salary_hour, hours, salary, result;
    salary_hour = 0;
    hours = 0;
    salary = 0;
    result = 0;

    printf("Ingrese el salario por hora: ");
    scanf("%d", &salary_hour);
    printf("Ingrese el total de horas laboradas al mes: ");
    scanf("%d", &hours);

    salary = calc_salary(salary_hour, hours);

    result = calc_importe(salary);

    printf("El salrio sin importe de renta: %d\n", salary);
    printf("El salrio con importe de renta: %d\n", result);

    return 0;
}

/* Calculate the total salary at month */
int calc_salary(int salary_hour, int hours)
{
    int total = 0;

    total = salary_hour * hours;

    return total;
}

/* Calculate the total import of rent per salary */
int calc_importe(int salary)
{
    int result, diff, base;
    result = 0;
    diff = 0;
    base = 800000;

    if (salary < base)
    {
        result = salary;
        
    } else {
        if (salary >= base || salary < 1200000)
        {
            diff = salary - base;
            diff = diff * 0.10; // calculate 10% to the difference
            result = salary - diff; // salary subtract the difference
        } else {
            if (salary >= 1200000 || salary < 1800000)
            {
                diff = salary - base;
                diff = diff * 0.15; // calculate 15% to the difference
                result = salary - diff; // salary subtract the difference
            } else {
                diff = salary - base;
                diff = diff * 0.120; // calculate 20% to the difference
                result = salary - diff; // salary subtract the difference
            }
            
        }
    }

    

    return result;
}