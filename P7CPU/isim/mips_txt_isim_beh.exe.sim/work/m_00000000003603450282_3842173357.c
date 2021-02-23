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
static const char *ng0 = "D:/code_software/ise_save/P7CPU/compare.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {31, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};



static void Always_28_0(char *t0)
{
    char t10[8];
    char t33[8];
    char t38[8];
    char t43[8];
    char t59[8];
    char t67[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
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

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t8 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t10) = 1;

LAB25:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB28:    goto LAB21;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB30;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB32:    t11 = (t10 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB35:    goto LAB21;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t10) = 1;

LAB39:    memset(t33, 0, 8);
    t11 = (t10 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t11) != 0)
        goto LAB42;

LAB43:    t25 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = *((unsigned int *)t25);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB44;

LAB45:    memcpy(t67, t33, 8);

LAB46:    t95 = (t67 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t67);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB60:    goto LAB21;

LAB13:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t8, 2, t9, 32, 1);
    t11 = ((char*)((ng3)));
    memset(t33, 0, 8);
    t24 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t11);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t25);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t24);
    t20 = *((unsigned int *)t25);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB64;

LAB61:    if (t21 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t33) = 1;

LAB64:    memset(t38, 0, 8);
    t32 = (t33 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t33);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t32) != 0)
        goto LAB67;

LAB68:    t40 = (t38 + 4);
    t34 = *((unsigned int *)t38);
    t35 = *((unsigned int *)t40);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB69;

LAB70:    memcpy(t67, t38, 8);

LAB71:    t95 = (t67 + 4);
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t103 = *((unsigned int *)t67);
    t104 = (t103 & t100);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB85:    goto LAB21;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t8, 2, t9, 32, 1);
    t11 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t24 = (t10 + 4);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t11);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t25);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t24);
    t20 = *((unsigned int *)t25);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB89;

LAB86:    if (t21 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t33) = 1;

LAB89:    memset(t38, 0, 8);
    t32 = (t33 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t33);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t32) != 0)
        goto LAB92;

LAB93:    t40 = (t38 + 4);
    t34 = *((unsigned int *)t38);
    t35 = *((unsigned int *)t40);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB94;

LAB95:    memcpy(t67, t38, 8);

LAB96:    t95 = (t67 + 4);
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t103 = *((unsigned int *)t67);
    t104 = (t103 & t100);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB110:    goto LAB21;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB114;

LAB111:    if (t21 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t10) = 1;

LAB114:    memset(t33, 0, 8);
    t11 = (t10 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t11) != 0)
        goto LAB117;

LAB118:    t25 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = *((unsigned int *)t25);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB119;

LAB120:    memcpy(t67, t33, 8);

LAB121:    t95 = (t67 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t67);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB135:    goto LAB21;

LAB24:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t10) = 1;
    goto LAB32;

LAB31:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(34, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 1, 0LL);
    goto LAB35;

LAB38:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t33) = 1;
    goto LAB43;

LAB42:    t24 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB43;

LAB44:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t31 = (t0 + 1008U);
    t39 = (t31 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t38, 32, t32, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng2)));
    memset(t43, 0, 8);
    t44 = (t38 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB50;

LAB47:    if (t55 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t43) = 1;

LAB50:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t60) != 0)
        goto LAB53;

LAB54:    t68 = *((unsigned int *)t33);
    t69 = *((unsigned int *)t59);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = (t33 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t59) = 1;
    goto LAB54;

LAB53:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB54;

LAB55:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t33 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t33);
    t86 = (t85 & t84);
    t87 = *((unsigned int *)t82);
    t88 = (~(t87));
    t89 = *((unsigned int *)t59);
    t90 = (t89 & t88);
    t91 = (~(t86));
    t92 = (~(t90));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    goto LAB57;

LAB58:    xsi_set_current_line(37, ng0);
    t101 = ((char*)((ng2)));
    t102 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    goto LAB60;

LAB63:    t31 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t38) = 1;
    goto LAB68;

LAB67:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB68;

LAB69:    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t41 + 4);
    t37 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t41);
    t47 = (t37 ^ t46);
    t48 = *((unsigned int *)t44);
    t49 = *((unsigned int *)t45);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t45);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB73;

LAB72:    if (t54 != 0)
        goto LAB74;

