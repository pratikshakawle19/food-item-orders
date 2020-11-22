#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	printf("pick an item:\n1.Pizza\n2.Burger\n3.Pasta\n4.French fries\n5.Sandwich");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("You ordered Pizza\n price = Rs239.");
			break;
			case 2:
			printf("You ordered Burger\n price = Rs129.");
			break;
			case 3:
			printf("You ordered Pasta\n price = Rs179.");
			break;
			case 4:
			printf("You ordered French fries\n price = Rs99.");
			break;
			case 5:
			printf("You ordered sandwich\n price = Rs129.");
			break;	
			default:printf("Invalid Choice");
	}
}
