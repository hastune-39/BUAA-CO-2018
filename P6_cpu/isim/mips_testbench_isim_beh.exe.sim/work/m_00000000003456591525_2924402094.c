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
static const char *ng0 = "D:/code_software/ise_save/P6_cpu/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "%d@%h: *%h <= %h";
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {16, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {8, 0};
static int ng11[] = {32, 0};
static int ng12[] = {15, 0};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {7, 0};



static void Initial_40_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Initial_44_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_48_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t44[16];
    char t45[8];
    char t48[8];
    char t52[8];
    char t58[8];
    char t63[8];
    char t67[8];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB9:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB9;

LAB12:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB18:    t4 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2728);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 4095U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t22 = (t13 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t15 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB53;

LAB54:
LAB27:    goto LAB16;

LAB19:    xsi_set_current_line(54, ng0);

LAB28:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 2728);
    t14 = (t0 + 2728);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    memset(t16, 0, 8);
    t22 = (t16 + 4);
    t24 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t30 = (t27 >> 2);
    *((unsigned int *)t16) = t30;
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 2);
    *((unsigned int *)t22) = t34;
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 4095U);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t16, 12, 2);
    t25 = (t13 + 4);
    t39 = *((unsigned int *)t25);
    t31 = (!(t39));
    t26 = (t15 + 4);
    t40 = *((unsigned int *)t26);
    t32 = (!(t40));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(56, ng0);
    t2 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t3, 32);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t11, 2);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t44, 64, (char)118, t13, 32, (char)118, t15, 32, (char)118, t19, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(58, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB32:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t15, 0, 8);
    t20 = (t15 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4095U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 4095U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t14, t19, 2, 1, t15, 12, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t13, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB37:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(63, ng0);
    t2 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t3, 32);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t11, 2);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t44, 64, (char)118, t13, 32, (char)118, t15, 32, (char)118, t20, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(65, ng0);

LAB42:    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB43:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t15, 0, 8);
    t20 = (t15 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4095U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 4095U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t14, t19, 2, 1, t15, 12, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t13, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB48:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(70, ng0);
    t2 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t3, 32);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t11, 2);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t44, 64, (char)118, t13, 32, (char)118, t15, 32, (char)118, t20, 32);
    goto LAB27;

LAB29:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t15);
    t36 = (t41 - t42);
    t43 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), t43, 0LL);
    goto LAB30;

LAB33:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    t14 = (t0 + 1488U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2728);
    t24 = (t0 + 2728);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 2728);
    t46 = (t29 + 64U);
    t47 = *((char **)t46);
    t49 = (t0 + 1368U);
    t50 = *((char **)t49);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t51 = (t50 + 4);
    t27 = *((unsigned int *)t50);
    t30 = (t27 >> 2);
    *((unsigned int *)t48) = t30;
    t33 = *((unsigned int *)t51);
    t34 = (t33 >> 2);
    *((unsigned int *)t49) = t34;
    t37 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t37 & 4095U);
    t38 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t38 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t45, t26, t47, 2, 1, t48, 12, 2);
    t53 = (t0 + 2728);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 1368U);
    t57 = *((char **)t56);
    t56 = (t0 + 1328U);
    t59 = (t56 + 72U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t58, 32, t57, t60, 2, t61, 32, 1);
    t62 = ((char*)((ng8)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_multiply(t63, 32, t58, 32, t62, 32);
    t64 = (t0 + 3048);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t63, 32, t66, 32);
    xsi_vlog_generic_convert_bit_index(t52, t55, 2, t67, 32, 2);
    t68 = (t16 + 4);
    t39 = *((unsigned int *)t68);
    t28 = (!(t39));
    t69 = (t45 + 4);
    t40 = *((unsigned int *)t69);
    t31 = (!(t40));
    t32 = (t28 && t31);
    t70 = (t52 + 4);
    t41 = *((unsigned int *)t70);
    t35 = (!(t41));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB32;

LAB35:    t42 = *((unsigned int *)t45);
    t71 = *((unsigned int *)t52);
    t43 = (t42 + t71);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, t43, 1, 0LL);
    goto LAB36;

