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
static const char *ng0 = "D:/ise_save/p4Cpu/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "@%h: *%h <= %h";
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {16, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {8, 0};
static int ng11[] = {32, 0};
static int ng12[] = {15, 0};
static int ng13[] = {7, 0};



static void Initial_36_0(char *t0)
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

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2728);
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
LAB4:    xsi_set_current_line(37, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2568);
    t16 = (t0 + 2568);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
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

LAB7:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t37[8];
    char t47[8];
    char t49[8];
    char t53[8];
    char t60[8];
    char t64[8];
    char t68[8];
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    char *t45;
    char *t46;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
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

LAB6:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB9:    t2 = (t0 + 2728);
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

LAB10:    xsi_set_current_line(43, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2568);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
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

LAB13:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB9;

LAB12:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB17:    t4 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t28 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2568);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t37, 0, 8);
    t20 = (t37 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t37) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t10 & 1023U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 1023U);
    xsi_vlogtype_concat(t16, 12, 12, 2U, t37, 10, t19, 2);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t23 = (t13 + 4);
    t30 = *((unsigned int *)t23);
    t28 = (!(t30));
    t24 = (t15 + 4);
    t33 = *((unsigned int *)t24);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB40;

LAB41:
LAB26:    goto LAB16;

LAB18:    xsi_set_current_line(47, ng0);

LAB27:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2568);
    t14 = (t0 + 2568);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    memset(t37, 0, 8);
    t23 = (t37 + 4);
    t25 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t30 = (t27 >> 2);
    *((unsigned int *)t37) = t30;
    t33 = *((unsigned int *)t25);
    t34 = (t33 >> 2);
    *((unsigned int *)t23) = t34;
    t38 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t38 & 1023U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 1023U);
    xsi_vlogtype_concat(t16, 12, 12, 2U, t37, 10, t22, 2);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t16, 12, 2);
    t26 = (t13 + 4);
    t40 = *((unsigned int *)t26);
    t31 = (!(t40));
    t29 = (t15 + 4);
    t41 = *((unsigned int *)t29);
    t32 = (!(t41));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t3, 32, t2, 32);
    t4 = (t0 + 1048U);
    t11 = *((char **)t4);
    t4 = (t0 + 1208U);
    t12 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t13, 32, (char)118, t11, 32, (char)118, t12, 32);
    goto LAB26;

LAB20:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB30:    t2 = (t0 + 2728);
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
        goto LAB31;

LAB32:    goto LAB26;

LAB22:    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB35:    t2 = (t0 + 2728);
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
        goto LAB36;

LAB37:    goto LAB26;

LAB28:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t15);
    t36 = (t42 - t43);
    t44 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), t44, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(51, ng0);
    t14 = (t0 + 1208U);
    t17 = *((char **)t14);
    t14 = (t0 + 1168U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2568);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 2568);
    t45 = (t29 + 64U);
    t46 = *((char **)t45);
    t48 = ((char*)((ng4)));
    t50 = (t0 + 1048U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t27 = *((unsigned int *)t51);
    t30 = (t27 >> 2);
    *((unsigned int *)t49) = t30;
    t33 = *((unsigned int *)t52);
    t34 = (t33 >> 2);
    *((unsigned int *)t50) = t34;
    t38 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t38 & 1023U);
    t39 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t39 & 1023U);
    xsi_vlogtype_concat(t47, 12, 12, 2U, t49, 10, t48, 2);
    xsi_vlog_generic_convert_array_indices(t16, t37, t26, t46, 2, 1, t47, 12, 2);
    t54 = (t0 + 2568);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng8)));
    t58 = (t0 + 1048U);
    t59 = *((char **)t58);
    t58 = (t0 + 1008U);
    t61 = (t58 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t60, 32, t59, t62, 2, t63, 32, 1);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_multiply(t64, 32, t57, 32, t60, 32);
    t65 = (t0 + 2728);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    memset(t68, 0, 8);
    xsi_vlog_unsigned_add(t68, 32, t64, 32, t67, 32);
    xsi_vlog_generic_convert_bit_index(t53, t56, 2, t68, 32, 2);
    t69 = (t16 + 4);
    t40 = *((unsigned int *)t69);
    t28 = (!(t40));
    t70 = (t37 + 4);
    t41 = *((unsigned int *)t70);
    t31 = (!(t41));
    t32 = (t28 && t31);
    t71 = (t53 + 4);
    t42 = *((unsigned int *)t71);
    t35 = (!(t42));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB30;

