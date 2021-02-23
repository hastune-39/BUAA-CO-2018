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
static const char *ng0 = "D:/ise_save/p4Cpu/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static int ng9[] = {31, 0};
static unsigned int ng10[] = {6U, 0U};



static void Always_32_0(char *t0)
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

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(39, ng0);
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
        goto LAB24;

LAB25:
LAB26:    t35 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(41, ng0);
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
        goto LAB30;

LAB27:    if (t20 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t37) = 1;

LAB30:    memset(t36, 0, 8);
    t21 = (t37 + 4);
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t37);
    t29 = (t28 & t27);
    t31 = (t29 & 1U);
    if (t31 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t21) != 0)
        goto LAB33;

LAB34:    t35 = (t36 + 4);
    t32 = *((unsigned int *)t36);
    t33 = *((unsigned int *)t35);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB35;

LAB36:    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t35);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t35) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t36) > 0)
        goto LAB41;

LAB42:    memcpy(t10, t43, 8);

LAB43:    t44 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(43, ng0);
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
        goto LAB44;

LAB45:
LAB46:    t35 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(45, ng0);

LAB47:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB48:    t2 = (t0 + 2088);
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
        goto LAB49;

LAB50:    xsi_set_current_line(47, ng0);
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
        goto LAB54;

LAB51:    if (t20 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t36) = 1;

LAB54:    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t25 = *((unsigned int *)t38);
    t27 = (~(t25));
    t28 = *((unsigned int *)t36);
    t29 = (t28 & t27);
    t31 = (t29 & 1U);
    if (t31 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t38) != 0)
        goto LAB57;

LAB58:    t44 = (t37 + 4);
    t32 = *((unsigned int *)t37);
    t33 = *((unsigned int *)t44);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB59;

LAB60:    memcpy(t54, t37, 8);

LAB61:    t84 = (t54 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t54);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB71:    goto LAB23;

LAB19:    xsi_set_current_line(53, ng0);

LAB72:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB73:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t7, 32, t9, 5);
    memset(t36, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB75;

LAB74:    t21 = (t10 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t4) > *((unsigned int *)t10))
        goto LAB77;

LAB76:    *((unsigned int *)t36) = 1;

LAB77:    t35 = (t36 + 4);
    t11 = *((unsigned int *)t35);
    t12 = (~(t11));
    t13 = *((unsigned int *)t36);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB83:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB85;

LAB84:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB85;

LAB88:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB86;

LAB87:    t22 = (t10 + 4);
    t11 = *((unsigned int *)t22);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 32, 0LL);
    goto LAB23;

LAB24:    t19 = *((unsigned int *)t10);
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
    goto LAB26;

LAB29:    t9 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t36) = 1;
    goto LAB34;

LAB33:    t22 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB34;

LAB35:    t38 = ((char*)((ng5)));
    goto LAB36;

LAB37:    t43 = ((char*)((ng6)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t10, 32, t38, 32, t43, 32);
    goto LAB43;

LAB41:    memcpy(t10, t38, 8);
    goto LAB43;

LAB44:    t19 = *((unsigned int *)t10);
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
    goto LAB46;

LAB49:    xsi_set_current_line(46, ng0);
    t9 = (t0 + 2248);
    t21 = (t9 + 56U);
    t22 = *((char **)t21);
    t35 = (t0 + 1048U);
    t38 = *((char **)t35);
    t35 = (t0 + 1008U);
    t43 = (t35 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2088);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_index_select_value(t36, 32, t38, t44, 2, t47, 32, 1);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t22, 32, t36, 32);
    t48 = (t0 + 2248);
    xsi_vlogvar_assign_value(t48, t37, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB48;

LAB53:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t37) = 1;
    goto LAB58;

LAB57:    t43 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB58;

LAB59:    t45 = (t0 + 2248);
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
        goto LAB62;

LAB63:    if (*((unsigned int *)t51) != 0)
        goto LAB64;

LAB65:    t55 = *((unsigned int *)t37);
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
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB62:    *((unsigned int *)t50) = 1;
    goto LAB65;

LAB64:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB65;

LAB66:    t66 = *((unsigned int *)t54);
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
    goto LAB68;

LAB69:    xsi_set_current_line(48, ng0);
    t90 = ((char*)((ng5)));
    t91 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t91, t90, 0, 0, 32, 0LL);
    goto LAB71;

LAB75:    t22 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB77;

LAB79:    xsi_set_current_line(54, ng0);
    t38 = (t0 + 1208U);
    t43 = *((char **)t38);
    t38 = (t0 + 1168U);
    t44 = (t38 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 2088);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t51 = (t0 + 1528U);
    t53 = *((char **)t51);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t48, 32, t53, 5);
    xsi_vlog_generic_get_index_select_value(t37, 1, t43, t45, 2, t49, 32, 2);
    t51 = (t0 + 2408);
    t58 = (t0 + 2408);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t68 = (t0 + 2088);
    t69 = (t68 + 56U);
    t84 = *((char **)t69);
    xsi_vlog_generic_convert_bit_index(t50, t60, 2, t84, 32, 1);
    t90 = (t50 + 4);
    t16 = *((unsigned int *)t90);
    t6 = (!(t16));
    if (t6 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB73;

LAB81:    xsi_vlogvar_wait_assign_value(t51, t37, 0, *((unsigned int *)t50), 1, 0LL);
    goto LAB82;

LAB85:    t21 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB87;

LAB86:    *((unsigned int *)t10) = 1;
    goto LAB87;

LAB89:    xsi_set_current_line(55, ng0);
    t35 = (t0 + 1208U);
    t38 = *((char **)t35);
    memset(t36, 0, 8);
    t35 = (t36 + 4);
    t43 = (t38 + 4);
    t16 = *((unsigned int *)t38);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t36) = t18;
    t19 = *((unsigned int *)t43);
    t20 = (t19 >> 31);
    t23 = (t20 & 1);
    *((unsigned int *)t35) = t23;
    t44 = (t0 + 2408);
    t45 = (t0 + 2408);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng9)));
    t51 = (t0 + 2088);
    t53 = (t51 + 56U);
    t58 = *((char **)t53);
    memset(t49, 0, 8);
    xsi_vlog_signed_minus(t49, 32, t48, 32, t58, 32);
    xsi_vlog_generic_convert_bit_index(t37, t47, 2, t49, 32, 1);
    t59 = (t37 + 4);
    t24 = *((unsigned int *)t59);
    t6 = (!(t24));
    if (t6 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB83;

LAB91:    xsi_vlogvar_wait_assign_value(t44, t36, 0, *((unsigned int *)t37), 1, 0LL);
    goto LAB92;

}


extern void work_m_00000000001928971808_0886308060_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000001928971808_0886308060", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000001928971808_0886308060.didat");
	xsi_register_executes(pe);
}
