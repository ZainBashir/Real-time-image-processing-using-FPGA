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
char *ieee_p_2592010699_sub_3879918230_503743352(char *, char *, char *, char *);
unsigned char unisim_a_1553322848_3672491681_sub_3214396156_2740133013(char *, char *, char *, char *, char *);
int unisim_p_3222816464_sub_3182959421_279109243(char *, char *, char *);


unsigned char unisim_a_1553322848_3672491681_sub_4181471696_2897035349(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[40];
    char t6[16];
    char t11[16];
    char t16[8];
    char t106[16];
    char t107[16];
    char t108[16];
    char t109[16];
    unsigned char t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    int t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned char t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    int t59;
    char *t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned char t67;
    char *t68;
    int t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned char t77;
    unsigned char t78;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned char t88;
    unsigned char t89;
    unsigned char t90;
    int t91;
    char *t92;
    int t93;
    char *t94;
    int t95;
    int t96;
    unsigned int t97;
    char *t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned char t103;
    char *t104;
    char *t105;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 2;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 2);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_2592010699) + 3320);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 1U;
    t19 = (t5 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t5 + 12U);
    *((char **)t21) = t6;
    t22 = (t5 + 20U);
    t23 = (t3 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t5 + 28U);
    *((char **)t24) = t11;
    t26 = (t11 + 0U);
    t27 = *((int *)t26);
    t28 = (t11 + 8U);
    t29 = *((int *)t28);
    t30 = (2 - t27);
    t10 = (t30 * t29);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t33 = (t3 + t32);
    t34 = *((unsigned char *)t33);
    t35 = (t11 + 0U);
    t36 = *((int *)t35);
    t37 = (t11 + 8U);
    t38 = *((int *)t37);
    t39 = (1 - t36);
    t40 = (t39 * t38);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t43 = (t3 + t42);
    t44 = *((unsigned char *)t43);
    t45 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t34, t44);
    t46 = (t11 + 0U);
    t47 = *((int *)t46);
    t48 = (t11 + 8U);
    t49 = *((int *)t48);
    t50 = (0 - t47);
    t51 = (t50 * t49);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t54 = (t3 + t53);
    t55 = *((unsigned char *)t54);
    t56 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t45, t55);
    t57 = (t56 == (unsigned char)3);
    if (t57 == 1)
        goto LAB9;

LAB10:    t58 = (t11 + 0U);
    t59 = *((int *)t58);
    t60 = (t11 + 8U);
    t61 = *((int *)t60);
    t62 = (2 - t59);
    t63 = (t62 * t61);
    t64 = (1U * t63);
    t65 = (0 + t64);
    t66 = (t3 + t65);
    t67 = *((unsigned char *)t66);
    t68 = (t11 + 0U);
    t69 = *((int *)t68);
    t70 = (t11 + 8U);
    t71 = *((int *)t70);
    t72 = (1 - t69);
    t73 = (t72 * t71);
    t74 = (1U * t73);
    t75 = (0 + t74);
    t76 = (t3 + t75);
    t77 = *((unsigned char *)t76);
    t78 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t67, t77);
    t79 = (t11 + 0U);
    t80 = *((int *)t79);
    t81 = (t11 + 8U);
    t82 = *((int *)t81);
    t83 = (0 - t80);
    t84 = (t83 * t82);
    t85 = (1U * t84);
    t86 = (0 + t85);
    t87 = (t3 + t86);
    t88 = *((unsigned char *)t87);
    t89 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t78, t88);
    t90 = (t89 == (unsigned char)2);
    t25 = t90;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:    t8 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t106, t8, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t14 = (t6 + 0U);
    t9 = *((int *)t14);
    t10 = (t9 - 7);
    t31 = (t10 * 1U);
    t32 = (0 + t31);
    t15 = (t2 + t32);
    t17 = (t11 + 0U);
    t13 = *((int *)t17);
    t40 = (t13 - 1);
    t41 = (t40 * 1U);
    t42 = (0 + t41);
    t18 = (t3 + t42);
    t20 = unisim_a_1553322848_3672491681_sub_3214396156_2740133013(t1, t15, t18, t4, t5);
    t28 = ((IEEE_P_2592010699) + 4024);
    t26 = xsi_base_array_concat(t26, t107, t28, (char)97, t7, t106, (char)99, t20, (char)101);
    t33 = (t6 + 0U);
    t27 = *((int *)t33);
    t51 = (t27 - 3);
    t52 = (t51 * 1U);
    t53 = (0 + t52);
    t35 = (t2 + t53);
    t37 = (t11 + 0U);
    t29 = *((int *)t37);
    t63 = (t29 - 1);
    t64 = (t63 * 1U);
    t65 = (0 + t64);
    t43 = (t3 + t65);
    t23 = unisim_a_1553322848_3672491681_sub_3214396156_2740133013(t1, t35, t43, t4, t5);
    t48 = ((IEEE_P_2592010699) + 4024);
    t46 = xsi_base_array_concat(t46, t108, t48, (char)97, t26, t107, (char)99, t23, (char)101);
    t54 = (t11 + 0U);
    t30 = *((int *)t54);
    t58 = (t11 + 8U);
    t36 = *((int *)t58);
    t38 = (2 - t30);
    t73 = (t38 * t36);
    t74 = (1U * t73);
    t75 = (0 + t74);
    t60 = (t3 + t75);
    t25 = *((unsigned char *)t60);
    t68 = ((IEEE_P_2592010699) + 4024);
    t66 = xsi_base_array_concat(t66, t109, t68, (char)99, (unsigned char)2, (char)99, t25, (char)101);
    t34 = unisim_a_1553322848_3672491681_sub_3214396156_2740133013(t1, t46, t66, t4, t5);
    t70 = (t12 + 56U);
    t76 = *((char **)t70);
    t70 = (t76 + 0);
    *((unsigned char *)t70) = t34;