LAB38:    xsi_set_current_line(62, ng0);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    t14 = (t0 + 1488U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2888);
    t24 = (t0 + 2888);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 1368U);
    t46 = *((char **)t29);
    t29 = (t0 + 1328U);
    t47 = (t29 + 72U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t45, 32, t46, t49, 2, t50, 32, 1);
    t51 = ((char*)((ng8)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t45, 32, t51, 32);
    t53 = (t0 + 3048);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t48, 32, t55, 32);
    xsi_vlog_generic_convert_bit_index(t16, t26, 2, t52, 32, 2);
    t56 = (t16 + 4);
    t27 = *((unsigned int *)t56);
    t28 = (!(t27));
    if (t28 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB37;

LAB40:    xsi_vlogvar_assign_value(t23, t15, 0, *((unsigned int *)t16), 1);
    goto LAB41;

LAB44:    xsi_set_current_line(66, ng0);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    t14 = (t0 + 1488U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2728);
    t24 = (t0 + 2728);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 2728);
    t46 = (t29 + 64U);
    t47 = *((char **)t46);
    t49 = (t0 + 1368U);
    t50 = *((char **)t49);
    memset(t48, 0, 8);
    t49 = (t48 + 4);
    t51 = (t50 + 4);
    t27 = *((unsigned int *)t50);
    t30 = (t27 >> 2);
    *((unsigned int *)t48) = t30;
    t33 = *((unsigned int *)t51);
    t34 = (t33 >> 2);
    *((unsigned int *)t49) = t34;
    t37 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t37 & 4095U);
    t38 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t38 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t45, t26, t47, 2, 1, t48, 12, 2);
    t53 = (t0 + 2728);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 1368U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t56 = (t58 + 4);
    t59 = (t57 + 4);
    t39 = *((unsigned int *)t57);
    t40 = (t39 >> 0);
    *((unsigned int *)t58) = t40;
    t41 = *((unsigned int *)t59);
    t42 = (t41 >> 0);
    *((unsigned int *)t56) = t42;
    t71 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t71 & 3U);
    t72 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t72 & 3U);
    t60 = ((char*)((ng10)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_multiply(t63, 32, t58, 32, t60, 32);
    t61 = (t0 + 3048);
    t62 = (t61 + 56U);
    t64 = *((char **)t62);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t63, 32, t64, 32);
    xsi_vlog_generic_convert_bit_index(t52, t55, 2, t67, 32, 2);
    t65 = (t16 + 4);
    t73 = *((unsigned int *)t65);
    t28 = (!(t73));
    t66 = (t45 + 4);
    t74 = *((unsigned int *)t66);
    t31 = (!(t74));
    t32 = (t28 && t31);
    t68 = (t52 + 4);
    t75 = *((unsigned int *)t68);
    t35 = (!(t75));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB43;

LAB46:    t76 = *((unsigned int *)t45);
    t77 = *((unsigned int *)t52);
    t43 = (t76 + t77);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, t43, 1, 0LL);
    goto LAB47;

LAB49:    xsi_set_current_line(69, ng0);
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    t14 = (t0 + 1488U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2888);
    t24 = (t0 + 2888);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 1368U);
    t46 = *((char **)t29);
    memset(t45, 0, 8);
    t29 = (t45 + 4);
    t47 = (t46 + 4);
    t27 = *((unsigned int *)t46);
    t30 = (t27 >> 0);
    *((unsigned int *)t45) = t30;
    t33 = *((unsigned int *)t47);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t37 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t37 & 3U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 3U);
    t49 = ((char*)((ng10)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t45, 32, t49, 32);
    t50 = (t0 + 3048);
    t51 = (t50 + 56U);
    t53 = *((char **)t51);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t48, 32, t53, 32);
    xsi_vlog_generic_convert_bit_index(t16, t26, 2, t52, 32, 2);
    t54 = (t16 + 4);
    t39 = *((unsigned int *)t54);
    t28 = (!(t39));
    if (t28 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB48;

LAB51:    xsi_vlogvar_assign_value(t23, t15, 0, *((unsigned int *)t16), 1);
    goto LAB52;

LAB53:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB54;

}

static void Always_80_3(char *t0)
{
    char t10[8];
    char t17[8];
    char t32[8];
    char t36[8];
    char t46[8];
    char t52[8];
    char t57[8];
    char t61[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t17, 0, 8);
    t14 = (t17 + 4);
    t16 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 2);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4095U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t17, 12, 2);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 2);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 2);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4095U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t13, t16, 2, 1, t17, 12, 2);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(83, ng0);

LAB20:    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB21:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB22;

LAB23:    goto LAB19;

LAB11:    xsi_set_current_line(88, ng0);

LAB31:    xsi_set_current_line(89, ng0);
    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB32:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB33;

LAB34:    goto LAB19;

LAB13:    xsi_set_current_line(93, ng0);

LAB42:    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB43:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB44;

LAB45:    goto LAB19;

LAB15:    xsi_set_current_line(98, ng0);

LAB53:    xsi_set_current_line(99, ng0);
    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB54:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB55;

LAB56:    goto LAB19;

