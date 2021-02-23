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
    work_m_00000000003069698714_3224323566_init();
    work_m_00000000001405309146_0390276809_init();
    work_m_00000000002132176276_1621229167_init();
    work_m_00000000002998319196_1785967555_init();
    work_m_00000000003603450282_3842173357_init();
    work_m_00000000003058087081_4169223671_init();
    work_m_00000000001394935175_0886308060_init();
    work_m_00000000004156235883_3805764359_init();
    work_m_00000000003556322726_3948285187_init();
    work_m_00000000003456591525_2924402094_init();
    work_m_00000000001599690784_3688504354_init();
    work_m_00000000000689106208_3092946469_init();
    work_m_00000000004101199472_3027548060_init();
    work_m_00000000002384753626_3877310806_init();
    work_m_00000000002047498008_2864889816_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_2864889816");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}