#include <config.h>

#include <asm/arch/io.h>

SPL_STATIC_FUNC int serial_set_pin_port(unsigned port_base)
{
	// tx: GPIOAO_0
	// rx: GPIOAO_1
	// setbits_le32(P_AO_RTI_PIN_MUX_REG, 3<<11);
	return 0;
}
