#include <FlexCAN_T4.h>
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "raptor_CAN2.hpp"
#include "sensors.hpp"
#include "min_max.hpp"

#include<vector>
using std::vector;

//message definitions below

void send_STMM_1839F380() {
    static StateCounter ctr;

    msg.id = 406451072; //Decimal value of 1839F380
    msg.len = 8;

    vector<int> results = get_values();
    int min = results[0];
    int max = results[1];
    int min_id = results[2];
    int max_id = results[3];
    float average = results[4];

    msg.buf[0] = 1;
    msg.buf[1] = min;
    msg.buf[2] = max;
    msg.buf[3] = average;
    msg.buf[4] = 1;
    msg.buf[5] = min_id;
    msg.buf[6] = max_id;
    msg.buf[7] = ctr.value_8_bit(); //might change this, what is (sum of all bytes + length + id)?

    cbus2.write(msg);
}

void send_STMM_300() {
    // static definition - only defined once (like a global variable, but is local to this function only)
    static StateCounter ctr;

    // update per message
    msg.id = 300;
    msg.len = 8;

    // automatically does calcs
    STMM_segmentTemp100 = voltage_to_ENEPAQ_cell(seg_1_mod_1.avg());
    STMM_segmentTemp101 = voltage_to_ENEPAQ_cell(seg_1_mod_2.avg());
    STMM_segmentTemp102 = voltage_to_ENEPAQ_cell(seg_1_mod_3.avg());

    // load up the message buffer
    // Each message contains a counter and 3 signals
    // Each signal is 16 bits, so they take up two spots in the message, hence the 8-bit shift
    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp100.can_value();
    msg.buf[3] = STMM_segmentTemp100.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp101.can_value();
    msg.buf[5] = STMM_segmentTemp101.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp102.can_value();
    msg.buf[7] = STMM_segmentTemp102.can_value() >> 8;

    // send the message
    cbus2.write(msg);
}

