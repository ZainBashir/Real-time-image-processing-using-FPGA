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
extern char *STD_STANDARD;
static const char *ng1 = "Function if_then_else ended without a return statement";
extern char *IEEE_P_2592010699;
static const char *ng3 = "Function map_ready_valid ended without a return statement";

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


int xilinxcorelib_a_2993431459_3212880686_sub_3672023036_3057020925(char *t1, unsigned char t2, int t3, int t4)
{
    char t5[128];
    char t6[16];
    char t10[8];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    *((int *)t10) = 0;
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t6 + 4U);
    *((unsigned char *)t13) = t2;
    t14 = (t6 + 5U);
    *((int *)t14) = t3;
    t15 = (t6 + 9U);
    *((int *)t15) = t4;
    t16 = (!(t2));
    if (t16 != 0)
        goto LAB2;

LAB4:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t3;

LAB3:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t19 = *((int *)t9);
    t0 = t19;

LAB1:    return t0;
LAB2:    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((int *)t17) = t4;
    goto LAB3;

LAB5:;
}

char *xilinxcorelib_a_2993431459_3212880686_sub_3999167911_3057020925(char *t1, char *t2, unsigned char t3, char *t4, char *t5, char *t6, char *t7)
{
    char t9[40];
    char *t0;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    char *t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;

LAB0:    t10 = (t9 + 4U);
    *((unsigned char *)t10) = t3;
    t11 = (t9 + 5U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t9 + 13U);
    *((char **)t13) = t5;
    t14 = (t9 + 21U);
    t15 = (t6 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (t9 + 29U);
    *((char **)t16) = t7;
    t17 = (!(t3));
    if (t17 != 0)
        goto LAB6;

LAB8:    t18 = (t5 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t4, t19);
    t20 = (t5 + 0U);
    t21 = *((int *)t20);
    t22 = (t5 + 4U);
    t23 = *((int *)t22);
    t24 = (t5 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;

LAB1:    return t0;
LAB3:    *((char **)t11) = t4;
    goto LAB2;

LAB5:    *((char **)t14) = t6;
    goto LAB4;

LAB6:    t18 = (t7 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t6, t19);
    t20 = (t7 + 0U);
    t21 = *((int *)t20);
    t22 = (t7 + 4U);
    t23 = *((int *)t22);
    t24 = (t7 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    goto LAB1;

LAB7:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

unsigned char xilinxcorelib_a_2993431459_3212880686_sub_2920649328_3057020925(char *t1, int t2, unsigned char t3, unsigned char t4, unsigned char t5)
{
    char t7[16];
    unsigned char t0;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t2;
    t9 = (t7 + 8U);
    *((unsigned char *)t9) = t3;
    t10 = (t7 + 9U);
    *((unsigned char *)t10) = t4;
    t11 = (t7 + 10U);
    *((unsigned char *)t11) = t5;
    t12 = (t2 == 5);
    if (t12 != 0)
        goto LAB2;

LAB4:    t12 = (t2 == 6);
    if (t12 != 0)
        goto LAB6;

LAB7:    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t0 = t12;

LAB1:    return t0;
LAB2:    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t0 = t13;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t0 = t13;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

static void xilinxcorelib_a_2993431459_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:
LAB3:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 63616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 63536);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xilinxcorelib_a_2993431459_3212880686_init()
{
	static char *pe[] = {(void *)xilinxcorelib_a_2993431459_3212880686_p_0};
	static char *se[] = {(void *)xilinxcorelib_a_2993431459_3212880686_sub_3672023036_3057020925,(void *)xilinxcorelib_a_2993431459_3212880686_sub_3999167911_3057020925,(void *)xilinxcorelib_a_2993431459_3212880686_sub_2920649328_3057020925};
	xsi_register_didat("xilinxcorelib_a_2993431459_3212880686", "isim/read_lena_isim_beh.exe.sim/xilinxcorelib/a_2993431459_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