LAB7:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((unsigned char *)t8);
    t0 = t20;

LAB1:    return t0;
LAB3:    *((char **)t19) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t3;
    goto LAB4;

LAB6:    t91 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t3, t11);
    t92 = (t6 + 0U);
    t93 = *((int *)t92);
    t94 = (t6 + 8U);
    t95 = *((int *)t94);
    t96 = (t91 - t93);
    t97 = (t96 * t95);
    t98 = (t6 + 4U);
    t99 = *((int *)t98);
    xsi_vhdl_check_range_of_index(t93, t99, t95, t91);
    t100 = (1U * t97);
    t101 = (0 + t100);
    t102 = (t2 + t101);
    t103 = *((unsigned char *)t102);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t104 = (t105 + 0);
    *((unsigned char *)t104) = t103;
    goto LAB7;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

LAB12:;
}

unsigned char unisim_a_1553322848_3672491681_sub_3214396156_2740133013(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[128];
    char t7[40];
    char t8[16];
    char t13[16];
    char t18[8];
    unsigned char t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned char t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned char t58;
    char *t59;
    int t60;
    char *t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned char t68;
    unsigned char t69;
    unsigned char t70;
    int t71;
    char *t72;
    int t73;
    char *t74;
    int t75;
    int t76;
    unsigned int t77;
    char *t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned char t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned char t89;
    unsigned char t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 3;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t13 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 1;
    t14 = (t10 + 4U);
    *((int *)t14) = 0;
    t14 = (t10 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 1);
    t12 = (t15 * -1);
    t12 = (t12 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t12;
    t14 = (t6 + 4U);
    t16 = ((IEEE_P_2592010699) + 3320);
    t17 = (t14 + 88U);
    *((char **)t17) = t16;
    t19 = (t14 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t14 + 80U);
    *((unsigned int *)t20) = 1U;
    t21 = (t7 + 4U);
    t22 = (t2 != 0);
    if (t22 == 1)
        goto LAB3;

LAB2:    t23 = (t7 + 12U);
    *((char **)t23) = t8;
    t24 = (t7 + 20U);
    t25 = (t3 != 0);
    if (t25 == 1)
        goto LAB5;

LAB4:    t26 = (t7 + 28U);
    *((char **)t26) = t13;
    t28 = (t13 + 0U);
    t29 = *((int *)t28);
    t30 = (t13 + 8U);
    t31 = *((int *)t30);
    t32 = (1 - t29);
    t12 = (t32 * t31);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t35 = (t3 + t34);
    t36 = *((unsigned char *)t35);
    t37 = (t13 + 0U);
    t38 = *((int *)t37);
    t39 = (t13 + 8U);
    t40 = *((int *)t39);
    t41 = (0 - t38);
    t42 = (t41 * t40);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t45 = (t3 + t44);
    t46 = *((unsigned char *)t45);
    t47 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t36, t46);
    t48 = (t47 == (unsigned char)3);
    if (t48 == 1)
        goto LAB9;

LAB10:    t49 = (t13 + 0U);
    t50 = *((int *)t49);
    t51 = (t13 + 8U);
    t52 = *((int *)t51);
    t53 = (1 - t50);
    t54 = (t53 * t52);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t57 = (t3 + t56);
    t58 = *((unsigned char *)t57);
    t59 = (t13 + 0U);
    t60 = *((int *)t59);
    t61 = (t13 + 8U);
    t62 = *((int *)t61);
    t63 = (0 - t60);
    t64 = (t63 * t62);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t67 = (t3 + t66);
    t68 = *((unsigned char *)t67);
    t69 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t58, t68);
    t70 = (t69 == (unsigned char)2);
    t27 = t70;

