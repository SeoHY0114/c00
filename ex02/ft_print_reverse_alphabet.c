#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void){
	int n = 122;
	while (n >= 97){
		write(1, &n, 1);
		n--;
	}
}

int main(){
	ft_print_reverse_alphabet();
	printf("\n");
	return 0;
}
