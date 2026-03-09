#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms.h"

/* bms_BMS_0 */
size_t serialize_bms_BMS_0(uint8_t* buffer, uint8_t crc_checksum, uint8_t pack_soc, uint16_t relay_state, uint16_t pack_inst_voltage, int16_t pack_current) {
    bms_BMS_0 bms_bms_0 = { crc_checksum, pack_soc, relay_state, pack_inst_voltage, pack_current };
	// assert(buf_len >= sizeof(bms_BMS_0));
	memcpy(buffer, &bms_bms_0, sizeof(bms_BMS_0));
    return sizeof(bms_BMS_0);
} 
size_t deserialize_bms_BMS_0(uint8_t* buffer, bms_BMS_0* bms_bms_0) {
	// assert(buf_len >= sizeof(bms_BMS_0));
	memcpy(bms_bms_0, buffer, sizeof(bms_BMS_0));
    return sizeof(bms_BMS_0);
}
/* bms_BMS_1 */
size_t serialize_bms_BMS_1(uint8_t* buffer, uint8_t crc_checksum, uint8_t low_temp, uint8_t high_temp, uint8_t pack_ccl, uint16_t pack_dcl) {
    bms_BMS_1 bms_bms_1 = { crc_checksum, low_temp, high_temp, pack_ccl, pack_dcl };
	// assert(buf_len >= sizeof(bms_BMS_1));
	memcpy(buffer, &bms_bms_1, sizeof(bms_BMS_1));
    return sizeof(bms_BMS_1);
} 
size_t deserialize_bms_BMS_1(uint8_t* buffer, bms_BMS_1* bms_bms_1) {
	// assert(buf_len >= sizeof(bms_BMS_1));
	memcpy(bms_bms_1, buffer, sizeof(bms_BMS_1));
    return sizeof(bms_BMS_1);
}