LAB11:    if (t27 != 0)
        goto LAB6;

LAB8:    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t10 = (t8 + 8U);
    t15 = *((int *)t10);
    t29 = (0 - t11);
    t12 = (t29 * t15);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t16 = (t2 + t34);
    t27 = *((unsigned char *)t16);
    t17 = (t8 + 0U);
    t31 = *((int *)t17);
    t19 = (t8 + 8U);
    t32 = *((int *)t19);
    t38 = (1 - t31);
    t42 = (t38 * t32);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t20 = (t2 + t44);
    t36 = *((unsigned char *)t20);
    t46 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t27, t36);
    t47 = (t46 == (unsigned char)2);
    if (t47 == 1)
        goto LAB17;

LAB18:    t25 = (unsigned char)0;

LAB19:    if (t25 == 1)
        goto LAB14;

LAB15:    t22 = (unsigned char)0;

LAB16:    if (t22 != 0)
        goto LAB12;

LAB13:    t9 = (t13 + 0U);
    t11 = *((int *)t9);
    t10 = (t13 + 8U);
    t15 = *((int *)t10);
    t29 = (1 - t11);
    t12 = (t29 * t15);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t16 = (t3 + t34);
    t25 = *((unsigned char *)t16);
    t27 = (t25 == (unsigned char)2);
    if (t27 == 1)
        goto LAB22;

LAB23:    t22 = (unsigned char)0;

LAB24:    if (t22 != 0)
        goto LAB20;

LAB21:    t9 = (t13 + 0U);
    t11 = *((int *)t9);
    t10 = (t13 + 8U);
    t15 = *((int *)t10);
    t29 = (1 - t11);
    t12 = (t29 * t15);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t16 = (t3 + t34);
    t25 = *((unsigned char *)t16);
    t27 = (t25 == (unsigned char)3);
    if (t27 == 1)
        goto LAB27;

LAB28:    t22 = (unsigned char)0;

LAB29:    if (t22 != 0)
        goto LAB25;

LAB26:    t9 = (t13 + 0U);
    t11 = *((int *)t9);
    t10 = (t13 + 8U);
    t15 = *((int *)t10);
    t29 = (0 - t11);
    t12 = (t29 * t15);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t16 = (t3 + t34);
    t25 = *((unsigned char *)t16);
    t27 = (t25 == (unsigned char)2);
    if (t27 == 1)
        goto LAB32;

LAB33:    t22 = (unsigned char)0;

LAB34:    if (t22 != 0)
        goto LAB30;

LAB31:    t9 = (t13 + 0U);
    t11 = *((int *)t9);
    t10 = (t13 + 8U);
    t15 = *((int *)t10);
    t29 = (0 - t11);
    t12 = (t29 * t15);
    t33 = (1U * t12);
    t34 = (0 + t33);
    t16 = (t3 + t34);
    t25 = *((unsigned char *)t16);
    t27 = (t25 == (unsigned char)3);
    if (t27 == 1)
        goto LAB37;

