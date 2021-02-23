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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003084258530_3224323566_init();
    work_m_00000000003047502925_0390276809_init();
    work_m_00000000002132176276_1621229167_init();
    work_m_00000000002998319196_1785967555_init();
    work_m_00000000003603450282_3842173357_init();
    work_m_00000000003603415102_4169223671_init();
    work_m_00000000001826729565_0886308060_init();
    work_m_00000000004156235883_3805764359_init();
    work_m_00000000001521824584_3948285187_init();
    work_m_00000000001315684501_2924402094_init();
    work_m_00000000001988705270_3975733304_init();
    work_m_00000000003755888227_3688504354_init();
    work_m_00000000003099481187_3092946469_init();
    work_m_00000000003351660085_3027548060_init();
    work_m_00000000001178656540_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000001399244875_3877310806_init();
    work_m_00000000004030861202_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004030861202_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}