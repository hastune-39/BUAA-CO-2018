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
static const char *ng0 = "D:/ise_save/p5CPU/IFU.v";
static int ng1[] = {0, 0};
static const char *ng2 = "code.txt";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {14, 0};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {12288U, 0U};
static unsigned int ng11[] = {3U, 0U};
static int ng12[] = {8, 0};



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

static void Initial_40_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2728);
    t2 = ((char*)((ng1)));
    xsi_vlogfile_readmemh(ng2, 0, t1, 1, *((unsigned int *)t2), 0, 0);

LAB1:    return;
}

static void Always_45_2(char *t0)
{
    char t16[8];
    char t32[8];
    char t34[8];
    char t44[8];
    char t48[8];
    char t56[8];
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
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
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

LAB7:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(51, ng0);

LAB24:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t14, 32, t15, 32);
    t17 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t11 = (t4 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB28;

LAB25:    if (t22 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;

LAB28:    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t11, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 32, 0LL);

LAB31:    goto LAB23;

LAB19:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t32) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t10 & 67108863U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 67108863U);
    t14 = (t0 + 2888);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memset(t34, 0, 8);
    t30 = (t34 + 4);
    t31 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 28);
    *((unsigned int *)t34) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 28);
    *((unsigned int *)t30) = t22;
    t23 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t23 & 15U);
    t24 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t24 & 15U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t34, 4, t32, 26, t3, 2);
    t33 = ((char*)((ng10)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_minus(t44, 32, t16, 32, t33, 32);
    t35 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t35, t44, 0, 0, 32, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t4, 32, t3, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 32, 0LL);
    goto LAB23;

LAB27:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 2888);
    t30 = (t17 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng3)));
    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 65535U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 65535U);
    t45 = ((char*)((ng7)));
    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 15);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    xsi_vlog_mul_concat(t44, 14, 1, t45, 1U, t48, 1);
    xsi_vlogtype_concat(t32, 32, 32, 3U, t44, 14, t34, 16, t33, 2);
    memset(t56, 0, 8);
    xsi_vlog_unsigned_add(t56, 32, t31, 32, t32, 32);
    t57 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 32, 0LL);
    goto LAB31;

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

LAB0:    t1 = (t0 + 4552U);
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
    t17 = (t0 + 5232);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t5, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 5136);
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

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 5296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 5152);
    *((int *)t14) = 1;

LAB1:    return;
}


extern void work_m_00000000002038152342_3224323566_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Initial_40_1,(void *)Always_45_2,(void *)Cont_68_3,(void *)Cont_69_4};
	xsi_register_didat("work_m_00000000002038152342_3224323566", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000002038152342_3224323566.didat");
	xsi_register_executes(pe);
}
