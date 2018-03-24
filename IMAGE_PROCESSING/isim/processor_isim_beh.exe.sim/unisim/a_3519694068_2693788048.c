/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void unisim_a_3519694068_2693788048_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3520);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_3519694068_2693788048_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    int64 t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3536);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    t7 = (100 * 1LL);
    t3 = (t0 + 1512U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    t3 = (t0 + 3680);
    t10 = (t3 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t3, 0U, 1, t7);
    t14 = (t0 + 3680);
    xsi_driver_intertial_reject(t14, t7, t7);
    goto LAB6;

}


extern void unisim_a_3519694068_2693788048_init()
{
	static char *pe[] = {(void *)unisim_a_3519694068_2693788048_p_0,(void *)unisim_a_3519694068_2693788048_p_1};
	xsi_register_didat("unisim_a_3519694068_2693788048", "isim/processor_isim_beh.exe.sim/unisim/a_3519694068_2693788048.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_1769350033_2693788048_init()
{
	static char *pe[] = {(void *)unisim_a_3519694068_2693788048_p_0,(void *)unisim_a_3519694068_2693788048_p_1};
	xsi_register_didat("unisim_a_1769350033_2693788048", "isim/processor_isim_beh.exe.sim/unisim/a_1769350033_2693788048.didat");
	xsi_register_executes(pe);
}