LAB22:    xsi_set_current_line(85, ng0);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t12, 32, 1);
    t13 = (t10 + 4);
    t21 = *((unsigned int *)t13);
    t6 = (!(t21));
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB26:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB21;

LAB24:    xsi_set_current_line(85, ng0);
    t15 = (t0 + 2728);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t0 + 2728);
    t20 = (t19 + 72U);
    t27 = *((char **)t20);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 4095U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 4095U);
    xsi_vlog_generic_get_array_select_value(t32, 32, t18, t27, t35, 2, 1, t36, 12, 2);
    t47 = (t0 + 2728);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    t50 = (t0 + 1328U);
    t53 = (t50 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t52, 32, t51, t54, 2, t55, 32, 1);
    t56 = ((char*)((ng8)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_multiply(t57, 32, t52, 32, t56, 32);
    t58 = (t0 + 3048);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t57, 32, t60, 32);
    xsi_vlog_generic_get_index_select_value(t46, 1, t32, t49, 2, t61, 32, 2);
    t62 = (t0 + 2568);
    t64 = (t0 + 2568);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 3048);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_generic_convert_bit_index(t63, t66, 2, t69, 32, 1);
    t70 = (t63 + 4);
    t71 = *((unsigned int *)t70);
    t6 = (!(t71));
    if (t6 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    xsi_vlogvar_assign_value(t62, t46, 0, *((unsigned int *)t63), 1);
    goto LAB28;

LAB29:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t10), 1);
    goto LAB30;

LAB33:    xsi_set_current_line(90, ng0);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t17, 0, 8);
    t14 = (t17 + 4);
    t16 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 2);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4095U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t17, 12, 2);
    t18 = (t0 + 2728);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t27 = (t0 + 1368U);
    t33 = *((char **)t27);
    t27 = (t0 + 1328U);
    t34 = (t27 + 72U);
    t35 = *((char **)t34);
    t37 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t36, 32, t33, t35, 2, t37, 32, 1);
    t38 = ((char*)((ng8)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 32, t36, 32, t38, 32);
    t39 = ((char*)((ng12)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t46, 32, t39, 32);
    xsi_vlog_generic_get_index_select_value(t32, 1, t10, t20, 2, t52, 32, 2);
    t47 = (t0 + 2568);
    t48 = (t0 + 2568);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 3048);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_generic_convert_bit_index(t57, t50, 2, t54, 32, 1);
    t55 = (t57 + 4);
    t28 = *((unsigned int *)t55);
    t6 = (!(t28));
    if (t6 == 1)
        goto LAB40;

LAB41:
LAB37:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB32;

LAB35:    xsi_set_current_line(90, ng0);
    t15 = (t0 + 2728);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t0 + 2728);
    t20 = (t19 + 72U);
    t27 = *((char **)t20);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 4095U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 4095U);
    xsi_vlog_generic_get_array_select_value(t32, 32, t18, t27, t35, 2, 1, t36, 12, 2);
    t47 = (t0 + 2728);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    t50 = (t0 + 1328U);
    t53 = (t50 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t52, 32, t51, t54, 2, t55, 32, 1);
    t56 = ((char*)((ng8)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_multiply(t57, 32, t52, 32, t56, 32);
    t58 = (t0 + 3048);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t57, 32, t60, 32);
    xsi_vlog_generic_get_index_select_value(t46, 1, t32, t49, 2, t61, 32, 2);
    t62 = (t0 + 2568);
    t64 = (t0 + 2568);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 3048);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_generic_convert_bit_index(t63, t66, 2, t69, 32, 1);
    t70 = (t63 + 4);
    t71 = *((unsigned int *)t70);
    t6 = (!(t71));
    if (t6 == 1)
        goto LAB38;

LAB39:    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t62, t46, 0, *((unsigned int *)t63), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t47, t32, 0, *((unsigned int *)t57), 1);
    goto LAB41;

LAB44:    xsi_set_current_line(95, ng0);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t12, 32, 1);
    t13 = (t10 + 4);
    t21 = *((unsigned int *)t13);
    t6 = (!(t21));
    if (t6 == 1)
        goto LAB51;

LAB52:
LAB48:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB43;

