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
static const char *ng0 = "C:/Users/hojmang/Documents/GitHub/spibus/master.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {15U, 0U};



static void Always_84_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3716U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 3744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1676U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(86, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_90_1(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3860U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4352);
    *((int *)t2) = 1;
    t3 = (t0 + 3888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 2824);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(93, ng0);
    t11 = (t0 + 2320U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t11) != 0)
        goto LAB26;

LAB27:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB28;

LAB29:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t19) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t10) > 0)
        goto LAB34;

LAB35:    memcpy(t9, t28, 8);

LAB36:    t29 = (t0 + 2916);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 3);
    goto LAB23;

LAB9:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t3) != 0)
        goto LAB39;

LAB40:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB41;

LAB42:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t7) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t10) > 0)
        goto LAB47;

LAB48:    memcpy(t9, t12, 8);

LAB49:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB11:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t3) != 0)
        goto LAB52;

LAB53:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB54;

LAB55:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t7) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t10) > 0)
        goto LAB60;

LAB61:    memcpy(t9, t12, 8);

LAB62:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB13:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t3) != 0)
        goto LAB65;

LAB66:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB67;

LAB68:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t7) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t10) > 0)
        goto LAB73;

LAB74:    memcpy(t9, t12, 8);

LAB75:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB15:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t3) != 0)
        goto LAB78;

LAB79:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB80;

LAB81:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t7) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t10) > 0)
        goto LAB86;

LAB87:    memcpy(t9, t12, 8);

LAB88:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB17:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t3) != 0)
        goto LAB91;

LAB92:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB93;

LAB94:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t7) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t10) > 0)
        goto LAB99;

LAB100:    memcpy(t9, t12, 8);

LAB101:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB19:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t3) != 0)
        goto LAB104;

LAB105:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB106;

LAB107:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t7) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t10) > 0)
        goto LAB112;

LAB113:    memcpy(t9, t12, 8);

LAB114:    t18 = (t0 + 2916);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 3);
    goto LAB23;

LAB21:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2916);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB23;

LAB24:    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB26:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB27;

LAB28:    t23 = ((char*)((ng2)));
    goto LAB29;

LAB30:    t28 = ((char*)((ng1)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t28, 3);
    goto LAB36;

LAB34:    memcpy(t9, t23, 8);
    goto LAB36;

LAB37:    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB39:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB40;

LAB41:    t11 = ((char*)((ng3)));
    goto LAB42;

LAB43:    t12 = ((char*)((ng4)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB49;

LAB47:    memcpy(t9, t11, 8);
    goto LAB49;

LAB50:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB52:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB53;

LAB54:    t11 = ((char*)((ng5)));
    goto LAB55;

LAB56:    t12 = ((char*)((ng3)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB62;

LAB60:    memcpy(t9, t11, 8);
    goto LAB62;

LAB63:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB65:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB66;

LAB67:    t11 = ((char*)((ng4)));
    goto LAB68;

LAB69:    t12 = ((char*)((ng5)));
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB75;

LAB73:    memcpy(t9, t11, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t10) = 1;
    goto LAB79;

LAB78:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB79;

LAB80:    t11 = ((char*)((ng6)));
    goto LAB81;

LAB82:    t12 = ((char*)((ng4)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB88;

LAB86:    memcpy(t9, t11, 8);
    goto LAB88;

LAB89:    *((unsigned int *)t10) = 1;
    goto LAB92;

LAB91:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB92;

LAB93:    t11 = ((char*)((ng7)));
    goto LAB94;

LAB95:    t12 = ((char*)((ng6)));
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB101;

LAB99:    memcpy(t9, t11, 8);
    goto LAB101;

LAB102:    *((unsigned int *)t10) = 1;
    goto LAB105;

LAB104:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB105;

LAB106:    t11 = ((char*)((ng8)));
    goto LAB107;

LAB108:    t12 = ((char*)((ng7)));
    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB114;

LAB112:    memcpy(t9, t11, 8);
    goto LAB114;

}

static void Always_109_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4004U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4360);
    *((int *)t2) = 1;
    t3 = (t0 + 4032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 2824);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(114, ng0);

LAB24:    xsi_set_current_line(115, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3192);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(120, ng0);

LAB25:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(126, ng0);

LAB26:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(132, ng0);

LAB27:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(138, ng0);

LAB28:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(144, ng0);

LAB29:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(150, ng0);

LAB30:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(156, ng0);

LAB31:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB23;

}

static void Always_205_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;

LAB0:    t1 = (t0 + 4148U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(206, ng0);

LAB5:    xsi_set_current_line(207, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2732);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 3192);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2732);
    t7 = (t0 + 2732);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1952U);
    t11 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t11, 2, 2);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t6), 1);
    goto LAB7;

}


extern void work_m_00000000004076574150_1251139944_init()
{
	static char *pe[] = {(void *)Always_84_0,(void *)Always_90_1,(void *)Always_109_2,(void *)Always_205_3};
	xsi_register_didat("work_m_00000000004076574150_1251139944", "isim/master_tb_isim_beh.exe.sim/work/m_00000000004076574150_1251139944.didat");
	xsi_register_executes(pe);
}
