#include<reg51.h>

void main() {
	unsigned char x;
	while(1) {
		for(x = 0;x<255;x++)
		P0 = x;
		for (x = 255;x >255;x--)
		P0 = x;
	}
}