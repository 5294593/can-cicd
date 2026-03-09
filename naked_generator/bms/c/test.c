#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BMS_0 */
    printf("bms_BMS_0:\n");
    uint8_t* buffer_bms_bms_0 = (uint8_t*)malloc(sizeof(bms_BMS_0));
    
    bms_BMS_0 bms_bms_0_s = { 56.0, 68.0, 54339.0, 15141.0, 235.0 };
    serialize_bms_BMS_0(buffer_bms_bms_0, bms_bms_0_s.crc_checksum, bms_bms_0_s.pack_soc, bms_bms_0_s.relay_state, bms_bms_0_s.pack_inst_voltage, bms_bms_0_s.pack_current);
    printf("\tSerialized\n\t%llu %llu %llu %llu %lld\n", (long long unsigned int)bms_bms_0_s.crc_checksum, (long long unsigned int)bms_bms_0_s.pack_soc, (long long unsigned int)bms_bms_0_s.relay_state, (long long unsigned int)bms_bms_0_s.pack_inst_voltage, (long long int)bms_bms_0_s.pack_current);
    
    bms_BMS_0* bms_bms_0_d = (bms_BMS_0*)malloc(sizeof(bms_BMS_0));
    deserialize_bms_BMS_0(buffer_bms_bms_0, bms_bms_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %lld\n", (long long unsigned int)bms_bms_0_d->crc_checksum, (long long unsigned int)bms_bms_0_d->pack_soc, (long long unsigned int)bms_bms_0_d->relay_state, (long long unsigned int)bms_bms_0_d->pack_inst_voltage, (long long int)bms_bms_0_d->pack_current);
    
    assert(memcmp(&bms_bms_0_s, bms_bms_0_d, sizeof(bms_BMS_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BMS_1 */
    printf("bms_BMS_1:\n");
    uint8_t* buffer_bms_bms_1 = (uint8_t*)malloc(sizeof(bms_BMS_1));
    
    bms_BMS_1 bms_bms_1_s = { 34.0, 40.0, 89.0, 181.0, 54156.0 };
    serialize_bms_BMS_1(buffer_bms_bms_1, bms_bms_1_s.crc_checksum, bms_bms_1_s.low_temp, bms_bms_1_s.high_temp, bms_bms_1_s.pack_ccl, bms_bms_1_s.pack_dcl);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)bms_bms_1_s.crc_checksum, (long long unsigned int)bms_bms_1_s.low_temp, (long long unsigned int)bms_bms_1_s.high_temp, (long long unsigned int)bms_bms_1_s.pack_ccl, (long long unsigned int)bms_bms_1_s.pack_dcl);
    
    bms_BMS_1* bms_bms_1_d = (bms_BMS_1*)malloc(sizeof(bms_BMS_1));
    deserialize_bms_BMS_1(buffer_bms_bms_1, bms_bms_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)bms_bms_1_d->crc_checksum, (long long unsigned int)bms_bms_1_d->low_temp, (long long unsigned int)bms_bms_1_d->high_temp, (long long unsigned int)bms_bms_1_d->pack_ccl, (long long unsigned int)bms_bms_1_d->pack_dcl);
    
    assert(memcmp(&bms_bms_1_s, bms_bms_1_d, sizeof(bms_BMS_1)) == 0);
    puts("SUCCESS!\n");
        
}