LAB38:    t22 = (unsigned char)0;

LAB39:    if (t22 != 0)
        goto LAB35;

LAB36:    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    *((unsigned char *)t9) = (unsigned char)1;

LAB7:    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t22 = *((unsigned char *)t10);
    t0 = t22;

LAB1:    return t0;
LAB3:    *((char **)t21) = t2;
    goto LAB2;

LAB5:    *((char **)t24) = t3;
    goto LAB4;

LAB6:    t71 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t3, t13);
    t72 = (t8 + 0U);
    t73 = *((int *)t72);
    t74 = (t8 + 8U);
    t75 = *((int *)t74);
    t76 = (t71 - t73);
    t77 = (t76 * t75);
    t78 = (t8 + 4U);
    t79 = *((int *)t78);
    xsi_vhdl_check_range_of_index(t73, t79, t75, t71);
    t80 = (1U * t77);
    t81 = (0 + t80);
    t82 = (t2 + t81);
    t83 = *((unsigned char *)t82);
    t84 = (t14 + 56U);
    t85 = *((char **)t84);
    t84 = (t85 + 0);
    *((unsigned char *)t84) = t83;
    goto LAB7;

LAB9:    t27 = (unsigned char)1;
    goto LAB11;

LAB12:    t72 = (t8 + 0U);
    t79 = *((int *)t72);
    t74 = (t8 + 8U);
    t91 = *((int *)t74);
    t92 = (0 - t79);
    t93 = (t92 * t91);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t78 = (t2 + t95);
    t96 = *((unsigned char *)t78);
    t82 = (t14 + 56U);
    t84 = *((char **)t82);
    t82 = (t84 + 0);
    *((unsigned char *)t82) = t96;
    goto LAB7;

LAB14:    t49 = (t8 + 0U);
    t62 = *((int *)t49);
    t51 = (t8 + 8U);
    t63 = *((int *)t51);
    t71 = (0 - t62);
    t77 = (t71 * t63);
    t80 = (1U * t77);
    t81 = (0 + t80);
    t57 = (t2 + t81);
    t70 = *((unsigned char *)t57);
    t59 = (t8 + 0U);
    t73 = *((int *)t59);
    t61 = (t8 + 8U);
    t75 = *((int *)t61);
    t76 = (2 - t73);
    t86 = (t76 * t75);
    t87 = (1U * t86);
    t88 = (0 + t87);
    t67 = (t2 + t88);
    t83 = *((unsigned char *)t67);
    t89 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t70, t83);
    t90 = (t89 == (unsigned char)2);
    t22 = t90;
    goto LAB16;

LAB17:    t28 = (t8 + 0U);
    t40 = *((int *)t28);
    t30 = (t8 + 8U);
    t41 = *((int *)t30);
    t50 = (2 - t40);
    t54 = (t50 * t41);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t35 = (t2 + t56);
    t48 = *((unsigned char *)t35);
    t37 = (t8 + 0U);
    t52 = *((int *)t37);
    t39 = (t8 + 8U);
    t53 = *((int *)t39);
    t60 = (3 - t52);
    t64 = (t60 * t53);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t45 = (t2 + t66);
    t58 = *((unsigned char *)t45);
    t68 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t48, t58);
    t69 = (t68 == (unsigned char)2);
    t25 = t69;
    goto LAB19;

LAB20:    t37 = (t8 + 0U);
    t52 = *((int *)t37);
    t39 = (t8 + 8U);
    t53 = *((int *)t39);
    t60 = (0 - t52);
    t64 = (t60 * t53);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t45 = (t2 + t66);
    t48 = *((unsigned char *)t45);
    t49 = (t14 + 56U);
    t51 = *((char **)t49);
    t49 = (t51 + 0);
    *((unsigned char *)t49) = t48;
    goto LAB7;

