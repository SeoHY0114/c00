#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	char c;
	read(0, &c, 1);
	ft_putchar(c);
	ft_putchar('\n');
}
