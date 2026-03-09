#ifdef __cplusplus
extern "C" {
#endif

#ifndef BMS_H
#define BMS_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   NAKED SHARED 
*   Common functions, defines and checks between all the network.h files
*/
#ifndef __NAKED_SHARED
#define __NAKED_SHARED
    /*
    *   STDC Version check
    *   check if STDC version is greater or equal than the minimum version required
    */
    #define NAKED_STDC_MIN_VERSION 201112L
    #if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
        #error "** STDC VERSION NOT SUPPORTED **"
    #endif
    
    /*
    *   Endianness check
    *   static check for supported endianness
    */
    #ifndef __NAKED_ENDIAN_ORDER
        #define __NAKED_ENDIAN_ORDER 1094861636L // "ABCD"
    #endif
    #if !defined(__NAKED_LITTLE_ENDIAN) && !defined(__NAKED_BIG_ENDIAN) && !defined(__NAKED_PDP_ENDIAN)
        #if __NAKED_ENDIAN_ORDER==0x41424344UL 
            #define __NAKED_LITTLE_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x44434241UL
            #define __NAKED_BIG_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x42414443UL
            #define __NAKED_PDP_ENDIAN
        #else
            #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
        #endif
    #endif
    
    #ifndef __NAKED_LITTLE_ENDIAN
        #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
    #endif
    
    /*
    *   Floating point types size check
    *   the only supported sizes for now are 32 bits for float and 64 for double
    */
    static_assert(sizeof(float) == 4,"** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **");
    static_assert(sizeof(double) == 8, "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **");

    /*
    *   Packed macro
    *   macro for packed structs on multiple compilers
    */
    #if defined(__MINGW32__)
        #define __is_packed __attribute__((__gcc_struct__, __packed__)) // , __aligned__(1)))
    #else
        #define __is_packed __attribute__((__packed__)) // , __aligned__(1)))
    #endif
    
    /*
    *   Bitset setter/getter
    *   macros for reading/writing bitsets
    */
    #define setBit(bitset, index, value) \
    do { \
        (bitset)[(index)/8] &= ~( 1 << (index) % 8); \
        (bitset)[(index)/8] |=  ((value) << (index) % 8); \
    } while(0);
    #define flipBit(bitset, index) ((bitset)[(index)/8] ^= (1 << (index) % 8) )
    #define getBit(bitset, index)  ((bitset)[(index)/8] &  (1 << (index) % 8) )
#endif


/* bms_BMS_0 */
typedef struct __is_packed {
    uint8_t crc_checksum;
    uint8_t pack_soc;
    uint16_t relay_state;
    uint16_t pack_inst_voltage;
    int16_t pack_current;
} bms_BMS_0;
static_assert(sizeof(bms_BMS_0) == 8, "struct size mismatch");
    
size_t serialize_bms_BMS_0(uint8_t* buffer, uint8_t crc_checksum, uint8_t pack_soc, uint16_t relay_state, uint16_t pack_inst_voltage, int16_t pack_current);
size_t deserialize_bms_BMS_0(uint8_t* buffer, bms_BMS_0* bms_bms_0);

/* bms_BMS_1 */
typedef struct __is_packed {
    uint8_t crc_checksum;
    uint8_t low_temp;
    uint8_t high_temp;
    uint8_t pack_ccl;
    uint16_t pack_dcl;
} bms_BMS_1;
static_assert(sizeof(bms_BMS_1) == 6, "struct size mismatch");
    
size_t serialize_bms_BMS_1(uint8_t* buffer, uint8_t crc_checksum, uint8_t low_temp, uint8_t high_temp, uint8_t pack_ccl, uint16_t pack_dcl);
size_t deserialize_bms_BMS_1(uint8_t* buffer, bms_BMS_1* bms_bms_1);
#endif

#ifdef __cplusplus
}
#endif