LAB22:    t17 = (t8 + 0U);
    t31 = *((int *)t17);
    t19 = (t8 + 8U);
    t32 = *((int *)t19);
    t38 = (0 - t31);
    t42 = (t38 * t32);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t20 = (t2 + t44);
    t36 = *((unsigned char *)t20);
    t28 = (t8 + 0U);
    t40 = *((int *)t28);
    t30 = (t8 + 8U);
    t41 = *((int *)t30);
    t50 = (1 - t40);
    t54 = (t50 * t41);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t35 = (t2 + t56);
    t46 = *((unsigned char *)t35);
    t47 = (t36 == t46);
    t22 = t47;
    goto LAB24;

LAB25:    t37 = (t8 + 0U);
    t52 = *((int *)t37);
    t39 = (t8 + 8U);
    t53 = *((int *)t39);
    t60 = (2 - t52);
    t64 = (t60 * t53);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t45 = (t2 + t66);
    t48 = *((unsigned char *)t45);
    t49 = (t14 + 56U);
    t51 = *((char **)t49);
    t49 = (t51 + 0);
    *((unsigned char *)t49) = t48;
    goto LAB7;

LAB27:    t17 = (t8 + 0U);
    t31 = *((int *)t17);
    t19 = (t8 + 8U);
    t32 = *((int *)t19);
    t38 = (2 - t31);
    t42 = (t38 * t32);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t20 = (t2 + t44);
    t36 = *((unsigned char *)t20);
    t28 = (t8 + 0U);
    t40 = *((int *)t28);
    t30 = (t8 + 8U);
    t41 = *((int *)t30);
    t50 = (3 - t40);
    t54 = (t50 * t41);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t35 = (t2 + t56);
    t46 = *((unsigned char *)t35);
    t47 = (t36 == t46);
    t22 = t47;
    goto LAB29;

LAB30:    t37 = (t8 + 0U);
    t52 = *((int *)t37);
    t39 = (t8 + 8U);
    t53 = *((int *)t39);
    t60 = (0 - t52);
    t64 = (t60 * t53);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t45 = (t2 + t66);
    t48 = *((unsigned char *)t45);
    t49 = (t14 + 56U);
    t51 = *((char **)t49);
    t49 = (t51 + 0);
    *((unsigned char *)t49) = t48;
    goto LAB7;

LAB32:    t17 = (t8 + 0U);
    t31 = *((int *)t17);
    t19 = (t8 + 8U);
    t32 = *((int *)t19);
    t38 = (0 - t31);
    t42 = (t38 * t32);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t20 = (t2 + t44);
    t36 = *((unsigned char *)t20);
    t28 = (t8 + 0U);
    t40 = *((int *)t28);
    t30 = (t8 + 8U);
    t41 = *((int *)t30);
    t50 = (2 - t40);
    t54 = (t50 * t41);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t35 = (t2 + t56);
    t46 = *((unsigned char *)t35);
    t47 = (t36 == t46);
    t22 = t47;
    goto LAB34;

LAB35:    t37 = (t8 + 0U);
    t52 = *((int *)t37);
    t39 = (t8 + 8U);
    t53 = *((int *)t39);
    t60 = (1 - t52);
    t64 = (t60 * t53);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t45 = (t2 + t66);
    t48 = *((unsigned char *)t45);
    t49 = (t14 + 56U);
    t51 = *((char **)t49);
    t49 = (t51 + 0);
    *((unsigned char *)t49) = t48;
    goto LAB7;

LAB37:    t17 = (t8 + 0U);
    t31 = *((int *)t17);
    t19 = (t8 + 8U);
    t32 = *((int *)t19);
    t38 = (1 - t31);
    t42 = (t38 * t32);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t20 = (t2 + t44);
    t36 = *((unsigned char *)t20);
    t28 = (t8 + 0U);
    t40 = *((int *)t28);
    t30 = (t8 + 8U);
    t41 = *((int *)t30);
    t50 = (3 - t40);
    t54 = (t50 * t41);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t35 = (t2 + t56);
    t46 = *((unsigned char *)t35);
    t47 = (t36 == t46);
    t22 = t47;
    goto LAB39;

LAB40:;
}

