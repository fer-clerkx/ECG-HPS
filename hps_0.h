#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'system' in
 * file './system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following master:
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'data_buffer', class 'altera_avalon_pio'
 * The macros are prefixed with 'DATA_BUFFER_'.
 * The prefix is the slave descriptor.
 */
#define DATA_BUFFER_COMPONENT_TYPE altera_avalon_pio
#define DATA_BUFFER_COMPONENT_NAME data_buffer
#define DATA_BUFFER_BASE 0x0
#define DATA_BUFFER_SPAN 16
#define DATA_BUFFER_END 0xf
#define DATA_BUFFER_IRQ 0
#define DATA_BUFFER_BIT_CLEARING_EDGE_REGISTER 0
#define DATA_BUFFER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DATA_BUFFER_CAPTURE 1
#define DATA_BUFFER_DATA_WIDTH 13
#define DATA_BUFFER_DO_TEST_BENCH_WIRING 1
#define DATA_BUFFER_DRIVEN_SIM_VALUE 0
#define DATA_BUFFER_EDGE_TYPE RISING
#define DATA_BUFFER_FREQ 50000000
#define DATA_BUFFER_HAS_IN 1
#define DATA_BUFFER_HAS_OUT 0
#define DATA_BUFFER_HAS_TRI 0
#define DATA_BUFFER_IRQ_TYPE EDGE
#define DATA_BUFFER_RESET_VALUE 0


#endif /* _ALTERA_HPS_0_H_ */
