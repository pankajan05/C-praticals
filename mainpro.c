/*ABC company Stock details
designed by Pankajan
date started 15.05.2018*/


#include<stdio.h>
#include<math.h>

//prototype
void add_stock();
void purchase_items();
void sale_items();
void stock_details();
void sorted_purchase();
void sorted_sales();

static int stock[99][4];//save the stock details
static int sales[99][3];//save the sales details
static int purchase[99][3];//save the purchase details

int main()
{
	int y,x;
	
	printf("\n\nWelcome to the Company ABC.\n\n");
	
	for(x=1; x==1;)
	{
	//display the menu
	
	printf("\n\nMENU\n1)Show stock details.\n");
	printf("2)Purchase items details.\n");
	printf("3)Sold items details.\n");
	printf("4)Add items stock.\n");
	printf("5)Display sorted sales details with sub totals and grand totals.\n");
	printf("6)Display sorted purchase details with sub totals and grand totals.\n");
	printf("7)Exit.\n\n\n");
	
	//prompt the user to Enter the choice NO
	printf("Enter your choice NO: ");
	scanf("%d",&y);
	
	//decide to what function run
	switch(y)
	{
		case 1:
			stock_details();
			break;
		case 2:
			purchase_items();
			break;
		case 3:
			sale_items();
			break;
		case 4:
			add_stock();
			break;
		case 5:
			sorted_sales();
			break;
		case 6:
			sorted_purchase();
			break;
		case 7:
			x=0;
			break;
		default:
			printf("Sorry No choice in that NO\n\n");
		
	}
	}
	return 0;
}

//use function to add stocks
void add_stock()
{
	int x;
	static int y=0;
	
	//decide when close
	printf("Enter 1 to continue or 0 to close: ");
	scanf("%d",&x);
	
	//loop to Enter many times
	while(x==1)
	{	
	
	//commands for ask and save the details
	printf("Enter the Item code: ");
	scanf("%d",&stock[y][0]);
	printf("Enter the unit Price: ");
	scanf("%d",&stock[y][1]);
	printf("Enter the Discount rate: ");
	scanf("%d",&stock[y][2]);
	printf("Enter the Discount level: ");
	scanf("%d",&stock[y][3]);
	printf("Enter the Current stock: ");
	scanf("%d",&stock[y][4]);
		
	printf("Enter 1 to continue or 0 to close: ");
	scanf("%d",&x);
	y++;
	}
}

//use functions to purchase items
void purchase_items()
{
	int x;//variable use to run loop
	
	printf("purchase item details\n\n");
	printf("%19s %15s %15s \n","Transection ID","Item code","Item count");	
	
	//loop to print the details of stock
	for(x=0;x<=99;x++)
	{
			//condition to close the loop when entered data showed
		if(purchase[x][0]==0)
			x=100;
		
		printf("%19d %15d %15d  \n",purchase[x][0],purchase[x][1],purchase[x][2]);
	}	
}

//use function to sold items
void sale_items()
{
 	int x;//variable use to run loop
	
	printf("Sales item details\n\n");
	printf("%19s %15s %15s \n","Transection ID","Item code","Item count");	
	
	//loop to print the details of stock
	for(x=0;x<=99;x++)
	{
			//condition to close the loop when entered data showed
		if(sales[x][0]==0)
			x=100;
		
		printf("%19d %15d %15d  \n",sales[x][0],sales[x][1],sales[x][2]);
	}		
}

//use function to display stock details
void stock_details()
{
	int x;//variable use to run loop
	
	printf("Stock details\n\n");
	printf("%15s %15s %15s %16s %15s\n","Item code","Unit Price","Discount Rate","Discount level","Current stock");	
	
	//loop to print the details of stock
	for(x=0;x<=99;x++)
	{
			//condition to close the loop when entered data only showed
		if(stock[x][3]==0)
			x=100;
		else
		printf("%15d %15d %15d %16d %15d \n",stock[x][0],stock[x][1],stock[x][2],stock[x][3],stock[x][4]);
		
	
	}	
}

//use function to sorted sales
void sorted_sales()
{
	
}

//use function to sorted purchase
void sorted_purchase()
{
	
}