unsigned char unisim_a_1553322848_3672491681_sub_655425482_2897035349(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[40];
    char t6[16];
    char t11[16];
    char t16[8];
    unsigned char t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned char t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned char t66;
    unsigned char t67;
    unsigned char t68;
    int t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    int t74;
    unsigned int t75;
    char *t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned char t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    unsigned char t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned char t94;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 1;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 1);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_2592010699) + 3320);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 1U;
    t19 = (t5 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t5 + 12U);
    *((char **)t21) = t6;
    t22 = (t5 + 20U);
    t23 = (t3 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t5 + 28U);
    *((char **)t24) = t11;
    t26 = (t11 + 0U);
    t27 = *((int *)t26);
    t28 = (t11 + 8U);
    t29 = *((int *)t28);
    t30 = (1 - t27);
    t10 = (t30 * t29);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t33 = (t3 + t32);
    t34 = *((unsigned char *)t33);
    t35 = (t11 + 0U);
    t36 = *((int *)t35);
    t37 = (t11 + 8U);
    t38 = *((int *)t37);
    t39 = (0 - t36);
    t40 = (t39 * t38);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t43 = (t3 + t42);
    t44 = *((unsigned char *)t43);
    t45 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t34, t44);
    t46 = (t45 == (unsigned char)3);
    if (t46 == 1)
        goto LAB9;

LAB10:    t47 = (t11 + 0U);
    t48 = *((int *)t47);
    t49 = (t11 + 8U);
    t50 = *((int *)t49);
    t51 = (1 - t48);
    t52 = (t51 * t50);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t55 = (t3 + t54);
    t56 = *((unsigned char *)t55);
    t57 = (t11 + 0U);
    t58 = *((int *)t57);
    t59 = (t11 + 8U);
    t60 = *((int *)t59);
    t61 = (0 - t58);
    t62 = (t61 * t60);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t65 = (t3 + t64);
    t66 = *((unsigned char *)t65);
    t67 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t56, t66);
    t68 = (t67 == (unsigned char)2);
    t25 = t68;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t2 + t32);
    t25 = *((unsigned char *)t14);
    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (1 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t44 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t25, t34);
    t45 = (t44 == (unsigned char)2);
    if (t45 == 1)
        goto LAB17;

LAB18:    t23 = (unsigned char)0;

LAB19:    if (t23 == 1)
        goto LAB14;

LAB15:    t20 = (unsigned char)0;

LAB16:    if (t20 != 0)
        goto LAB12;

LAB13:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (1 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)2);
    if (t25 == 1)
        goto LAB22;

LAB23:    t20 = (unsigned char)0;

LAB24:    if (t20 != 0)
        goto LAB20;

LAB21:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (1 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)3);
    if (t25 == 1)
        goto LAB27;

LAB28:    t20 = (unsigned char)0;

LAB29:    if (t20 != 0)
        goto LAB25;

LAB26:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)2);
    if (t25 == 1)
        goto LAB32;

LAB33:    t20 = (unsigned char)0;

LAB34:    if (t20 != 0)
        goto LAB30;

LAB31:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)3);
    if (t25 == 1)
        goto LAB37;

LAB38:    t20 = (unsigned char)0;

LAB39:    if (t20 != 0)
        goto LAB35;

LAB36:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB7:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((unsigned char *)t8);
    t0 = t20;

LAB1:    return t0;
LAB3:    *((char **)t19) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t3;
    goto LAB4;

LAB6:    t69 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t3, t11);
    t70 = (t6 + 0U);
    t71 = *((int *)t70);
    t72 = (t6 + 8U);
    t73 = *((int *)t72);
    t74 = (t69 - t71);
    t75 = (t74 * t73);
    t76 = (t6 + 4U);
    t77 = *((int *)t76);
    xsi_vhdl_check_range_of_index(t71, t77, t73, t69);
    t78 = (1U * t75);
    t79 = (0 + t78);
    t80 = (t2 + t79);
    t81 = *((unsigned char *)t80);
    t82 = (t12 + 56U);
    t83 = *((char **)t82);
    t82 = (t83 + 0);
    *((unsigned char *)t82) = t81;
    goto LAB7;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

