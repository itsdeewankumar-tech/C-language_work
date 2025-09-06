#include <stdio.h>
int main(){
	int current_year, birth_year,age;
	printf("Enter Current Year :");
	scanf("%d",&current_year);
	printf("Enter Your Birth Year : ");
	scanf("%d",&birth_year);
	age=current_year-birth_year;
	printf("Your Age is : %d",age);
	return 0;
}
