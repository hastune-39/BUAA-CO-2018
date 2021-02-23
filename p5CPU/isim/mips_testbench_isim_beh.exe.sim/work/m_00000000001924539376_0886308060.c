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
static const char *ng0 = "D:/ise_save/p5CPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static int ng9[] = {31, 0};



static void Always_30_0(char *t0)
{
    char t10[8];
    char t36[8];
    char t37[8];
    char t49[8];
    char t50[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
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
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB22;

LAB23:
LAB24:    t35 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t37, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB28;

LAB25:    if (t20 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t37) = 1;

LAB28:    memset(t36, 0, 8);
    t21 = (t37 + 4);
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t37);
    t29 = (t28 & t27);
    t31 = (t29 & 1U);
    if (t31 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t21) != 0)
        goto LAB31;

LAB32:    t35 = (t36 + 4);
    t32 = *((unsigned int *)t36);
    t33 = *((unsigned int *)t35);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB33;

LAB34:    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t35);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t35) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t36) > 0)
        goto LAB39;

LAB40:    memcpy(t10, t43, 8);

LAB41:    t44 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB42;

LAB43:
LAB44:    t35 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(43, ng0);

LAB45:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB46:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t3, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng6)));
    memset(t36, 0, 8);
    t21 = (t10 + 4);
    t22 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t22);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB52;

LAB49:    if (t20 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t36) = 1;

LAB52:    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t25 = *((unsigned int *)t38);
    t27 = (~(t25));
    t28 = *((unsigned int *)t36);
    t29 = (t28 & t27);
    t31 = (t29 & 1U);
    if (t31 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t38) != 0)
        goto LAB55;

LAB56:    t44 = (t37 + 4);
    t32 = *((unsigned int *)t37);
    t33 = *((unsigned int *)t44);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB57;

LAB58:    memcpy(t54, t37, 8);

LAB59:    t84 = (t54 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t54);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB69:    goto LAB21;

LAB22:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB24;

LAB27:    t9 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB31:    t22 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB33:    t38 = ((char*)((ng5)));
    goto LAB34;

LAB35:    t43 = ((char*)((ng6)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t10, 32, t38, 32, t43, 32);
    goto LAB41;

LAB39:    memcpy(t10, t38, 8);
    goto LAB41;

LAB42:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t33);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t34);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t33);
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t34);
    goto LAB44;

LAB47:    xsi_set_current_line(44, ng0);
    t9 = (t0 + 2088);
    t21 = (t9 + 56U);
    t22 = *((char **)t21);
    t35 = (t0 + 1048U);
    t38 = *((char **)t35);
    t35 = (t0 + 1008U);
    t43 = (t35 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 1928);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_index_select_value(t36, 32, t38, t44, 2, t47, 32, 1);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t22, 32, t36, 32);
    t48 = (t0 + 2088);
    xsi_vlogvar_assign_value(t48, t37, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB46;

LAB51:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t37) = 1;
    goto LAB56;

LAB55:    t43 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB56;

LAB57:    t45 = (t0 + 2088);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_signed_equal(t49, 32, t47, 32, t48, 32);
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    t39 = *((unsigned int *)t51);
    t40 = (~(t39));
    t41 = *((unsigned int *)t49);
    t42 = (t41 & t40);
    t52 = (t42 & 1U);
    if (t52 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t51) != 0)
        goto LAB62;

LAB63:    t55 = *((unsigned int *)t37);
    t56 = *((unsigned int *)t50);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t37 + 4);
    t59 = (t50 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB59;

LAB60:    *((unsigned int *)t50) = 1;
    goto LAB63;

LAB62:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB63;

LAB64:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t37 + 4);
    t69 = (t50 + 4);
    t70 = *((unsigned int *)t37);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t50);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t6 = (t71 & t73);
    t26 = (t75 & t77);
    t78 = (~(t6));
    t79 = (~(t26));
    t80 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t80 & t78);
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    t82 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t82 & t78);
    t83 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t83 & t79);
    goto LAB66;

LAB67:    xsi_set_current_line(46, ng0);
    t90 = ((char*)((ng5)));
    t91 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 32, 0LL);
    goto LAB69;

}


extern void work_m_00000000001924539376_0886308060_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001924539376_0886308060", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000001924539376_0886308060.didat");
	xsi_register_executes(pe);
}
