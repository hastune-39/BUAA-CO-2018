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
static const char *ng0 = "D:/ise_save/p4Cpu/IFU.v";
static int ng1[] = {0, 0};
static const char *ng2 = "code.txt";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {14, 0};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {12288U, 0U};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {3, 0};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_42_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2728);
    t2 = ((char*)((ng1)));
    xsi_vlogfile_readmemh(ng2, 0, t1, 1, *((unsigned int *)t2), 0, 0);

LAB1:    return;
}

static void Always_47_2(char *t0)
{
    char t14[8];
    char t33[8];
    char t34[8];
    char t36[8];
    char t46[8];
    char t50[8];
    char t58[8];
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
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
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
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(52, ng0);

LAB20:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t11, 32, t12, 32);
    t15 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 32, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB24;

LAB21:    if (t20 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t14) = 1;

LAB24:    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 32, 0LL);

LAB27:    goto LAB19;

LAB15:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1528U);
    t11 = *((char **)t5);
    memset(t33, 0, 8);
    t5 = (t33 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t33) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t10 & 67108863U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 67108863U);
    t15 = (t0 + 2888);
    t23 = (t15 + 56U);
    t29 = *((char **)t23);
    memset(t34, 0, 8);
    t30 = (t34 + 4);
    t31 = (t29 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (t17 >> 28);
    *((unsigned int *)t34) = t18;
    t19 = *((unsigned int *)t31);
    t20 = (t19 >> 28);
    *((unsigned int *)t30) = t20;
    t21 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t21 & 15U);
    t22 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t22 & 15U);
    xsi_vlogtype_concat(t14, 32, 32, 3U, t34, 4, t33, 26, t4, 2);
    t32 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_minus(t36, 32, t14, 32, t32, 32);
    t35 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 32, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t4, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 32, 0LL);
    goto LAB19;

LAB23:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(57, ng0);
    t29 = (t0 + 2888);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t31, 32, t32, 32);
    t35 = ((char*)((ng3)));
    t37 = (t0 + 1528U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 65535U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 65535U);
    t47 = ((char*)((ng7)));
    t48 = (t0 + 1528U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t48 = (t50 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 15);
    t54 = (t53 & 1);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 15);
    t57 = (t56 & 1);
    *((unsigned int *)t48) = t57;
    xsi_vlog_mul_concat(t46, 14, 1, t47, 1U, t50, 1);
    xsi_vlogtype_concat(t34, 32, 32, 3U, t46, 14, t36, 16, t35, 2);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t33, 32, t34, 32);
    t59 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t59, t58, 0, 0, 32, 0LL);
    goto LAB27;

}

static void Cont_68_3(char *t0)
{
    char t5[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_divide(t16, 32, t14, 32, t15, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t16, 32, 2);
    t17 = (t0 + 5656);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t5, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 5544);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_69_4(char *t0)
{
    char t6[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 5720);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 5560);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_70_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5784);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5576);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003406150954_3224323566_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Initial_42_1,(void *)Always_47_2,(void *)Cont_68_3,(void *)Cont_69_4,(void *)Cont_70_5};
	xsi_register_didat("work_m_00000000003406150954_3224323566", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000003406150954_3224323566.didat");
	xsi_register_executes(pe);
}
