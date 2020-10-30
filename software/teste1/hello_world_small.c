#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"

//biblioteca para usar delay
#include <unistd.h>

#include "sys/alt_stdio.h"

//comandos para leitura e escrita nas portas IO
#define PORT(base) IORD_ALTERA_AVALON_PIO_DATA(base)
#define LAT(base, data) IOWR_ALTERA_AVALON_PIO_DATA(base, data)

alt_u8 hex0, key, sw, ledr;

void setup(void)
{
	LAT(HEX0_RC_BASE, 0x5b);
}

void loop(void)
{
	sw = PORT(SW_RC_BASE); 	//leitura de entrada
	ledr = sw; 				//processamento de dado
	LAT(LEDR_RC_BASE, ledr); //escrita de dado
	usleep(10000);
}

int main()
{ 
  alt_putstr("Hello from Nios II!\n");

  setup();

  while (1) loop();

  return 0;
}