LAB12:    t70 = (t6 + 0U);
    t77 = *((int *)t70);
    t72 = (t6 + 8U);
    t89 = *((int *)t72);
    t90 = (0 - t77);
    t91 = (t90 * t89);
    t92 = (1U * t91);
    t93 = (0 + t92);
    t76 = (t2 + t93);
    t94 = *((unsigned char *)t76);
    t80 = (t12 + 56U);
    t82 = *((char **)t80);
    t80 = (t82 + 0);
    *((unsigned char *)t80) = t94;
    goto LAB7;

LAB14:    t47 = (t6 + 0U);
    t60 = *((int *)t47);
    t49 = (t6 + 8U);
    t61 = *((int *)t49);
    t69 = (0 - t60);
    t75 = (t69 * t61);
    t78 = (1U * t75);
    t79 = (0 + t78);
    t55 = (t2 + t79);
    t68 = *((unsigned char *)t55);
    t57 = (t6 + 0U);
    t71 = *((int *)t57);
    t59 = (t6 + 8U);
    t73 = *((int *)t59);
    t74 = (2 - t71);
    t84 = (t74 * t73);
    t85 = (1U * t84);
    t86 = (0 + t85);
    t65 = (t2 + t86);
    t81 = *((unsigned char *)t65);
    t87 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t68, t81);
    t88 = (t87 == (unsigned char)2);
    t20 = t88;
    goto LAB16;

