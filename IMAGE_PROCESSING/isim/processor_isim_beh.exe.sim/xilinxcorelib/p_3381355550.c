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
extern char *XILINXCORELIB_P_1837083571;
static const char *ng1 = "Function fn_dsp48_a_width ended without a return statement";
static const char *ng2 = "Function fn_dsp48_amult_width ended without a return statement";
static const char *ng3 = "Function fn_dsp48_amultcin_width ended without a return statement";
static const char *ng4 = "Function fn_dsp48_d_width ended without a return statement";
static const char *ng5 = "Function fn_dsp48_concat_width ended without a return statement";
static const char *ng6 = "Function fn_dsp48_preadd_width ended without a return statement";
extern char *STD_STANDARD;

int xilinxcorelib_p_1837083571_sub_2363168970_775299228(char *, char *, char *);
int xilinxcorelib_p_1837083571_sub_2363173326_775299228(char *, char *, char *);
unsigned char xilinxcorelib_p_1837083571_sub_719035815_775299228(char *, char *, char *);
int xilinxcorelib_p_1837083571_sub_993767359_775299228(char *, char *, char *);


int xilinxcorelib_p_3381355550_sub_3326504488_1067159583(char *t1, char *t2, char *t3)
{
    char t5[24];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = xilinxcorelib_p_1837083571_sub_2363173326_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t10 = (t9 > 0);
    if (t10 != 0)
        goto LAB4;

LAB6:    t11 = (t1 + 1168U);
    t12 = *((char **)t11);
    t9 = *((int *)t12);
    t0 = t9;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t11 = (t1 + 1888U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t0 = t13;
    goto LAB1;

LAB5:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_1910145802_1067159583(char *t1, char *t2, char *t3)
{
    char t5[24];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = xilinxcorelib_p_1837083571_sub_2363173326_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t10 = (t9 > 0);
    if (t10 != 0)
        goto LAB4;

LAB6:    t11 = (t1 + 1168U);
    t12 = *((char **)t11);
    t9 = *((int *)t12);
    t0 = t9;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t11 = (t1 + 2008U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t0 = t13;
    goto LAB1;

LAB5:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_3610758276_1067159583(char *t1, char *t2, char *t3, int t4)
{
    char t6[24];
    int t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;

LAB0:    t7 = (t6 + 4U);
    t8 = (t2 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 12U);
    *((char **)t9) = t3;
    t10 = (t6 + 20U);
    *((int *)t10) = t4;
    t12 = xilinxcorelib_p_1837083571_sub_2363173326_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t13 = (t12 > 0);
    if (t13 == 1)
        goto LAB7;

LAB8:    t11 = (unsigned char)0;

LAB9:    if (t11 != 0)
        goto LAB4;

LAB6:    t12 = xilinxcorelib_p_1837083571_sub_2363173326_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t11 = (t12 > 0);
    if (t11 == 1)
        goto LAB13;

LAB14:    t8 = (unsigned char)0;

LAB15:    if (t8 != 0)
        goto LAB11;

LAB12:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t12 = *((int *)t16);
    t0 = t12;

LAB1:    return t0;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB4:    t15 = (t1 + 1888U);
    t16 = *((char **)t15);
    t17 = *((int *)t16);
    t0 = t17;
    goto LAB1;

LAB5:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB7:    t14 = (t4 == 1);
    t11 = t14;
    goto LAB9;

LAB10:    goto LAB5;

LAB11:    t15 = (t1 + 2008U);
    t16 = *((char **)t15);
    t17 = *((int *)t16);
    t0 = t17;
    goto LAB1;

LAB13:    t13 = (t4 == 0);
    t8 = t13;
    goto LAB15;

LAB16:    goto LAB5;

LAB17:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_599507243_1067159583(char *t1, char *t2, char *t3)
{
    char t5[24];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = xilinxcorelib_p_1837083571_sub_2363168970_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t10 = (t9 > 0);
    if (t10 != 0)
        goto LAB4;

LAB6:    t9 = xilinxcorelib_p_1837083571_sub_993767359_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t7 = (t9 > 0);
    if (t7 != 0)
        goto LAB8;

LAB9:    t0 = 0;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t11 = (t1 + 1648U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t0 = t13;
    goto LAB1;

LAB5:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t11 = (t1 + 1768U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t0 = t13;
    goto LAB1;

LAB10:    goto LAB5;

LAB11:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_204859647_1067159583(char *t1, char *t2, char *t3)
{
    char t5[24];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    int t14;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = xilinxcorelib_p_1837083571_sub_2363168970_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t10 = (t9 > 0);
    if (t10 != 0)
        goto LAB4;

LAB6:    t9 = xilinxcorelib_p_3381355550_sub_3326504488_1067159583(t1, t2, t3);
    t11 = (t1 + 1288U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t14 = (t9 + t13);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t11 = (t1 + 1528U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t0 = t13;
    goto LAB1;

LAB5:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_4255572759_1067159583(char *t1, char *t2, char *t3)
{
    char t5[24];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t10 = xilinxcorelib_p_1837083571_sub_2363168970_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t11 = (t10 > 0);
    if (t11 == 1)
        goto LAB7;

LAB8:    t12 = xilinxcorelib_p_1837083571_sub_719035815_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t9 = t12;

LAB9:    if (t9 != 0)
        goto LAB4;

LAB6:    t10 = xilinxcorelib_p_3381355550_sub_1910145802_1067159583(t1, t2, t3);
    t0 = t10;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t13 = (t1 + 1288U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    t0 = t15;
    goto LAB1;

LAB5:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB7:    t9 = (unsigned char)1;
    goto LAB9;

LAB10:    goto LAB5;

LAB11:    goto LAB5;

}

int xilinxcorelib_p_3381355550_sub_308493112_1067159583(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = xilinxcorelib_p_1837083571_sub_2363168970_775299228(XILINXCORELIB_P_1837083571, t2, t3);
    t16 = (t15 > 0);
    if (t16 != 0)
        goto LAB4;

LAB6:    t15 = xilinxcorelib_p_3381355550_sub_204859647_1067159583(t1, t2, t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t15;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = *((int *)t8);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB4:    if ((unsigned char)0 == 0)
        goto LAB7;

LAB8:    goto LAB5;

LAB7:    t17 = (t1 + 5284);
    xsi_report(t17, 82U, (unsigned char)2);
    goto LAB8;

LAB9:;
}


extern void xilinxcorelib_p_3381355550_init()
{
	static char *se[] = {(void *)xilinxcorelib_p_3381355550_sub_3326504488_1067159583,(void *)xilinxcorelib_p_3381355550_sub_1910145802_1067159583,(void *)xilinxcorelib_p_3381355550_sub_3610758276_1067159583,(void *)xilinxcorelib_p_3381355550_sub_599507243_1067159583,(void *)xilinxcorelib_p_3381355550_sub_204859647_1067159583,(void *)xilinxcorelib_p_3381355550_sub_4255572759_1067159583,(void *)xilinxcorelib_p_3381355550_sub_308493112_1067159583};
	xsi_register_didat("xilinxcorelib_p_3381355550", "isim/processor_isim_beh.exe.sim/xilinxcorelib/p_3381355550.didat");
	xsi_register_subprogram_executes(se);
}