LAB33:    t43 = *((unsigned int *)t37);
    t72 = *((unsigned int *)t53);
    t44 = (t43 + t72);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, t44, 1, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(52, ng0);
    t14 = (t0 + 1208U);
    t17 = *((char **)t14);
    t14 = (t0 + 1168U);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 1, t17, t19, 2, t22, 32, 1);
    t23 = (t0 + 2568);
    t24 = (t0 + 2568);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 2568);
    t45 = (t29 + 64U);
    t46 = *((char **)t45);
    t48 = ((char*)((ng4)));
    t50 = (t0 + 1048U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t27 = *((unsigned int *)t51);
    t30 = (t27 >> 2);
    *((unsigned int *)t49) = t30;
    t33 = *((unsigned int *)t52);
    t34 = (t33 >> 2);
    *((unsigned int *)t50) = t34;
    t38 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t38 & 1023U);
    t39 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t39 & 1023U);
    xsi_vlogtype_concat(t47, 12, 12, 2U, t49, 10, t48, 2);
    xsi_vlog_generic_convert_array_indices(t16, t37, t26, t46, 2, 1, t47, 12, 2);
    t54 = (t0 + 2568);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng10)));
    t58 = (t0 + 1048U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    t58 = (t60 + 4);
    t61 = (t59 + 4);
    t40 = *((unsigned int *)t59);
    t41 = (t40 >> 0);
    *((unsigned int *)t60) = t41;
    t42 = *((unsigned int *)t61);
    t43 = (t42 >> 0);
    *((unsigned int *)t58) = t43;
    t72 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t72 & 3U);
    t73 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t73 & 3U);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_multiply(t64, 32, t57, 32, t60, 32);
    t62 = (t0 + 2728);
    t63 = (t62 + 56U);
    t65 = *((char **)t63);
    memset(t68, 0, 8);
    xsi_vlog_unsigned_add(t68, 32, t64, 32, t65, 32);
    xsi_vlog_generic_convert_bit_index(t53, t56, 2, t68, 32, 2);
    t66 = (t16 + 4);
    t74 = *((unsigned int *)t66);
    t28 = (!(t74));
    t67 = (t37 + 4);
    t75 = *((unsigned int *)t67);
    t31 = (!(t75));
    t32 = (t28 && t31);
    t69 = (t53 + 4);
    t76 = *((unsigned int *)t69);
    t35 = (!(t76));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 32);
    goto LAB35;

LAB38:    t77 = *((unsigned int *)t37);
    t78 = *((unsigned int *)t53);
    t44 = (t77 + t78);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, t44, 1, 0LL);
    goto LAB39;

LAB40:    t34 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t15);
    t35 = (t34 - t38);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB41;

}

static void Always_58_2(char *t0)
{
    char t10[8];
    char t17[8];
    char t19[8];
    char t36[8];
    char t38[8];
    char t48[8];
    char t55[8];
    char t59[8];
    char t63[8];
    char t65[8];
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
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 2568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2568);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng4)));
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 2);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 2);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 1023U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 1023U);
    xsi_vlogtype_concat(t17, 12, 12, 2U, t19, 10, t18, 2);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t13, t16, 2, 1, t17, 12, 2);
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB16:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:    goto LAB15;

LAB11:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB35:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    goto LAB15;

