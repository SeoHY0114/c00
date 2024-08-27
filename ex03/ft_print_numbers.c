#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void){
	int i = 0;
	char c;
	while (i < 10){
		c = 48 + i;
		write(1, &c, 1);
		i++;
	}
}

int main(){
	ft_print_numbers();
	printf("\n");
	return 0;
}
