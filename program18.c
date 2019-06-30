/*(SALES COMMISSION CALCULATOR)
One large chemical company pays its salespeople on a commission basis. The salesperson receive $200 per week
plus 9% of their gross sales that week. For example, a salesperson who sells %5000 worth of chemicals in a week
receives  $4oo plus 9% of $5000, or a total of %650. Develop a program that will input each salesperson's gross
sales for last week and will calculate and display that salesperson'n earnings. Process one salesperson's figures
at a time. Here is a sample input/output dialog:

Enter sales in dollars ( -1 to end ): 5000.00
Salary is: $650.00

Enter sales in dollars ( -1 to end ): 1234.56
Salary is: $311.11

Enter sales in dollars ( -1 to end ): 1088.89
Salary is: $298.00

Enter sales in dollars ( -1 to end ): -1


 */

#include <stdio.h>

int main( void )
{

    double dollars;
    double salary;

    printf("\nEnter sales in dollars (-1 to end): ");
    scanf("%lf", &dollars);

    while( dollars != -1 )
    {

        printf("Salary is: $%.2f\n", (200 + dollars * 9 / 100));

        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%lf", &dollars);

    }

    return 0;

}