LAB17:    xsi_set_current_line(62, ng0);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t28 = *((unsigned int *)t14);
    t30 = (~(t28));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2568);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t19, 0, 8);
    t15 = (t19 + 4);
    t18 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 2);
    *((unsigned int *)t15) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 1023U);
    t28 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t28 & 1023U);
    xsi_vlogtype_concat(t17, 12, 12, 2U, t19, 10, t14, 2);
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t17, 12, 2);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t29 = ((char*)((ng8)));
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = (t0 + 1008U);
    t37 = (t34 + 72U);
    t39 = *((char **)t37);
    t40 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t38, 32, t35, t39, 2, t40, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t29, 32, t38, 32);
    t41 = ((char*)((ng12)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 32, t48, 32, t41, 32);
    xsi_vlog_generic_get_index_select_value(t36, 1, t10, t22, 2, t55, 32, 2);
    t49 = ((char*)((ng7)));
    memset(t59, 0, 8);
    t50 = (t36 + 4);
    t51 = (t49 + 4);
    t30 = *((unsigned int *)t36);
    t31 = *((unsigned int *)t49);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t50);
    t42 = *((unsigned int *)t51);
    t43 = (t33 ^ t42);
    t44 = (t32 | t43);
    t45 = *((unsigned int *)t50);
    t46 = *((unsigned int *)t51);
    t47 = (t45 | t46);
    t73 = (~(t47));
    t74 = (t44 & t73);
    if (t74 != 0)
        goto LAB27;

LAB24:    if (t47 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t59) = 1;

LAB27:    t53 = (t59 + 4);
    t75 = *((unsigned int *)t53);
    t76 = (~(t75));
    t77 = *((unsigned int *)t59);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t12, 32, 1);
    t13 = (t10 + 4);
    t23 = *((unsigned int *)t13);
    t6 = (!(t23));
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB30:
LAB21:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB16;

LAB19:    xsi_set_current_line(63, ng0);
    t15 = (t0 + 2568);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t29 = (t0 + 2568);
    t34 = (t29 + 64U);
    t35 = *((char **)t34);
    t37 = ((char*)((ng4)));
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 1023U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 1023U);
    xsi_vlogtype_concat(t36, 12, 12, 2U, t38, 10, t37, 2);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t35, 2, 1, t36, 12, 2);
    t49 = (t0 + 2568);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng8)));
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    t53 = (t0 + 1008U);
    t56 = (t53 + 72U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t55, 32, t54, t57, 2, t58, 32, 1);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t52, 32, t55, 32);
    t60 = (t0 + 2728);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t59, 32, t62, 32);
    xsi_vlog_generic_get_index_select_value(t48, 1, t19, t51, 2, t63, 32, 2);
    t64 = (t0 + 2408);
    t66 = (t0 + 2408);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2728);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_bit_index(t65, t68, 2, t71, 32, 1);
    t72 = (t65 + 4);
    t73 = *((unsigned int *)t72);
    t6 = (!(t73));
    if (t6 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t64, t48, 0, *((unsigned int *)t65), 1, 0LL);
    goto LAB23;

LAB26:    t52 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(66, ng0);
    t54 = ((char*)((ng7)));
    t56 = (t0 + 2408);
    t57 = (t0 + 2408);
    t58 = (t57 + 72U);
    t60 = *((char **)t58);
    t61 = (t0 + 2728);
    t62 = (t61 + 56U);
    t64 = *((char **)t62);
    xsi_vlog_generic_convert_bit_index(t63, t60, 2, t64, 32, 1);
    t66 = (t63 + 4);
    t80 = *((unsigned int *)t66);
    t6 = (!(t80));
    if (t6 == 1)
        goto LAB31;

LAB32:    goto LAB30;