void send_STMM_301() {
    static StateCounter ctr;

    msg.id = 301;
    msg.len = 8;

    STMM_segmentTemp103 = voltage_to_ENEPAQ_cell(seg_1_mod_4.avg());
    STMM_segmentTemp104 = voltage_to_ENEPAQ_cell(seg_1_mod_5.avg());
    STMM_segmentTemp105 = voltage_to_ENEPAQ_cell(seg_1_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp103.can_value();
    msg.buf[3] = STMM_segmentTemp103.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp104.can_value();
    msg.buf[5] = STMM_segmentTemp104.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp105.can_value();
    msg.buf[7] = STMM_segmentTemp105.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_302() {
    static StateCounter ctr;

    msg.id = 302;
    msg.len = 8;

    STMM_segmentTemp106 = voltage_to_ENEPAQ_cell(seg_1_mod_7.avg());
    STMM_segmentTemp107 = voltage_to_ENEPAQ_cell(seg_1_mod_8.avg());
    STMM_segmentTemp108 = voltage_to_ENEPAQ_cell(seg_1_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp106.can_value();
    msg.buf[3] = STMM_segmentTemp106.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp107.can_value();
    msg.buf[5] = STMM_segmentTemp107.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp108.can_value();
    msg.buf[7] = STMM_segmentTemp108.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_303() {
    static StateCounter ctr;

    msg.id = 303;
    msg.len = 8;

    STMM_segmentTemp109 = voltage_to_ENEPAQ_cell(seg_1_mod_10.avg());
    STMM_segmentTemp110 = voltage_to_ENEPAQ_cell(seg_1_mod_11.avg());
    STMM_segmentTemp111 = voltage_to_ENEPAQ_cell(seg_1_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp109.can_value();
    msg.buf[3] = STMM_segmentTemp109.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp110.can_value();
    msg.buf[5] = STMM_segmentTemp110.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp111.can_value();
    msg.buf[7] = STMM_segmentTemp111.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_304() {
    static StateCounter ctr;

    msg.id = 304;
    msg.len = 8;

    STMM_segmentTemp200 = voltage_to_ENEPAQ_cell(seg_2_mod_1.avg());
    STMM_segmentTemp201 = voltage_to_ENEPAQ_cell(seg_2_mod_2.avg());
    STMM_segmentTemp202 = voltage_to_ENEPAQ_cell(seg_2_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp200.can_value();
    msg.buf[3] = STMM_segmentTemp200.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp201.can_value();
    msg.buf[5] = STMM_segmentTemp201.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp202.can_value();
    msg.buf[7] = STMM_segmentTemp202.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_305() {
    static StateCounter ctr;

    msg.id = 305;
    msg.len = 8;

    STMM_segmentTemp203 = voltage_to_ENEPAQ_cell(seg_2_mod_4.avg());
    STMM_segmentTemp204 = voltage_to_ENEPAQ_cell(seg_2_mod_5.avg());
    STMM_segmentTemp205 = voltage_to_ENEPAQ_cell(seg_2_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp203.can_value();
    msg.buf[3] = STMM_segmentTemp203.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp204.can_value();
    msg.buf[5] = STMM_segmentTemp204.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp205.can_value();
    msg.buf[7] = STMM_segmentTemp205.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_306() {
    static StateCounter ctr;

    msg.id = 306;
    msg.len = 8;

    STMM_segmentTemp206 = voltage_to_ENEPAQ_cell(seg_2_mod_7.avg());
    STMM_segmentTemp207 = voltage_to_ENEPAQ_cell(seg_2_mod_8.avg());
    STMM_segmentTemp208 = voltage_to_ENEPAQ_cell(seg_2_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp206.can_value();
    msg.buf[3] = STMM_segmentTemp206.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp207.can_value();
    msg.buf[5] = STMM_segmentTemp207.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp208.can_value();
    msg.buf[7] = STMM_segmentTemp208.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_307() {
    static StateCounter ctr;

    msg.id = 307;
    msg.len = 8;

    STMM_segmentTemp209 = voltage_to_ENEPAQ_cell(seg_2_mod_10.avg());
    STMM_segmentTemp210 = voltage_to_ENEPAQ_cell(seg_2_mod_11.avg());
    STMM_segmentTemp211 = voltage_to_ENEPAQ_cell(seg_2_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp209.can_value();
    msg.buf[3] = STMM_segmentTemp209.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp210.can_value();
    msg.buf[5] = STMM_segmentTemp210.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp211.can_value();
    msg.buf[7] = STMM_segmentTemp211.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_308() {
    static StateCounter ctr;

    msg.id = 308;
    msg.len = 8;

    STMM_segmentTemp300 = voltage_to_ENEPAQ_cell(seg_3_mod_1.avg());
    STMM_segmentTemp301 = voltage_to_ENEPAQ_cell(seg_3_mod_2.avg());
    STMM_segmentTemp302 = voltage_to_ENEPAQ_cell(seg_3_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp300.can_value();
    msg.buf[3] = STMM_segmentTemp300.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp301.can_value();
    msg.buf[5] = STMM_segmentTemp301.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp302.can_value();
    msg.buf[7] = STMM_segmentTemp302.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_309() {
    static StateCounter ctr;

    msg.id = 309;
    msg.len = 8;

    STMM_segmentTemp303 = voltage_to_ENEPAQ_cell(seg_3_mod_4.avg());
    STMM_segmentTemp304 = voltage_to_ENEPAQ_cell(seg_3_mod_5.avg());
    STMM_segmentTemp305 = voltage_to_ENEPAQ_cell(seg_3_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp303.can_value();
    msg.buf[3] = STMM_segmentTemp303.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp304.can_value();
    msg.buf[5] = STMM_segmentTemp304.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp305.can_value();
    msg.buf[7] = STMM_segmentTemp305.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_310() {
    static StateCounter ctr;

    msg.id = 310;
    msg.len = 8;

    STMM_segmentTemp306 = voltage_to_ENEPAQ_cell(seg_3_mod_7.avg());
    STMM_segmentTemp307 = voltage_to_ENEPAQ_cell(seg_3_mod_8.avg());
    STMM_segmentTemp308 = voltage_to_ENEPAQ_cell(seg_3_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp306.can_value();
    msg.buf[3] = STMM_segmentTemp306.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp307.can_value();
    msg.buf[5] = STMM_segmentTemp307.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp308.can_value();
    msg.buf[7] = STMM_segmentTemp308.can_value() >> 8;
    cbus2.write(msg);
}

void send_STMM_311() {
    static StateCounter ctr;

    msg.id = 311;
    msg.len = 8;

    STMM_segmentTemp309 = voltage_to_ENEPAQ_cell(seg_3_mod_10.avg());
    STMM_segmentTemp310 = voltage_to_ENEPAQ_cell(seg_3_mod_11.avg());
    STMM_segmentTemp311 = voltage_to_ENEPAQ_cell(seg_3_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp309.can_value();
    msg.buf[3] = STMM_segmentTemp309.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp310.can_value();
    msg.buf[5] = STMM_segmentTemp310.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp311.can_value();
    msg.buf[7] = STMM_segmentTemp311.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_312() {
    static StateCounter ctr;

    msg.id = 312;
    msg.len = 8;

    STMM_segmentTemp400 = voltage_to_ENEPAQ_cell(seg_4_mod_1.avg());
    STMM_segmentTemp401 = voltage_to_ENEPAQ_cell(seg_4_mod_2.avg());
    STMM_segmentTemp402 = voltage_to_ENEPAQ_cell(seg_4_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp400.can_value();
    msg.buf[3] = STMM_segmentTemp400.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp401.can_value();
    msg.buf[5] = STMM_segmentTemp401.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp402.can_value();
    msg.buf[7] = STMM_segmentTemp402.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_313() {
    static StateCounter ctr;

    msg.id = 313;
    msg.len = 8;

    STMM_segmentTemp403 = voltage_to_ENEPAQ_cell(seg_4_mod_4.avg());
    STMM_segmentTemp404 = voltage_to_ENEPAQ_cell(seg_4_mod_5.avg());
    STMM_segmentTemp405 = voltage_to_ENEPAQ_cell(seg_4_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp403.can_value();
    msg.buf[3] = STMM_segmentTemp403.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp404.can_value();
    msg.buf[5] = STMM_segmentTemp404.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp405.can_value();
    msg.buf[7] = STMM_segmentTemp405.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_314() {
    static StateCounter ctr;

    msg.id = 314;
    msg.len = 8;

    STMM_segmentTemp406 = voltage_to_ENEPAQ_cell(seg_4_mod_7.avg());
    STMM_segmentTemp407 = voltage_to_ENEPAQ_cell(seg_4_mod_8.avg());
    STMM_segmentTemp408 = voltage_to_ENEPAQ_cell(seg_4_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp406.can_value();
    msg.buf[3] = STMM_segmentTemp406.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp407.can_value();
    msg.buf[5] = STMM_segmentTemp407.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp408.can_value();
    msg.buf[7] = STMM_segmentTemp408.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_315() {
    static StateCounter ctr;

    msg.id = 315;
    msg.len = 8;

    STMM_segmentTemp409 = voltage_to_ENEPAQ_cell(seg_4_mod_10.avg());
    STMM_segmentTemp410 = voltage_to_ENEPAQ_cell(seg_4_mod_11.avg());
    STMM_segmentTemp411 = voltage_to_ENEPAQ_cell(seg_4_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp409.can_value();
    msg.buf[3] = STMM_segmentTemp409.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp410.can_value();
    msg.buf[5] = STMM_segmentTemp410.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp411.can_value();
    msg.buf[7] = STMM_segmentTemp411.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_316() {
    static StateCounter ctr;

    msg.id = 316;
    msg.len = 8;

    STMM_segmentTemp500 = voltage_to_ENEPAQ_cell(seg_5_mod_1.avg());
    STMM_segmentTemp501 = voltage_to_ENEPAQ_cell(seg_5_mod_2.avg());
    STMM_segmentTemp502 = voltage_to_ENEPAQ_cell(seg_5_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp500.can_value();
    msg.buf[3] = STMM_segmentTemp500.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp501.can_value();
    msg.buf[5] = STMM_segmentTemp501.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp502.can_value();
    msg.buf[7] = STMM_segmentTemp502.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_317() {
    static StateCounter ctr;

    msg.id = 317;
    msg.len = 8;

    STMM_segmentTemp503 = voltage_to_ENEPAQ_cell(seg_5_mod_4.avg());
    STMM_segmentTemp504 = voltage_to_ENEPAQ_cell(seg_5_mod_5.avg());
    STMM_segmentTemp505 = voltage_to_ENEPAQ_cell(seg_5_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp503.can_value();
    msg.buf[3] = STMM_segmentTemp503.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp504.can_value();
    msg.buf[5] = STMM_segmentTemp504.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp505.can_value();
    msg.buf[7] = STMM_segmentTemp505.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_318() {
    static StateCounter ctr;

    msg.id = 318;
    msg.len = 8;

    STMM_segmentTemp506 = voltage_to_ENEPAQ_cell(seg_5_mod_7.avg());
    STMM_segmentTemp507 = voltage_to_ENEPAQ_cell(seg_5_mod_8.avg());
    STMM_segmentTemp508 = voltage_to_ENEPAQ_cell(seg_5_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp506.can_value();
    msg.buf[3] = STMM_segmentTemp506.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp507.can_value();
    msg.buf[5] = STMM_segmentTemp507.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp508.can_value();
    msg.buf[7] = STMM_segmentTemp508.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_319() {
    static StateCounter ctr;

    msg.id = 319;
    msg.len = 8;

    STMM_segmentTemp509 = voltage_to_ENEPAQ_cell(seg_5_mod_10.avg());
    STMM_segmentTemp510 = voltage_to_ENEPAQ_cell(seg_5_mod_11.avg());
    STMM_segmentTemp511 = voltage_to_ENEPAQ_cell(seg_5_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp509.can_value();
    msg.buf[3] = STMM_segmentTemp509.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp510.can_value();
    msg.buf[5] = STMM_segmentTemp510.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp511.can_value();
    msg.buf[7] = STMM_segmentTemp511.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_320() {
    static StateCounter ctr;

    msg.id = 320;
    msg.len = 8;

    STMM_segmentTemp600 = voltage_to_ENEPAQ_cell(seg_6_mod_1.avg());
    STMM_segmentTemp601 = voltage_to_ENEPAQ_cell(seg_6_mod_2.avg());
    STMM_segmentTemp602 = voltage_to_ENEPAQ_cell(seg_6_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp600.can_value();
    msg.buf[3] = STMM_segmentTemp600.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp601.can_value();
    msg.buf[5] = STMM_segmentTemp601.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp602.can_value();
    msg.buf[7] = STMM_segmentTemp602.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_321() {
    static StateCounter ctr;

    msg.id = 321;
    msg.len = 8;

    STMM_segmentTemp603 = voltage_to_ENEPAQ_cell(seg_6_mod_4.avg());
    STMM_segmentTemp604 = voltage_to_ENEPAQ_cell(seg_6_mod_5.avg());
    STMM_segmentTemp605 = voltage_to_ENEPAQ_cell(seg_6_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp603.can_value();
    msg.buf[3] = STMM_segmentTemp603.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp604.can_value();
    msg.buf[5] = STMM_segmentTemp604.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp605.can_value();
    msg.buf[7] = STMM_segmentTemp605.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_322() {
    static StateCounter ctr;

    msg.id = 322;
    msg.len = 8;

    STMM_segmentTemp606 = voltage_to_ENEPAQ_cell(seg_6_mod_7.avg());
    STMM_segmentTemp607 = voltage_to_ENEPAQ_cell(seg_6_mod_8.avg());
    STMM_segmentTemp608 = voltage_to_ENEPAQ_cell(seg_6_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp606.can_value();
    msg.buf[3] = STMM_segmentTemp606.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp607.can_value();
    msg.buf[5] = STMM_segmentTemp607.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp608.can_value();
    msg.buf[7] = STMM_segmentTemp608.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_323() {
    static StateCounter ctr;

    msg.id = 323;
    msg.len = 8;

    STMM_segmentTemp609 = voltage_to_ENEPAQ_cell(seg_6_mod_9.avg());
    STMM_segmentTemp610 = voltage_to_ENEPAQ_cell(seg_6_mod_10.avg());
    STMM_segmentTemp611 = voltage_to_ENEPAQ_cell(seg_6_mod_11.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp609.can_value();
    msg.buf[3] = STMM_segmentTemp609.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp610.can_value();
    msg.buf[5] = STMM_segmentTemp610.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp611.can_value();
    msg.buf[7] = STMM_segmentTemp611.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_324() {
    static StateCounter ctr;

    msg.id = 324;
    msg.len = 8;

    STMM_segmentTemp700 = voltage_to_ENEPAQ_cell(seg_7_mod_1.avg());
    STMM_segmentTemp701 = voltage_to_ENEPAQ_cell(seg_7_mod_2.avg());
    STMM_segmentTemp702 = voltage_to_ENEPAQ_cell(seg_7_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp700.can_value();
    msg.buf[3] = STMM_segmentTemp700.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp701.can_value();
    msg.buf[5] = STMM_segmentTemp701.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp702.can_value();
    msg.buf[7] = STMM_segmentTemp702.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_325() {
    static StateCounter ctr;

    msg.id = 325;
    msg.len = 8;

    STMM_segmentTemp703 = voltage_to_ENEPAQ_cell(seg_7_mod_4.avg());
    STMM_segmentTemp704 = voltage_to_ENEPAQ_cell(seg_7_mod_5.avg());
    STMM_segmentTemp705 = voltage_to_ENEPAQ_cell(seg_7_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp703.can_value();
    msg.buf[3] = STMM_segmentTemp703.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp704.can_value();
    msg.buf[5] = STMM_segmentTemp704.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp705.can_value();
    msg.buf[7] = STMM_segmentTemp705.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_326() {
    static StateCounter ctr;

    msg.id = 326;
    msg.len = 8;

    STMM_segmentTemp706 = voltage_to_ENEPAQ_cell(seg_7_mod_7.avg());
    STMM_segmentTemp707 = voltage_to_ENEPAQ_cell(seg_7_mod_8.avg());
    STMM_segmentTemp708 = voltage_to_ENEPAQ_cell(seg_7_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp706.can_value();
    msg.buf[3] = STMM_segmentTemp706.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp707.can_value();
    msg.buf[5] = STMM_segmentTemp707.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp708.can_value();
    msg.buf[7] = STMM_segmentTemp708.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_327() {
    static StateCounter ctr;

    msg.id = 327;
    msg.len = 8;

    STMM_segmentTemp709 = voltage_to_ENEPAQ_cell(seg_7_mod_10.avg());
    STMM_segmentTemp710 = voltage_to_ENEPAQ_cell(seg_7_mod_11.avg());
    STMM_segmentTemp711 = voltage_to_ENEPAQ_cell(seg_7_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp709.can_value();
    msg.buf[3] = STMM_segmentTemp709.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp710.can_value();
    msg.buf[5] = STMM_segmentTemp710.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp711.can_value();
    msg.buf[7] = STMM_segmentTemp711.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_328() {
    static StateCounter ctr;

    msg.id = 328;
    msg.len = 8;

    STMM_segmentTemp800 = voltage_to_ENEPAQ_cell(seg_8_mod_1.avg());
    STMM_segmentTemp801 = voltage_to_ENEPAQ_cell(seg_8_mod_2.avg());
    STMM_segmentTemp802 = voltage_to_ENEPAQ_cell(seg_8_mod_3.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp800.can_value();
    msg.buf[3] = STMM_segmentTemp800.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp801.can_value();
    msg.buf[5] = STMM_segmentTemp801.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp802.can_value();
    msg.buf[7] = STMM_segmentTemp802.can_value() >> 8;

    cbus2.write(msg);
}

void send_STMM_329() {
    static StateCounter ctr;

    msg.id = 329;
    msg.len = 8;

    STMM_segmentTemp803 = voltage_to_ENEPAQ_cell(seg_8_mod_4.avg());
    STMM_segmentTemp804 = voltage_to_ENEPAQ_cell(seg_8_mod_5.avg());
    STMM_segmentTemp805 = voltage_to_ENEPAQ_cell(seg_8_mod_6.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp803.can_value();
    msg.buf[3] = STMM_segmentTemp803.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp804.can_value();
    msg.buf[5] = STMM_segmentTemp804.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp805.can_value();
    msg.buf[7] = STMM_segmentTemp805.can_value() >> 8;


    cbus2.write(msg);
}

void send_STMM_330() {
    static StateCounter ctr;

    msg.id = 330;
    msg.len = 8;

    STMM_segmentTemp806 = voltage_to_ENEPAQ_cell(seg_8_mod_7.avg());
    STMM_segmentTemp807 = voltage_to_ENEPAQ_cell(seg_8_mod_8.avg());
    STMM_segmentTemp808 = voltage_to_ENEPAQ_cell(seg_8_mod_9.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp806.can_value();
    msg.buf[3] = STMM_segmentTemp806.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp807.can_value();
    msg.buf[5] = STMM_segmentTemp807.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp808.can_value();
    msg.buf[7] = STMM_segmentTemp808.can_value() >> 8;


    cbus2.write(msg);
}

void send_STMM_331() {
    static StateCounter ctr;

    msg.id = 331;
    msg.len = 8;

    STMM_segmentTemp809 = voltage_to_ENEPAQ_cell(seg_8_mod_10.avg());
    STMM_segmentTemp810 = voltage_to_ENEPAQ_cell(seg_8_mod_11.avg());
    STMM_segmentTemp811 = voltage_to_ENEPAQ_cell(seg_8_mod_12.avg());

    msg.buf[0] = ctr.value();
    msg.buf[1] = 0;
    msg.buf[2] = STMM_segmentTemp809.can_value();
    msg.buf[3] = STMM_segmentTemp809.can_value() >> 8;
    msg.buf[4] = STMM_segmentTemp810.can_value();
    msg.buf[5] = STMM_segmentTemp810.can_value() >> 8;
    msg.buf[6] = STMM_segmentTemp811.can_value();
    msg.buf[7] = STMM_segmentTemp811.can_value() >> 8;
    
    cbus2.write(msg);
}

void send_can_1() {
    static EasyTimer STMM_0_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_300();
    }

    static EasyTimer STMM_1_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_301();
    }

    static EasyTimer STMM_2_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_302();
    }

    static EasyTimer STMM_3_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_303();
    }
}

void send_can_2() {
    static EasyTimer STMM_4_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_304();
    }

    static EasyTimer STMM_5_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_305();
    }

    static EasyTimer STMM_6_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_306();
    }

    static EasyTimer STMM_7_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_307();
    }
}

void send_can_3() {
    static EasyTimer STMM_8_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_308();
    }

    static EasyTimer STMM_9_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_309();
    }

    static EasyTimer STMM_10_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_310();
    }

    static EasyTimer STMM_11_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_311();
    }
}

void send_can_4() {
    static EasyTimer STMM_12_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_312();
    }

    static EasyTimer STMM_13_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_313();
    }

    static EasyTimer STMM_14_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_314();
    }

    static EasyTimer STMM_15_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_315();
    }
}

void send_can_5() {
    static EasyTimer STMM_16_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_316();
    }

    static EasyTimer STMM_17_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_317();
    }

    static EasyTimer STMM_18_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_318();
    }

    static EasyTimer STMM_19_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_319();
    }
}

void send_can_6() {
    static EasyTimer STMM_20_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_320();
    }

    static EasyTimer STMM_21_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_321();
    }

    static EasyTimer STMM_22_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_322();
    }

    static EasyTimer STMM_23_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_323();
    }
}

void send_can_7() {
    static EasyTimer STMM_24_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_324();
    }

    static EasyTimer STMM_25_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_325();
    }

    static EasyTimer STMM_26_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_326();
    }

    static EasyTimer STMM_27_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_327();
    }
}

void send_can_8() {
    static EasyTimer STMM_28_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_328();
    }

    static EasyTimer STMM_29_timer(10);
    if(STMM_2_timer.isup()) {
        send_STMM_329();
    }

    static EasyTimer STMM_30_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_330();
    }

    static EasyTimer STMM_31_timer(10);
    if(STMM_1_timer.isup()) {
        send_STMM_331();
    }
}



