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
extern char *UNISIM_P_3222816464;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
int unisim_p_3222816464_sub_3182959421_279109243(char *, char *, char *);


static void unisim_a_3449702363_3752513572_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    int t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 1888U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t10 = (1U + 1U);
    memcpy(t8, t1, t10);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t10 = (1 - 1);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t6 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 1;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t13 = (0 - 1);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t14;
    t15 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t1, t6);
    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t15;
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t16 = *((unsigned char *)t4);
    t17 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t5, t16);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB5;

LAB6:    t1 = (t0 + 1352U);
    t7 = *((char **)t1);
    t19 = *((unsigned char *)t7);
    t1 = (t0 + 1192U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t19, t20);
    t22 = (t21 == (unsigned char)2);
    t3 = t22;

LAB7:    if (t3 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1768U);
    t2 = *((char **)t1);
    t13 = (0 - 3);
    t10 = (t13 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t16 = *((unsigned char *)t1);
    t4 = (t0 + 1768U);
    t7 = *((char **)t4);
    t15 = (1 - 3);
    t14 = (t15 * -1);
    t30 = (1U * t14);
    t31 = (0 + t30);
    t4 = (t7 + t31);
    t17 = *((unsigned char *)t4);
    t18 = (t16 == t17);
    if (t18 == 1)
        goto LAB14;

LAB15:    t5 = (unsigned char)0;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t16 = (t5 == (unsigned char)2);
    if (t16 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t16 = (t5 == (unsigned char)3);
    if (t16 == 1)
        goto LAB24;

LAB25:    t3 = (unsigned char)0;

LAB26:    if (t3 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t16 = (t5 == (unsigned char)2);
    if (t16 == 1)
        goto LAB29;

LAB30:    t3 = (unsigned char)0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t16 = (t5 == (unsigned char)3);
    if (t16 == 1)
        goto LAB34;

LAB35:    t3 = (unsigned char)0;

LAB36:    if (t3 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 3392);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);

LAB9:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t1 = (t0 + 1768U);
    t9 = *((char **)t1);
    t1 = (t0 + 2008U);
    t23 = *((char **)t1);
    t13 = *((int *)t23);
    t15 = (t13 - 3);
    t10 = (t15 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t13);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t9 + t12);
    t24 = *((unsigned char *)t1);
    t25 = (t0 + 3392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t24;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB3;

LAB5:    t3 = (unsigned char)1;
    goto LAB7;

LAB8:    t49 = (t0 + 1768U);
    t50 = *((char **)t49);
    t51 = (0 - 3);
    t52 = (t51 * -1);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t49 = (t50 + t54);
    t55 = *((unsigned char *)t49);
    t56 = (t0 + 3392);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = t55;
    xsi_driver_first_trans_fast_port(t56);
    goto LAB9;

LAB11:    t26 = (t0 + 1768U);
    t27 = *((char **)t26);
    t40 = (0 - 3);
    t41 = (t40 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t26 = (t27 + t43);
    t22 = *((unsigned char *)t26);
    t28 = (t0 + 1768U);
    t29 = *((char **)t28);
    t44 = (2 - 3);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t28 = (t29 + t47);
    t24 = *((unsigned char *)t28);
    t48 = (t22 == t24);
    t3 = t48;
    goto LAB13;

LAB14:    t8 = (t0 + 1768U);
    t9 = *((char **)t8);
    t32 = (2 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t8 = (t9 + t35);
    t19 = *((unsigned char *)t8);
    t23 = (t0 + 1768U);
    t25 = *((char **)t23);
    t36 = (3 - 3);
    t37 = (t36 * -1);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t23 = (t25 + t39);
    t20 = *((unsigned char *)t23);
    t21 = (t19 == t20);
    t5 = t21;
    goto LAB16;

LAB17:    t9 = (t0 + 1768U);
    t23 = *((char **)t9);
    t32 = (0 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t9 = (t23 + t35);
    t20 = *((unsigned char *)t9);
    t25 = (t0 + 3392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t20;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB9;

LAB19:    t1 = (t0 + 1768U);
    t4 = *((char **)t1);
    t13 = (0 - 3);
    t10 = (t13 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t17 = *((unsigned char *)t1);
    t7 = (t0 + 1768U);
    t8 = *((char **)t7);
    t15 = (1 - 3);
    t14 = (t15 * -1);
    t30 = (1U * t14);
    t31 = (0 + t30);
    t7 = (t8 + t31);
    t18 = *((unsigned char *)t7);
    t19 = (t17 == t18);
    t3 = t19;
    goto LAB21;

LAB22:    t9 = (t0 + 1768U);
    t23 = *((char **)t9);
    t32 = (2 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t9 = (t23 + t35);
    t20 = *((unsigned char *)t9);
    t25 = (t0 + 3392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t20;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB9;

LAB24:    t1 = (t0 + 1768U);
    t4 = *((char **)t1);
    t13 = (2 - 3);
    t10 = (t13 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t17 = *((unsigned char *)t1);
    t7 = (t0 + 1768U);
    t8 = *((char **)t7);
    t15 = (3 - 3);
    t14 = (t15 * -1);
    t30 = (1U * t14);
    t31 = (0 + t30);
    t7 = (t8 + t31);
    t18 = *((unsigned char *)t7);
    t19 = (t17 == t18);
    t3 = t19;
    goto LAB26;

LAB27:    t9 = (t0 + 1768U);
    t23 = *((char **)t9);
    t32 = (0 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t9 = (t23 + t35);
    t20 = *((unsigned char *)t9);
    t25 = (t0 + 3392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t20;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB9;

LAB29:    t1 = (t0 + 1768U);
    t4 = *((char **)t1);
    t13 = (0 - 3);
    t10 = (t13 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t17 = *((unsigned char *)t1);
    t7 = (t0 + 1768U);
    t8 = *((char **)t7);
    t15 = (2 - 3);
    t14 = (t15 * -1);
    t30 = (1U * t14);
    t31 = (0 + t30);
    t7 = (t8 + t31);
    t18 = *((unsigned char *)t7);
    t19 = (t17 == t18);
    t3 = t19;
    goto LAB31;

LAB32:    t9 = (t0 + 1768U);
    t23 = *((char **)t9);
    t32 = (1 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t9 = (t23 + t35);
    t20 = *((unsigned char *)t9);
    t25 = (t0 + 3392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t20;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB9;

LAB34:    t1 = (t0 + 1768U);
    t4 = *((char **)t1);
    t13 = (1 - 3);
    t10 = (t13 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t4 + t12);
    t17 = *((unsigned char *)t1);
    t7 = (t0 + 1768U);
    t8 = *((char **)t7);
    t15 = (3 - 3);
    t14 = (t15 * -1);
    t30 = (1U * t14);
    t31 = (0 + t30);
    t7 = (t8 + t31);
    t18 = *((unsigned char *)t7);
    t19 = (t17 == t18);
    t3 = t19;
    goto LAB36;

}


extern void unisim_a_3449702363_3752513572_init()
{
	static char *pe[] = {(void *)unisim_a_3449702363_3752513572_p_0};
	xsi_register_didat("unisim_a_3449702363_3752513572", "isim/processor_isim_beh.exe.sim/unisim/a_3449702363_3752513572.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_4104775526_3752513572_init()
{
	static char *pe[] = {(void *)unisim_a_3449702363_3752513572_p_0};
	xsi_register_didat("unisim_a_4104775526_3752513572", "isim/processor_isim_beh.exe.sim/unisim/a_4104775526_3752513572.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_1446710196_3752513572_init()
{
	static char *pe[] = {(void *)unisim_a_3449702363_3752513572_p_0};
	xsi_register_didat("unisim_a_1446710196_3752513572", "isim/processor_isim_beh.exe.sim/unisim/a_1446710196_3752513572.didat");
	xsi_register_executes(pe);
}
