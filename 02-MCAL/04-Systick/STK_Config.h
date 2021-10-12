/*********************************/
/* Author   :   Spectrum         */
/* Date     :   20 Sep 2021      */
/* Version  :   V01              */
/*********************************/

#ifndef STK_CONFIG_H_
#define STK_CONFIG_H_

typedef	enum
{
	CLK_AHB_8,CLK_AHB
}STK_CLK;

typedef struct
{
	STK_CLK	clk;
}STK_Configure;


/*STK_CTRL PINS*/
#define COUNTFLAG	16
#define CLKSOURCE	2
#define TICKINT		1
#define ENABLE		0

#endif /* 02_MCAL_SYSTICK_STK_CONFIG_H_ */
