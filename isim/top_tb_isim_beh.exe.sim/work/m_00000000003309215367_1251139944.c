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

/* This file is designed for use with ISim build 0xb869381d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/hojmang/Documents/cpe187/spibus/master.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2240);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    int t43;

LAB0:    t1 = (t0 + 2908U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    t3 = (t0 + 2936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1000U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1276U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);

LAB14:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1964);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1872);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1780);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB18;

LAB15:    if (t16 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(62, ng0);

LAB25:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t20 = ((char*)((ng4)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_lshift(t28, 8, t6, 8, t20, 32);
    t26 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t26, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 2056);
    t4 = (t0 + 2056);
    t5 = (t4 + 44U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t19, 2, t20, 32, 1);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    if (t43 == 1)
        goto LAB26;

LAB27:
LAB21:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1780);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB17:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);

LAB22:    xsi_set_current_line(58, ng0);
    t29 = (t0 + 2148);
    t30 = (t29 + 36U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 255U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 255U);
    t40 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 8, t28, 8, t40, 32);
    t42 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 8, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2148);
    t4 = (t0 + 2148);
    t5 = (t4 + 44U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t19, 2, t20, 32, 1);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t26);
    t43 = (!(t7));
    if (t43 == 1)
        goto LAB23;

LAB24:    goto LAB21;

LAB23:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB24;

LAB26:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB27;

}

static void Always_69_2(char *t0)
{
    char t6[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t29;

LAB0:    t1 = (t0 + 3052U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    t3 = (t0 + 3080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1000U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);

LAB14:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2056);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t20 = ((char*)((ng4)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_lshift(t28, 8, t6, 8, t20, 32);
    t26 = (t0 + 2056);
    xsi_vlogvar_wait_assign_value(t26, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 2056);
    t4 = (t0 + 2056);
    t5 = (t4 + 44U);
    t19 = *((char **)t5);
    t20 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t19, 2, t20, 32, 1);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t26);
    t29 = (!(t7));
    if (t29 == 1)
        goto LAB15;

LAB16:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1964);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 2, 0LL);
    goto LAB12;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB16;

}

static void Always_83_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 3224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1872);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(87, ng0);

LAB18:    goto LAB17;

LAB9:    xsi_set_current_line(92, ng0);

LAB19:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 2056);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 255U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t17 = (t0 + 2148);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB11:    xsi_set_current_line(98, ng0);

LAB20:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2240);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB22;

LAB21:    t17 = (t7 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB23;

LAB24:    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB13:    xsi_set_current_line(112, ng0);

LAB38:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1780);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB15:    xsi_set_current_line(120, ng0);

LAB39:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 2148);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 255U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t17 = (t0 + 2056);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB22:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(100, ng0);

LAB29:    xsi_set_current_line(101, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1780);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2148);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t9 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t10 = (t0 + 1596);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2240);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 4, t5, 32);
    t7 = (t0 + 2240);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2240);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t22 = (t13 | t16);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB33;

LAB30:    if (t25 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t9) = 1;

LAB33:    t18 = (t9 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t9);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB32:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(105, ng0);

LAB37:    xsi_set_current_line(106, ng0);
    t19 = ((char*)((ng7)));
    t20 = (t0 + 1964);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 2);
    goto LAB36;

}


extern void work_m_00000000003309215367_1251139944_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_43_1,(void *)Always_69_2,(void *)Always_83_3};
	xsi_register_didat("work_m_00000000003309215367_1251139944", "isim/top_tb_isim_beh.exe.sim/work/m_00000000003309215367_1251139944.didat");
	xsi_register_executes(pe);
}
