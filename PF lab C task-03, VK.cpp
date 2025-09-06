#include <stdio.h>
int main()
{
	int birth_year;
	printf("Enter your birth year: ");
	scanf("%d", &birth_year);
	

	int current_year;
	printf("Enter current year: ");
	scanf("%d", &current_year);
	
	int age=current_year-birth_year;
	printf("Your age= %d", age);
	
	return 0;
}