LAB46:    xsi_set_current_line(95, ng0);
    t15 = (t0 + 2728);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t0 + 2728);
    t20 = (t19 + 72U);
    t27 = *((char **)t20);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 4095U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 4095U);
    xsi_vlog_generic_get_array_select_value(t32, 32, t18, t27, t35, 2, 1, t36, 12, 2);
    t47 = (t0 + 2728);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t52 + 4);
    t53 = (t51 + 4);
    t71 = *((unsigned int *)t51);
    t72 = (t71 >> 0);
    *((unsigned int *)t52) = t72;
    t73 = *((unsigned int *)t53);
    t74 = (t73 >> 0);
    *((unsigned int *)t50) = t74;
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & 3U);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t76 & 3U);
    t54 = ((char*)((ng10)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_multiply(t57, 32, t52, 32, t54, 32);
    t55 = (t0 + 3048);
    t56 = (t55 + 56U);
    t58 = *((char **)t56);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t57, 32, t58, 32);
    xsi_vlog_generic_get_index_select_value(t46, 1, t32, t49, 2, t61, 32, 2);
    t59 = (t0 + 2568);
    t60 = (t0 + 2568);
    t62 = (t60 + 72U);
    t64 = *((char **)t62);
    t65 = (t0 + 3048);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_convert_bit_index(t63, t64, 2, t67, 32, 1);
    t68 = (t63 + 4);
    t77 = *((unsigned int *)t68);
    t6 = (!(t77));
    if (t6 == 1)
        goto LAB49;

LAB50:    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t59, t46, 0, *((unsigned int *)t63), 1);
    goto LAB50;

LAB51:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t10), 1);
    goto LAB52;

LAB55:    xsi_set_current_line(100, ng0);
    t9 = (t0 + 3048);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t17, 0, 8);
    t14 = (t17 + 4);
    t16 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 2);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4095U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t17, 12, 2);
    t18 = (t0 + 2728);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t27 = (t0 + 1368U);
    t33 = *((char **)t27);
    memset(t36, 0, 8);
    t27 = (t36 + 4);
    t34 = (t33 + 4);
    t28 = *((unsigned int *)t33);
    t29 = (t28 >> 0);
    *((unsigned int *)t36) = t29;
    t30 = *((unsigned int *)t34);
    t31 = (t30 >> 0);
    *((unsigned int *)t27) = t31;
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t40 & 3U);
    t41 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t41 & 3U);
    t35 = ((char*)((ng10)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 32, t36, 32, t35, 32);
    t37 = ((char*)((ng15)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t46, 32, t37, 32);
    xsi_vlog_generic_get_index_select_value(t32, 1, t10, t20, 2, t52, 32, 2);
    t38 = (t0 + 2568);
    t39 = (t0 + 2568);
    t47 = (t39 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 3048);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_bit_index(t57, t48, 2, t51, 32, 1);
    t53 = (t57 + 4);
    t42 = *((unsigned int *)t53);
    t6 = (!(t42));
    if (t6 == 1)
        goto LAB62;

LAB63:
LAB59:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB54;

LAB57:    xsi_set_current_line(100, ng0);
    t15 = (t0 + 2728);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t19 = (t0 + 2728);
    t20 = (t19 + 72U);
    t27 = *((char **)t20);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 4095U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 4095U);
    xsi_vlog_generic_get_array_select_value(t32, 32, t18, t27, t35, 2, 1, t36, 12, 2);
    t47 = (t0 + 2728);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 1368U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t52 + 4);
    t53 = (t51 + 4);
    t71 = *((unsigned int *)t51);
    t72 = (t71 >> 0);
    *((unsigned int *)t52) = t72;
    t73 = *((unsigned int *)t53);
    t74 = (t73 >> 0);
    *((unsigned int *)t50) = t74;
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & 3U);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t76 & 3U);
    t54 = ((char*)((ng10)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_multiply(t57, 32, t52, 32, t54, 32);
    t55 = (t0 + 3048);
    t56 = (t55 + 56U);
    t58 = *((char **)t56);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t57, 32, t58, 32);
    xsi_vlog_generic_get_index_select_value(t46, 1, t32, t49, 2, t61, 32, 2);
    t59 = (t0 + 2568);
    t60 = (t0 + 2568);
    t62 = (t60 + 72U);
    t64 = *((char **)t62);
    t65 = (t0 + 3048);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_convert_bit_index(t63, t64, 2, t67, 32, 1);
    t68 = (t63 + 4);
    t77 = *((unsigned int *)t68);
    t6 = (!(t77));
    if (t6 == 1)
        goto LAB60;

LAB61:    goto LAB59;

LAB60:    xsi_vlogvar_assign_value(t59, t46, 0, *((unsigned int *)t63), 1);
    goto LAB61;

LAB62:    xsi_vlogvar_assign_value(t38, t32, 0, *((unsigned int *)t57), 1);
    goto LAB63;

}


extern void work_m_00000000003456591525_2924402094_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Initial_44_1,(void *)Always_48_2,(void *)Always_80_3};
	xsi_register_didat("work_m_00000000003456591525_2924402094", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000003456591525_2924402094.didat");
	xsi_register_executes(pe);
}
