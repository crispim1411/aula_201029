/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_rc' in SOPC Builder design 'aula_201029_qsys'
 * SOPC Builder design path: D:/Users/rosdrigo/Documents/Eng-eletronica/Dispositivos_Reprovaveis/aula_201029/aula_201029_qsys.sopcinfo
 *
 * Generated: Thu Oct 29 21:23:21 BRST 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x20820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x10020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "nios2_qsys_rc"
#define ALT_CPU_RESET_ADDR 0x10000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x20820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x10020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_RESET_ADDR 0x10000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone II"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_rc"
#define ALT_STDERR_BASE 0x21088
#define ALT_STDERR_DEV jtag_uart_rc
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_rc"
#define ALT_STDIN_BASE 0x21088
#define ALT_STDIN_DEV jtag_uart_rc
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_rc"
#define ALT_STDOUT_BASE 0x21088
#define ALT_STDOUT_DEV jtag_uart_rc
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "aula_201029_qsys"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * hex0_rc configuration
 *
 */

#define ALT_MODULE_CLASS_hex0_rc altera_avalon_pio
#define HEX0_RC_BASE 0x21040
#define HEX0_RC_BIT_CLEARING_EDGE_REGISTER 0
#define HEX0_RC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX0_RC_CAPTURE 0
#define HEX0_RC_DATA_WIDTH 7
#define HEX0_RC_DO_TEST_BENCH_WIRING 0
#define HEX0_RC_DRIVEN_SIM_VALUE 0
#define HEX0_RC_EDGE_TYPE "NONE"
#define HEX0_RC_FREQ 50000000
#define HEX0_RC_HAS_IN 0
#define HEX0_RC_HAS_OUT 1
#define HEX0_RC_HAS_TRI 0
#define HEX0_RC_IRQ -1
#define HEX0_RC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX0_RC_IRQ_TYPE "NONE"
#define HEX0_RC_NAME "/dev/hex0_rc"
#define HEX0_RC_RESET_VALUE 0
#define HEX0_RC_SPAN 16
#define HEX0_RC_TYPE "altera_avalon_pio"


/*
 * jtag_uart_rc configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_rc altera_avalon_jtag_uart
#define JTAG_UART_RC_BASE 0x21088
#define JTAG_UART_RC_IRQ 0
#define JTAG_UART_RC_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_RC_NAME "/dev/jtag_uart_rc"
#define JTAG_UART_RC_READ_DEPTH 64
#define JTAG_UART_RC_READ_THRESHOLD 8
#define JTAG_UART_RC_SPAN 8
#define JTAG_UART_RC_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_RC_WRITE_DEPTH 64
#define JTAG_UART_RC_WRITE_THRESHOLD 8


/*
 * key_rc configuration
 *
 */

#define ALT_MODULE_CLASS_key_rc altera_avalon_pio
#define KEY_RC_BASE 0x21060
#define KEY_RC_BIT_CLEARING_EDGE_REGISTER 0
#define KEY_RC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEY_RC_CAPTURE 0
#define KEY_RC_DATA_WIDTH 4
#define KEY_RC_DO_TEST_BENCH_WIRING 0
#define KEY_RC_DRIVEN_SIM_VALUE 0
#define KEY_RC_EDGE_TYPE "NONE"
#define KEY_RC_FREQ 50000000
#define KEY_RC_HAS_IN 1
#define KEY_RC_HAS_OUT 0
#define KEY_RC_HAS_TRI 0
#define KEY_RC_IRQ -1
#define KEY_RC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEY_RC_IRQ_TYPE "NONE"
#define KEY_RC_NAME "/dev/key_rc"
#define KEY_RC_RESET_VALUE 0
#define KEY_RC_SPAN 16
#define KEY_RC_TYPE "altera_avalon_pio"


/*
 * ledr_rc configuration
 *
 */

#define ALT_MODULE_CLASS_ledr_rc altera_avalon_pio
#define LEDR_RC_BASE 0x21050
#define LEDR_RC_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_RC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDR_RC_CAPTURE 0
#define LEDR_RC_DATA_WIDTH 8
#define LEDR_RC_DO_TEST_BENCH_WIRING 0
#define LEDR_RC_DRIVEN_SIM_VALUE 0
#define LEDR_RC_EDGE_TYPE "NONE"
#define LEDR_RC_FREQ 50000000
#define LEDR_RC_HAS_IN 0
#define LEDR_RC_HAS_OUT 1
#define LEDR_RC_HAS_TRI 0
#define LEDR_RC_IRQ -1
#define LEDR_RC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDR_RC_IRQ_TYPE "NONE"
#define LEDR_RC_NAME "/dev/ledr_rc"
#define LEDR_RC_RESET_VALUE 0
#define LEDR_RC_SPAN 16
#define LEDR_RC_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_rc configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_rc altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_RC_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_RC_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_RC_BASE 0x10000
#define ONCHIP_MEMORY2_RC_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_RC_DUAL_PORT 0
#define ONCHIP_MEMORY2_RC_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_RC_INIT_CONTENTS_FILE "aula_201029_qsys_onchip_memory2_rc"
#define ONCHIP_MEMORY2_RC_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_RC_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_RC_IRQ -1
#define ONCHIP_MEMORY2_RC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_RC_NAME "/dev/onchip_memory2_rc"
#define ONCHIP_MEMORY2_RC_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_RC_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_RC_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_RC_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_RC_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_RC_SIZE_VALUE 40960
#define ONCHIP_MEMORY2_RC_SPAN 40960
#define ONCHIP_MEMORY2_RC_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_RC_WRITABLE 1


/*
 * sw_rc configuration
 *
 */

#define ALT_MODULE_CLASS_sw_rc altera_avalon_pio
#define SW_RC_BASE 0x21070
#define SW_RC_BIT_CLEARING_EDGE_REGISTER 0
#define SW_RC_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SW_RC_CAPTURE 0
#define SW_RC_DATA_WIDTH 8
#define SW_RC_DO_TEST_BENCH_WIRING 0
#define SW_RC_DRIVEN_SIM_VALUE 0
#define SW_RC_EDGE_TYPE "NONE"
#define SW_RC_FREQ 50000000
#define SW_RC_HAS_IN 1
#define SW_RC_HAS_OUT 0
#define SW_RC_HAS_TRI 0
#define SW_RC_IRQ -1
#define SW_RC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SW_RC_IRQ_TYPE "NONE"
#define SW_RC_NAME "/dev/sw_rc"
#define SW_RC_RESET_VALUE 0
#define SW_RC_SPAN 16
#define SW_RC_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
