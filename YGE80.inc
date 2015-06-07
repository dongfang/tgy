/*
 * YGE80.inc
 *
 *  Created: 5/28/2015 16:37:30
 *   Author: dongfang
 */ 
 ;***********************************************************
;* YGE80A                                                  *
;***********************************************************

.equ	F_CPU		= 16000000
.equ	USE_INT0	= 0
.equ	USE_I2C		= 0
.equ	USE_UART	= 1
.equ	USE_ICP		= 1

.equ	DEAD_LOW_NS	= 2200
.equ	DEAD_HIGH_NS 	= 24000

;*********************
; PORT B definitions *
;*********************
;.equ			= 7
;.equ			= 6
;.equ			= 5	(sck)
;.equ			= 4	(miso)
.equ	ApFET		= 1	;o (mosi)
.equ	BpFET		= 2	;o
.equ	CpFET		= 0	;o
.equ	rcp_in		= 0	;i r/c pulse input

.equ	ApFET_port	= PORTB
.equ	BpFET_port	= PORTB
.equ	CpFET_port	= PORTB

;*********************
; PORT C definitions *
;*********************
;.equ	mux_voltage	= 7	; ADC7 voltage input
;.equ			= 6	; ADC6
.equ	i2c_clk		= 5	; ADC5/SCL
.equ	i2c_data	= 4	; ADC4/SDA
;.equ	mux_temperature	= 0	; ADC3 temperature input ;; has none!!
.equ	mux_c		= 7	; ADC7 phase input
.equ	mux_b		= 6	; ADC5 phase input
.equ	mux_a		= 3	; ADC3 phase input

.equ	O_POWER		= 18
.equ	O_GROUND	= 1

.equ	INIT_PC		= (1<<i2c_clk)+(1<<i2c_data)
.equ	DIR_PC		= 0

;*********************
; PORT D definitions *
;*********************
.equ	WarnLED		= 2
.equ	AnFET		= 4
.equ	BnFET		= 5
.equ	CnFET		= 3
.equ	StatLED		= 7

.equ	INIT_PD		= 0
.equ	DIR_PD		= (1<<AnFET)+(1<<BnFET)+(1<<CnFET)

.equ	AnFET_port	= PORTB
.equ	BnFET_port	= PORTB
.equ	CnFET_port	= PORTB

.equ	INIT_PB		= 0
.equ	DIR_PB		= (1<<ApFET)+(1<<BpFET)+(1<<CpFET)+(1<<AnFET)+(1<<BnFET)+(1<<CnFET)

.MACRO RED_on
.ENDMACRO
.MACRO RED_off
.ENDMACRO
.MACRO GRN_on
.ENDMACRO
.MACRO GRN_off
.ENDMACRO
