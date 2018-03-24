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
static const char *ng0 = "C:/Users/Zain/Desktop/FPGA/image_processing/IMAGE_PROCESSING/processor.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1640669797_3212880686_p_0(char *t0)
{
    char t10[16];
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 6080U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 17384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 5800U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33641);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t5 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33657);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33673);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33689);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33705);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33721);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 11880U);
    t3 = *((char **)t1);
    t1 = (t0 + 32748U);
    t4 = (t0 + 33737);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t10);
    if (t2 != 0)
        goto LAB29;

LAB30:
LAB14:    goto LAB3;

LAB5:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 12040U);
    t7 = *((char **)t3);
    t3 = (t0 + 32764U);
    t8 = (t0 + 33609);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 15;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t7, t3, t8, t10);
    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 12040U);
    t3 = *((char **)t1);
    t1 = (t0 + 32764U);
    t4 = (t0 + 33625);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t3, t1, t4, t20);
    t11 = (t10 + 12U);
    t14 = *((unsigned int *)t11);
    t21 = (1U * t14);
    t2 = (16U != t21);
    if (t2 == 1)
        goto LAB11;

LAB12:    t12 = (t0 + 17576);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB8:    xsi_set_current_line(195, ng0);
    t12 = (t0 + 17512);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_delta(t12, 6U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_size_not_matching(16U, t21, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(201, ng0);
    t9 = (t0 + 17512);
    t12 = (t9 + 56U);
    t16 = *((char **)t12);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 33649);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    t9 = (t0 + 5800U);
    t11 = *((char **)t9);
    t6 = *((unsigned char *)t11);
    t15 = (t6 == (unsigned char)3);
    t2 = t15;
    goto LAB18;

LAB19:    xsi_set_current_line(204, ng0);
    t9 = (t0 + 17512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 33665);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB21:    xsi_set_current_line(207, ng0);
    t9 = (t0 + 17512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 33681);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB23:    xsi_set_current_line(210, ng0);
    t9 = (t0 + 17512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 3U, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 33697);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB25:    xsi_set_current_line(213, ng0);
    t9 = (t0 + 17512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 4U, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 33713);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB27:    xsi_set_current_line(216, ng0);
    t9 = (t0 + 17512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 5U, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 33729);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB29:    xsi_set_current_line(219, ng0);
    t9 = (t0 + 12040U);
    t11 = *((char **)t9);
    t9 = (t0 + 32764U);
    t12 = (t0 + 33745);
    t17 = (t20 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 15;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t22 = (15 - 0);
    t14 = (t22 * 1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t5 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t11, t9, t12, t20);
    if (t5 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB14;

LAB31:    xsi_set_current_line(220, ng0);
    t18 = (t0 + 17512);
    t19 = (t18 + 56U);
    t23 = *((char **)t19);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_delta(t18, 6U, 1, 0LL);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 33761);
    t4 = (t0 + 17640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB32;

}

static void work_a_1640669797_3212880686_p_1(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(516, ng0);

LAB3:    t1 = (t0 + 33769);
    t3 = (t0 + 7880U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 32396U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (3U + 12U);
    t12 = (15U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 17704);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 15U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 17400);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(15U, t11, 0);
    goto LAB6;

}

static void work_a_1640669797_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(533, ng0);

LAB3:    t1 = (t0 + 11080U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 17768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 17416);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1640669797_3212880686_p_3(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(537, ng0);

LAB3:    t1 = (t0 + 11720U);
    t2 = *((char **)t1);
    t3 = (6 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 17832);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 17432);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1640669797_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1640669797_3212880686_p_0,(void *)work_a_1640669797_3212880686_p_1,(void *)work_a_1640669797_3212880686_p_2,(void *)work_a_1640669797_3212880686_p_3};
	xsi_register_didat("work_a_1640669797_3212880686", "isim/read_lena_isim_beh.exe.sim/work/a_1640669797_3212880686.didat");
	xsi_register_executes(pe);
}