LAB31:    xsi_vlogvar_wait_assign_value(t56, t54, 0, *((unsigned int *)t63), 1, 0LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t10), 1, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(70, ng0);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t12, 32, t13, 32);
    t14 = (t17 + 4);
    t28 = *((unsigned int *)t14);
    t30 = (~(t28));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2568);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t19, 0, 8);
    t15 = (t19 + 4);
    t18 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 2);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t18);
    t26 = (t25 >> 2);
    *((unsigned int *)t15) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 1023U);
    t28 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t28 & 1023U);
    xsi_vlogtype_concat(t17, 12, 12, 2U, t19, 10, t14, 2);
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t17, 12, 2);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t29 = ((char*)((ng10)));
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t38, 0, 8);
    t34 = (t38 + 4);
    t37 = (t35 + 4);
    t30 = *((unsigned int *)t35);
    t31 = (t30 >> 0);
    *((unsigned int *)t38) = t31;
    t32 = *((unsigned int *)t37);
    t33 = (t32 >> 0);
    *((unsigned int *)t34) = t33;
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t42 & 3U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 3U);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t29, 32, t38, 32);
    t39 = ((char*)((ng13)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 32, t48, 32, t39, 32);
    xsi_vlog_generic_get_index_select_value(t36, 1, t10, t22, 2, t55, 32, 2);
    t40 = ((char*)((ng7)));
    memset(t59, 0, 8);
    t41 = (t36 + 4);
    t49 = (t40 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t41);
    t73 = *((unsigned int *)t49);
    t74 = (t47 ^ t73);
    t75 = (t46 | t74);
    t76 = *((unsigned int *)t41);
    t77 = *((unsigned int *)t49);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB46;

LAB43:    if (t78 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t59) = 1;

LAB46:    t51 = (t59 + 4);
    t81 = *((unsigned int *)t51);
    t82 = (~(t81));
    t83 = *((unsigned int *)t59);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t10, t8, 2, t12, 32, 1);
    t13 = (t10 + 4);
    t23 = *((unsigned int *)t13);
    t6 = (!(t23));
    if (t6 == 1)
        goto LAB52;

LAB53:
LAB49:
LAB40:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB35;

LAB38:    xsi_set_current_line(71, ng0);
    t15 = (t0 + 2568);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t29 = (t0 + 2568);
    t34 = (t29 + 64U);
    t35 = *((char **)t34);
    t37 = ((char*)((ng4)));
    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 1023U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 1023U);
    xsi_vlogtype_concat(t36, 12, 12, 2U, t38, 10, t37, 2);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t35, 2, 1, t36, 12, 2);
    t49 = (t0 + 2568);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng10)));
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (t73 >> 0);
    *((unsigned int *)t55) = t74;
    t75 = *((unsigned int *)t56);
    t76 = (t75 >> 0);
    *((unsigned int *)t53) = t76;
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & 3U);
    t78 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t78 & 3U);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t52, 32, t55, 32);
    t57 = (t0 + 2728);
    t58 = (t57 + 56U);
    t60 = *((char **)t58);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t59, 32, t60, 32);
    xsi_vlog_generic_get_index_select_value(t48, 1, t19, t51, 2, t63, 32, 2);
    t61 = (t0 + 2408);
    t62 = (t0 + 2408);
    t64 = (t62 + 72U);
    t66 = *((char **)t64);
    t67 = (t0 + 2728);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_generic_convert_bit_index(t65, t66, 2, t69, 32, 1);
    t70 = (t65 + 4);
    t79 = *((unsigned int *)t70);
    t6 = (!(t79));
    if (t6 == 1)
        goto LAB41;

LAB42:    goto LAB40;

LAB41:    xsi_vlogvar_wait_assign_value(t61, t48, 0, *((unsigned int *)t65), 1, 0LL);
    goto LAB42;

LAB45:    t50 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(74, ng0);
    t52 = ((char*)((ng7)));
    t53 = (t0 + 2408);
    t54 = (t0 + 2408);
    t56 = (t54 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 2728);
    t60 = (t58 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_convert_bit_index(t63, t57, 2, t61, 32, 1);
    t62 = (t63 + 4);
    t86 = *((unsigned int *)t62);
    t6 = (!(t86));
    if (t6 == 1)
        goto LAB50;

LAB51:    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t53, t52, 0, *((unsigned int *)t63), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t10), 1, 0LL);
    goto LAB53;

}


extern void work_m_00000000003267843386_2924402094_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_41_1,(void *)Always_58_2};
	xsi_register_didat("work_m_00000000003267843386_2924402094", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000003267843386_2924402094.didat");
	xsi_register_executes(pe);
}
