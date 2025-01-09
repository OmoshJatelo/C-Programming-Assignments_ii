#include <stdio.h>

#define NUM_OF_SALESMEN 10
#define NUM_ITEMS 5
char salesmen[NUM_OF_SALESMEN][48];//declare an array to store the salesmen
int items[NUM_ITEMS][NUM_OF_SALESMEN]; //declare an array to store the sales made by the sales maen
int total_sales[NUM_OF_SALESMEN]={0}; //delclare an array tha stores the tota sales for each sales man
int grand_total=0; // initialize the grand totoal to zero

int main()
{
    for(int x=0;x<NUM_OF_SALESMEN;x++)
    {
        printf("enter the name of salesman %d:\n",x+1);
        scanf("%s",salesmen[x]); //enter the sales men names and store them in the sales men array
        for(int y=0;y<NUM_ITEMS;y++) //enter the 5 sales for each sales man before entering the nex salesman
        {
            printf("enter item %d sale amount:\n",y+1);
            scanf("%d",&items[x][y]);
            total_sales[x]+=items[x][y];//increment total sales for each sales man after entering each sale
        }
        grand_total+=total_sales[x];//increment the grand totoal with the total sales before moving to the next salesman

    }
printf("\nName \t\tItem1 \tItem2  \tItem3 \tItem4 \tItem5 \tTotalSales\n");
    printf("_________________________________________________________________\n");


    for(int v=0;v<NUM_OF_SALESMEN;v++) /*display the above information*/
    {
        printf("%-10s",salesmen[v]);//give each sales man name a fieldwidth of 10 and align the names to the left wth a - sign
        for(int w=0;w<NUM_ITEMS;w++)
        {
            printf("\t%d",items[v][w]);
        }
        printf("\t%d\t\n",total_sales[v]);
    }
    printf("\nGRAND TOTAL is %d\n\n",grand_total);

    return 0;

}