LAB75:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t57 = *((unsigned int *)t60);
    t61 = (~(t57));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t60) != 0)
        goto LAB78;

LAB79:    t65 = *((unsigned int *)t38);
    t68 = *((unsigned int *)t59);
    t69 = (t65 & t68);
    *((unsigned int *)t67) = t69;
    t71 = (t38 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t70 = *((unsigned int *)t71);
    t74 = *((unsigned int *)t72);
    t75 = (t70 | t74);
    *((unsigned int *)t73) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB73:    *((unsigned int *)t43) = 1;
    goto LAB75;

LAB74:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t59) = 1;
    goto LAB79;

LAB78:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB79;

LAB80:    t78 = *((unsigned int *)t67);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t78 | t79);
    t81 = (t38 + 4);
    t82 = (t59 + 4);
    t80 = *((unsigned int *)t38);
    t83 = (~(t80));
    t84 = *((unsigned int *)t81);
    t85 = (~(t84));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t91 = (~(t89));
    t86 = (t83 & t85);
    t90 = (t88 & t91);
    t92 = (~(t86));
    t93 = (~(t90));
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t93);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t92);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t93);
    goto LAB82;

LAB83:    xsi_set_current_line(40, ng0);
    t101 = ((char*)((ng2)));
    t102 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    goto LAB85;

LAB88:    t31 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t38) = 1;
    goto LAB93;

LAB92:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB93;

LAB94:    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t41 + 4);
    t37 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t41);
    t47 = (t37 ^ t46);
    t48 = *((unsigned int *)t44);
    t49 = *((unsigned int *)t45);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t45);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB98;

LAB97:    if (t54 != 0)
        goto LAB99;

LAB100:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t57 = *((unsigned int *)t60);
    t61 = (~(t57));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t60) != 0)
        goto LAB103;

LAB104:    t65 = *((unsigned int *)t38);
    t68 = *((unsigned int *)t59);
    t69 = (t65 & t68);
    *((unsigned int *)t67) = t69;
    t71 = (t38 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t70 = *((unsigned int *)t71);
    t74 = *((unsigned int *)t72);
    t75 = (t70 | t74);
    *((unsigned int *)t73) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB96;

LAB98:    *((unsigned int *)t43) = 1;
    goto LAB100;

LAB99:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB100;

LAB101:    *((unsigned int *)t59) = 1;
    goto LAB104;

LAB103:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB104;

LAB105:    t78 = *((unsigned int *)t67);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t78 | t79);
    t81 = (t38 + 4);
    t82 = (t59 + 4);
    t80 = *((unsigned int *)t38);
    t83 = (~(t80));
    t84 = *((unsigned int *)t81);
    t85 = (~(t84));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t91 = (~(t89));
    t86 = (t83 & t85);
    t90 = (t88 & t91);
    t92 = (~(t86));
    t93 = (~(t90));
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t93);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t92);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t93);
    goto LAB107;

LAB108:    xsi_set_current_line(43, ng0);
    t101 = ((char*)((ng2)));
    t102 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    goto LAB110;

LAB113:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t33) = 1;
    goto LAB118;

LAB117:    t24 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB118;

LAB119:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t31 = (t0 + 1008U);
    t39 = (t31 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t38, 32, t32, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t38 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB125;

LAB122:    if (t55 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t43) = 1;

LAB125:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t60) != 0)
        goto LAB128;

LAB129:    t68 = *((unsigned int *)t33);
    t69 = *((unsigned int *)t59);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = (t33 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB130;

LAB131:
LAB132:    goto LAB121;

LAB124:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB125;

LAB126:    *((unsigned int *)t59) = 1;
    goto LAB129;

LAB128:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB129;

LAB130:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t33 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t33);
    t86 = (t85 & t84);
    t87 = *((unsigned int *)t82);
    t88 = (~(t87));
    t89 = *((unsigned int *)t59);
    t90 = (t89 & t88);
    t91 = (~(t86));
    t92 = (~(t90));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    goto LAB132;

LAB133:    xsi_set_current_line(46, ng0);
    t101 = ((char*)((ng2)));
    t102 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    goto LAB135;

}


extern void work_m_00000000003603450282_3842173357_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000003603450282_3842173357", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003603450282_3842173357.didat");
	xsi_register_executes(pe);
}