LAB17:    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (2 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t46 = *((unsigned char *)t33);
    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (3 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t56 = *((unsigned char *)t43);
    t66 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t46, t56);
    t67 = (t66 == (unsigned char)2);
    t23 = t67;
    goto LAB19;

LAB20:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (0 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB22:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (0 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (1 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB24;

LAB25:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (2 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB27:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (2 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (3 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB29;

LAB30:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (0 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB32:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (0 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (2 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB34;

LAB35:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (1 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB37:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (1 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (3 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB39;

LAB40:;
}

static void unisim_a_1553322848_3672491681_p_0(char *t0)
{
    char t1[16];
    char t7[16];
    char t12[16];
    char t17[16];
    char t22[16];
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;

LAB0:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 3912);
    t2 = xsi_base_array_concat(t2, t7, t8, (char)99, t4, (char)99, t6, (char)101);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t13 = ((IEEE_P_2592010699) + 3912);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t2, t7, (char)99, t11, (char)101);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t18 = ((IEEE_P_2592010699) + 3912);
    t14 = xsi_base_array_concat(t14, t17, t18, (char)97, t9, t12, (char)99, t16, (char)101);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t23 = ((IEEE_P_2592010699) + 3912);
    t19 = xsi_base_array_concat(t19, t22, t23, (char)97, t14, t17, (char)99, t21, (char)101);
    t24 = ieee_p_2592010699_sub_3879918230_503743352(IEEE_P_2592010699, t1, t19, t22);
    t25 = (t0 + 2368U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t1 + 12U);
    t28 = *((unsigned int *)t27);
    t28 = (t28 * 1U);
    memcpy(t25, t24, t28);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t16 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t6, t11);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t21 = *((unsigned char *)t8);
    t29 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t16, t21);
    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t30 = *((unsigned char *)t9);
    t31 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t29, t30);
    t2 = (t0 + 1192U);
    t10 = *((char **)t2);
    t32 = *((unsigned char *)t10);
    t33 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t31, t32);
    t34 = (t33 == (unsigned char)3);
    if (t34 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1832U);
    t13 = *((char **)t2);
    t35 = *((unsigned char *)t13);
    t2 = (t0 + 1672U);
    t14 = *((char **)t2);
    t36 = *((unsigned char *)t14);
    t37 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t35, t36);
    t2 = (t0 + 1512U);
    t15 = *((char **)t2);
    t38 = *((unsigned char *)t15);
    t39 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t37, t38);
    t2 = (t0 + 1352U);
    t18 = *((char **)t2);
    t40 = *((unsigned char *)t18);
    t41 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t39, t40);
    t2 = (t0 + 1192U);
    t19 = *((char **)t2);
    t42 = *((unsigned char *)t19);
    t43 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t41, t42);
    t44 = (t43 == (unsigned char)2);
    t4 = t44;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t28 = (31 - 31);
    t47 = (t28 * 1U);
    t48 = (0 + t47);
    t2 = (t3 + t48);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t52 = (4 - 2);
    t53 = (t52 * 1U);
    t54 = (0 + t53);
    t5 = (t8 + t54);
    t4 = unisim_a_1553322848_3672491681_sub_4181471696_2897035349(t0, t2, t5);
    t9 = (t0 + 2248U);
    t10 = *((char **)t9);
    t55 = (31 - 23);
    t56 = (t55 * 1U);
    t57 = (0 + t56);
    t9 = (t10 + t57);
    t13 = (t0 + 2368U);
    t14 = *((char **)t13);
    t58 = (4 - 2);
    t59 = (t58 * 1U);
    t60 = (0 + t59);
    t13 = (t14 + t60);
    t6 = unisim_a_1553322848_3672491681_sub_4181471696_2897035349(t0, t9, t13);
    t18 = ((IEEE_P_2592010699) + 4024);
    t15 = xsi_base_array_concat(t15, t1, t18, (char)99, t4, (char)99, t6, (char)101);
    t19 = (t0 + 2248U);
    t20 = *((char **)t19);
    t61 = (31 - 15);
    t62 = (t61 * 1U);
    t63 = (0 + t62);
    t19 = (t20 + t63);
    t23 = (t0 + 2368U);
    t24 = *((char **)t23);
    t64 = (4 - 2);
    t65 = (t64 * 1U);
    t66 = (0 + t65);
    t23 = (t24 + t66);
    t11 = unisim_a_1553322848_3672491681_sub_4181471696_2897035349(t0, t19, t23);
    t26 = ((IEEE_P_2592010699) + 4024);
    t25 = xsi_base_array_concat(t25, t7, t26, (char)97, t15, t1, (char)99, t11, (char)101);
    t27 = (t0 + 2248U);
    t50 = *((char **)t27);
    t67 = (31 - 7);
    t68 = (t67 * 1U);
    t69 = (0 + t68);
    t27 = (t50 + t69);
    t51 = (t0 + 2368U);
    t70 = *((char **)t51);
    t71 = (4 - 2);
    t72 = (t71 * 1U);
    t73 = (0 + t72);
    t51 = (t70 + t73);
    t16 = unisim_a_1553322848_3672491681_sub_4181471696_2897035349(t0, t27, t51);
    t75 = ((IEEE_P_2592010699) + 4024);
    t74 = xsi_base_array_concat(t74, t12, t75, (char)97, t25, t7, (char)99, t16, (char)101);
    t76 = (t0 + 2368U);
    t77 = *((char **)t76);
    t78 = (4 - 4);
    t79 = (t78 * 1U);
    t80 = (0 + t79);
    t76 = (t77 + t80);
    t21 = unisim_a_1553322848_3672491681_sub_655425482_2897035349(t0, t74, t76);
    t81 = (t0 + 3752);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = t21;
    xsi_driver_first_trans_fast_port(t81);

LAB3:    t2 = (t0 + 3672);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t2 = (t0 + 2248U);
    t20 = *((char **)t2);
    t2 = (t0 + 2368U);
    t23 = *((char **)t2);
    t2 = (t0 + 5768U);
    t45 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t23, t2);
    t46 = (t45 - 31);
    t28 = (t46 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t45);
    t47 = (1U * t28);
    t48 = (0 + t47);
    t24 = (t20 + t48);
    t49 = *((unsigned char *)t24);
    t25 = (t0 + 3752);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t50 = (t27 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = t49;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB3;

LAB5:    t4 = (unsigned char)1;
    goto LAB7;

}


extern void unisim_a_1553322848_3672491681_init()
{
	static char *pe[] = {(void *)unisim_a_1553322848_3672491681_p_0};
	static char *se[] = {(void *)unisim_a_1553322848_3672491681_sub_4181471696_2897035349,(void *)unisim_a_1553322848_3672491681_sub_3214396156_2740133013,(void *)unisim_a_1553322848_3672491681_sub_655425482_2897035349};
	xsi_register_didat("unisim_a_1553322848_3672491681", "isim/processor_isim_beh.exe.sim/unisim/a_1553322848_3672491681.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
