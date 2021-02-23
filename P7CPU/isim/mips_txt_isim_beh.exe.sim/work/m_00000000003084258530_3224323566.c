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
static const char *ng0 = "D:/code_software/ise_save/P7CPU/IFU.v";
static int ng1[] = {0, 0};
static const char *ng2 = "code.txt";
static const char *ng3 = "code_handler.txt";
static int ng4[] = {1120, 0};
static int ng5[] = {2047, 0};
static unsigned int ng6[] = {16768U, 0U};
static unsigned int ng7[] = {12288U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {1, 0};
static int ng12[] = {14, 0};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {2U, 0U};
static unsigned int ng15[] = {3U, 0U};
static int ng16[] = {8, 0};
static unsigned int ng17[] = {20476U, 0U};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3368);
    xsi_vlogfile_readmemh(ng2, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3368);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    xsi_vlogfile_readmemh(ng3, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t3));

LAB1:    return;
}

static void Always_51_2(char *t0)
{
    char t13[8];
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
    int t14;
    char *t15;
    char *t16;
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

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
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

LAB7:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(60, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB15:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 32, t4, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(61, ng0);

LAB20:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t14 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng14)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t14 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t14 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    xsi_set_current_line(63, ng0);

LAB31:    xsi_set_current_line(64, ng0);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t15, 32, t16, 32);
    t17 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 32, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    memset(t13, 0, 8);
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
        goto LAB35;

LAB32:    if (t22 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;

LAB35:    t16 = (t13 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng13)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t11, 32);
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);

LAB38:    goto LAB30;

LAB26:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng8)));
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
    t15 = (t0 + 3528);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
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
    xsi_vlogtype_concat(t13, 32, 32, 3U, t34, 4, t32, 26, t3, 2);
    t33 = ((char*)((ng7)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_minus(t44, 32, t13, 32, t33, 32);
    t35 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t35, t44, 0, 0, 32, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t3, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB30;

LAB34:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(68, ng0);
    t17 = (t0 + 3528);
    t30 = (t17 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng8)));
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
    t45 = ((char*)((ng12)));
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
    t57 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 32, 0LL);
    goto LAB38;

}

static void Cont_83_3(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 3528);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng9)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_divide(t16, 32, t14, 32, t15, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t16, 32, 2);
    t17 = (t0 + 6136);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t5, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t22 = (t0 + 6024);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_84_4(char *t0)
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

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 6200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 6040);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_85_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t17[8];
    char t33[8];
    char t46[8];
    char t52[8];
    char t53[8];
    char t57[8];
    char t74[8];
    char t75[8];
    char t79[8];
    char t87[8];
    char t126[8];
    char t134[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3528);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB5;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB7:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB12;

LAB13:    memcpy(t134, t33, 8);

LAB14:    memset(t4, 0, 8);
    t162 = (t134 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t134);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t162) != 0)
        goto LAB52;

LAB53:    t169 = (t4 + 4);
    t170 = *((unsigned int *)t4);
    t171 = *((unsigned int *)t169);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB54;

LAB55:    t174 = *((unsigned int *)t4);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t169) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t4) > 0)
        goto LAB60;

LAB61:    memcpy(t3, t178, 8);

LAB62:    t179 = (t0 + 6264);
    t180 = (t179 + 56U);
    t181 = *((char **)t180);
    t182 = (t181 + 56U);
    t183 = *((char **)t182);
    memset(t183, 0, 8);
    t184 = 1U;
    t185 = t184;
    t186 = (t3 + 4);
    t187 = *((unsigned int *)t3);
    t184 = (t184 & t187);
    t188 = *((unsigned int *)t186);
    t185 = (t185 & t188);
    t189 = (t183 + 4);
    t190 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t190 | t184);
    t191 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t191 | t185);
    xsi_driver_vfirst_trans(t179, 0, 0);
    t192 = (t0 + 6056);
    *((int *)t192) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB10:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t47 = (t0 + 3528);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng7)));
    t51 = ((char*)((ng7)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_minus(t52, 32, t50, 32, t51, 32);
    memset(t53, 0, 8);
    t54 = (t49 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB16;

LAB15:    t55 = (t52 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t49) < *((unsigned int *)t52))
        goto LAB18;

LAB17:    *((unsigned int *)t53) = 1;

LAB18:    memset(t57, 0, 8);
    t58 = (t53 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t58) != 0)
        goto LAB22;

LAB23:    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB24;

LAB25:    memcpy(t87, t57, 8);

LAB26:    memset(t46, 0, 8);
    t119 = (t87 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t87);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t119) == 0)
        goto LAB39;

LAB41:    t125 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t125) = 1;

LAB42:    memset(t126, 0, 8);
    t127 = (t46 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t46);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t127) != 0)
        goto LAB45;

LAB46:    t135 = *((unsigned int *)t33);
    t136 = *((unsigned int *)t126);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = (t33 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB14;

LAB16:    t56 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t57) = 1;
    goto LAB23;

LAB22:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB23;

LAB24:    t69 = (t0 + 3528);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng17)));
    t73 = ((char*)((ng7)));
    memset(t74, 0, 8);
    xsi_vlog_unsigned_minus(t74, 32, t72, 32, t73, 32);
    memset(t75, 0, 8);
    t76 = (t71 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB28;

LAB27:    t77 = (t74 + 4);
    if (*((unsigned int *)t77) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t71) > *((unsigned int *)t74))
        goto LAB30;

LAB29:    *((unsigned int *)t75) = 1;

LAB30:    memset(t79, 0, 8);
    t80 = (t75 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t75);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t80) != 0)
        goto LAB34;

LAB35:    t88 = *((unsigned int *)t57);
    t89 = *((unsigned int *)t79);
    t90 = (t88 & t89);
    *((unsigned int *)t87) = t90;
    t91 = (t57 + 4);
    t92 = (t79 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB26;

LAB28:    t78 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t79) = 1;
    goto LAB35;

LAB34:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB35;

LAB36:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t57 + 4);
    t102 = (t79 + 4);
    t103 = *((unsigned int *)t57);
    t104 = (~(t103));
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t79);
    t108 = (~(t107));
    t109 = *((unsigned int *)t102);
    t110 = (~(t109));
    t111 = (t104 & t106);
    t112 = (t108 & t110);
    t113 = (~(t111));
    t114 = (~(t112));
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    t116 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t116 & t114);
    t117 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t117 & t113);
    t118 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t118 & t114);
    goto LAB38;

LAB39:    *((unsigned int *)t46) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t126) = 1;
    goto LAB46;

LAB45:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB46;

LAB47:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t33 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t148);
    t151 = (~(t150));
    t152 = *((unsigned int *)t33);
    t153 = (t152 & t151);
    t154 = *((unsigned int *)t149);
    t155 = (~(t154));
    t156 = *((unsigned int *)t126);
    t157 = (t156 & t155);
    t158 = (~(t153));
    t159 = (~(t157));
    t160 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t160 & t158);
    t161 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t161 & t159);
    goto LAB49;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB52:    t168 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB53;

LAB54:    t173 = ((char*)((ng11)));
    goto LAB55;

LAB56:    t178 = ((char*)((ng1)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t3, 32, t173, 32, t178, 32);
    goto LAB62;

LAB60:    memcpy(t3, t173, 8);
    goto LAB62;

}


extern void work_m_00000000003084258530_3224323566_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Initial_45_1,(void *)Always_51_2,(void *)Cont_83_3,(void *)Cont_84_4,(void *)Cont_85_5};
	xsi_register_didat("work_m_00000000003084258530_3224323566", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003084258530_3224323566.didat");
	xsi_register_executes(pe);
}
