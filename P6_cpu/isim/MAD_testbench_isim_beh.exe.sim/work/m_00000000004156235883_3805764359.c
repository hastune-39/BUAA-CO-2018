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
static const char *ng0 = "D:/code_software/ise_save/P6_cpu/MAD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {10U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_48_1(char *t0)
{
    char t13[8];
    char t47[8];
    char t48[8];
    char t60[8];
    char t68[8];
    char t102[16];
    char t103[16];
    char t104[16];
    char t105[16];
    char t106[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
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

LAB7:    xsi_set_current_line(54, ng0);

LAB10:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB11;

LAB12:
LAB13:    t32 = (t13 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(59, ng0);

LAB24:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(64, ng0);

LAB53:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB55;

LAB54:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB56;

LAB57:    t32 = (t13 + 4);
    t6 = *((unsigned int *)t32);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB8;

LAB11:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & t28);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    goto LAB13;

LAB14:    xsi_set_current_line(55, ng0);

LAB17:    xsi_set_current_line(56, ng0);
    t38 = (t0 + 1528U);
    t39 = *((char **)t38);
    t38 = (t39 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB18:    xsi_set_current_line(56, ng0);
    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    t45 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t45, t46, 0, 0, 32, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t28 = (t21 & t26);
    if (t28 != 0)
        goto LAB31;

LAB28:    if (t25 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t13) = 1;

LAB31:    memset(t47, 0, 8);
    t32 = (t13 + 4);
    t29 = *((unsigned int *)t32);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t33 = (t31 & t30);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t32) != 0)
        goto LAB34;

LAB35:    t39 = (t47 + 4);
    t35 = *((unsigned int *)t47);
    t36 = (!(t35));
    t37 = *((unsigned int *)t39);
    t40 = (t36 || t37);
    if (t40 > 0)
        goto LAB36;

LAB37:    memcpy(t68, t47, 8);

LAB38:    t94 = (t68 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t68);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB52:    goto LAB27;

LAB30:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t47) = 1;
    goto LAB35;

LAB34:    t38 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB35;

LAB36:    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng3)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    t50 = (t45 + 4);
    t41 = *((unsigned int *)t46);
    t42 = *((unsigned int *)t45);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t49);
    t51 = *((unsigned int *)t50);
    t52 = (t44 ^ t51);
    t53 = (t43 | t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB42;

LAB39:    if (t56 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t48) = 1;

LAB42:    memset(t60, 0, 8);
    t61 = (t48 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t48);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t61) != 0)
        goto LAB45;

LAB46:    t69 = *((unsigned int *)t47);
    t70 = *((unsigned int *)t60);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = (t47 + 4);
    t73 = (t60 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB38;

LAB41:    t59 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t60) = 1;
    goto LAB46;

LAB45:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB46;

LAB47:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t47 + 4);
    t83 = (t60 + 4);
    t84 = *((unsigned int *)t82);
    t85 = (~(t84));
    t86 = *((unsigned int *)t47);
    t23 = (t86 & t85);
    t87 = *((unsigned int *)t83);
    t88 = (~(t87));
    t89 = *((unsigned int *)t60);
    t27 = (t89 & t88);
    t90 = (~(t23));
    t91 = (~(t27));
    t92 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t92 & t90);
    t93 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t93 & t91);
    goto LAB49;

LAB50:    xsi_set_current_line(62, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 5, 0LL);
    goto LAB52;

LAB55:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;
    goto LAB57;

LAB59:    xsi_set_current_line(66, ng0);
    t38 = (t0 + 3528);
    t39 = (t38 + 56U);
    t45 = *((char **)t39);
    t46 = ((char*)((ng6)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t45, 5, t46, 32);
    t49 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t49, t47, 0, 0, 5, 0LL);
    goto LAB61;

LAB62:    xsi_set_current_line(69, ng0);

LAB65:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);

LAB66:    t4 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t23 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng3)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t23 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t23 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t23 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng9)));
    t23 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t23 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB64;

LAB67:    xsi_set_current_line(71, ng0);
    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t102, 64, t12, 32);
    t11 = (t0 + 2008U);
    t19 = *((char **)t11);
    xsi_vlogtype_sign_extend(t103, 64, t19, 32);
    xsi_vlog_signed_multiply(t104, 64, t102, 64, t103, 64);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t104, 0, 0, 32, 0LL);
    t32 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t32, t104, 32, 0, 32, 0LL);
    goto LAB77;

LAB69:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    xsi_vlogtype_concat(t102, 64, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    xsi_vlogtype_concat(t103, 64, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_multiply(t104, 64, t102, 64, t103, 64);
    t19 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t19, t104, 0, 0, 32, 0LL);
    t32 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t32, t104, 32, 0, 32, 0LL);
    goto LAB77;

LAB71:    xsi_set_current_line(73, ng0);

LAB78:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    memset(t48, 0, 8);
    xsi_vlog_signed_divide(t48, 32, t4, 32, t11, 32);
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t48, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t48, 0, 8);
    xsi_vlog_signed_mod(t48, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t48, 0, 0, 32, 0LL);
    goto LAB77;

LAB73:    xsi_set_current_line(77, ng0);

LAB79:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    xsi_vlogtype_concat(t102, 33, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    xsi_vlogtype_concat(t103, 33, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_divide(t104, 33, t102, 33, t103, 33);
    t19 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t19, t104, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t102, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng2)));
    xsi_vlogtype_concat(t103, 33, 33, 2U, t4, 1, t11, 32);
    xsi_vlog_unsigned_mod(t104, 33, t102, 33, t103, 33);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t104, 0, 0, 32, 0LL);
    goto LAB77;

LAB75:    xsi_set_current_line(81, ng0);

LAB80:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3368);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 3208);
    t19 = (t12 + 56U);
    t32 = *((char **)t19);
    xsi_vlogtype_concat(t104, 64, 64, 2U, t32, 32, t11, 32);
    t38 = (t0 + 1848U);
    t39 = *((char **)t38);
    t38 = (t0 + 2008U);
    t45 = *((char **)t38);
    memset(t48, 0, 8);
    xsi_vlog_signed_multiply(t48, 32, t39, 32, t45, 32);
    xsi_vlogtype_sign_extend(t105, 64, t48, 32);
    xsi_vlog_signed_add(t106, 64, t104, 64, t105, 64);
    t38 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t38, t106, 0, 0, 32, 0LL);
    t46 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t46, t106, 32, 0, 32, 0LL);
    goto LAB77;

}

static void Cont_91_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 5776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_92_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5792);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_93_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5808);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000004156235883_3805764359_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_48_1,(void *)Cont_91_2,(void *)Cont_92_3,(void *)Cont_93_4};
	xsi_register_didat("work_m_00000000004156235883_3805764359", "isim/MAD_testbench_isim_beh.exe.sim/work/m_00000000004156235883_3805764359.didat");
	xsi_register_executes(pe);
}
