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



static void unisim_a_2261302797_3723259517_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1608U);
    t9 = *((char **)t8);
    t10 = (1 - 3);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = (t7 == t14);
    if (t15 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t14 = (t7 == (unsigned char)2);
    if (t14 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t14 = (t7 == (unsigned char)3);
    if (t14 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 2992);
    t2 = (t1 + 56U);
    t8 = *((char **)t2);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 2912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t16 = (t0 + 1608U);
    t17 = *((char **)t16);
    t18 = (0 - 3);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = (t0 + 2992);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t22;
    xsi_driver_first_trans_fast_port(t23);
    goto LAB3;

LAB5:    t1 = (t0 + 1608U);
    t8 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t8 + t6);
    t15 = *((unsigned char *)t1);
    t9 = (t0 + 2992);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t15;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB3;

LAB7:    t1 = (t0 + 1608U);
    t8 = *((char **)t1);
    t3 = (1 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t8 + t6);
    t15 = *((unsigned char *)t1);
    t9 = (t0 + 2992);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t15;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB3;

}


extern void unisim_a_2261302797_3723259517_init()
{
	static char *pe[] = {(void *)unisim_a_2261302797_3723259517_p_0};
	xsi_register_didat("unisim_a_2261302797_3723259517", "isim/read_lena_isim_beh.exe.sim/unisim/a_2261302797_3723259517.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_2121384304_3723259517_init()
{
	static char *pe[] = {(void *)unisim_a_2261302797_3723259517_p_0};
	xsi_register_didat("unisim_a_2121384304_3723259517", "isim/read_lena_isim_beh.exe.sim/unisim/a_2121384304_3723259517.didat");
	xsi_register_executes(pe);
}
