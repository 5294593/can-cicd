#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "secondary.h"

int main() {

/* secondary_IMU_ANGULAR_RATE */
    printf("secondary_IMU_ANGULAR_RATE:\n");
    uint8_t* buffer_secondary_imu_angular_rate = (uint8_t*)malloc(sizeof(secondary_IMU_ANGULAR_RATE));
    
    secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate_s = { 13018.0, 19135.0, 58114.0 };
    serialize_secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_s.ang_rate_x, secondary_imu_angular_rate_s.ang_rate_y, secondary_imu_angular_rate_s.ang_rate_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_z);
    
    secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate_d = (secondary_IMU_ANGULAR_RATE*)malloc(sizeof(secondary_IMU_ANGULAR_RATE));
    deserialize_secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_z);
    
    assert(memcmp(&secondary_imu_angular_rate_s, secondary_imu_angular_rate_d, sizeof(secondary_IMU_ANGULAR_RATE)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IMU_ACCELERATION */
    printf("secondary_IMU_ACCELERATION:\n");
    uint8_t* buffer_secondary_imu_acceleration = (uint8_t*)malloc(sizeof(secondary_IMU_ACCELERATION));
    
    secondary_IMU_ACCELERATION secondary_imu_acceleration_s = { 61387.0, 43429.0, 15714.0 };
    serialize_secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_s.accel_x, secondary_imu_acceleration_s.accel_y, secondary_imu_acceleration_s.accel_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_s.accel_x, (long long unsigned int)secondary_imu_acceleration_s.accel_y, (long long unsigned int)secondary_imu_acceleration_s.accel_z);
    
    secondary_IMU_ACCELERATION* secondary_imu_acceleration_d = (secondary_IMU_ACCELERATION*)malloc(sizeof(secondary_IMU_ACCELERATION));
    deserialize_secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_d->accel_x, (long long unsigned int)secondary_imu_acceleration_d->accel_y, (long long unsigned int)secondary_imu_acceleration_d->accel_z);
    
    assert(memcmp(&secondary_imu_acceleration_s, secondary_imu_acceleration_d, sizeof(secondary_IMU_ACCELERATION)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_0 */
    printf("secondary_IRTS_FL_0:\n");
    uint8_t* buffer_secondary_irts_fl_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_0));
    
    secondary_IRTS_FL_0 secondary_irts_fl_0_s = { 54304.0, 4996.0, 36194.0, 23113.0 };
    serialize_secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_s.channel1, secondary_irts_fl_0_s.channel2, secondary_irts_fl_0_s.channel3, secondary_irts_fl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_s.channel1, (long long unsigned int)secondary_irts_fl_0_s.channel2, (long long unsigned int)secondary_irts_fl_0_s.channel3, (long long unsigned int)secondary_irts_fl_0_s.channel4);
    
    secondary_IRTS_FL_0* secondary_irts_fl_0_d = (secondary_IRTS_FL_0*)malloc(sizeof(secondary_IRTS_FL_0));
    deserialize_secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_d->channel1, (long long unsigned int)secondary_irts_fl_0_d->channel2, (long long unsigned int)secondary_irts_fl_0_d->channel3, (long long unsigned int)secondary_irts_fl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fl_0_s, secondary_irts_fl_0_d, sizeof(secondary_IRTS_FL_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_1 */
    printf("secondary_IRTS_FL_1:\n");
    uint8_t* buffer_secondary_irts_fl_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_1));
    
    secondary_IRTS_FL_1 secondary_irts_fl_1_s = { 58738.0, 5453.0, 36230.0, 54485.0 };
    serialize_secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_s.channel5, secondary_irts_fl_1_s.channel6, secondary_irts_fl_1_s.channel7, secondary_irts_fl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_s.channel5, (long long unsigned int)secondary_irts_fl_1_s.channel6, (long long unsigned int)secondary_irts_fl_1_s.channel7, (long long unsigned int)secondary_irts_fl_1_s.channel8);
    
    secondary_IRTS_FL_1* secondary_irts_fl_1_d = (secondary_IRTS_FL_1*)malloc(sizeof(secondary_IRTS_FL_1));
    deserialize_secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_d->channel5, (long long unsigned int)secondary_irts_fl_1_d->channel6, (long long unsigned int)secondary_irts_fl_1_d->channel7, (long long unsigned int)secondary_irts_fl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fl_1_s, secondary_irts_fl_1_d, sizeof(secondary_IRTS_FL_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_2 */
    printf("secondary_IRTS_FL_2:\n");
    uint8_t* buffer_secondary_irts_fl_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_2));
    
    secondary_IRTS_FL_2 secondary_irts_fl_2_s = { 23378.0, 35508.0, 19503.0, 4846.0 };
    serialize_secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_s.channel9, secondary_irts_fl_2_s.channel10, secondary_irts_fl_2_s.channel11, secondary_irts_fl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_s.channel9, (long long unsigned int)secondary_irts_fl_2_s.channel10, (long long unsigned int)secondary_irts_fl_2_s.channel11, (long long unsigned int)secondary_irts_fl_2_s.channel12);
    
    secondary_IRTS_FL_2* secondary_irts_fl_2_d = (secondary_IRTS_FL_2*)malloc(sizeof(secondary_IRTS_FL_2));
    deserialize_secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_d->channel9, (long long unsigned int)secondary_irts_fl_2_d->channel10, (long long unsigned int)secondary_irts_fl_2_d->channel11, (long long unsigned int)secondary_irts_fl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fl_2_s, secondary_irts_fl_2_d, sizeof(secondary_IRTS_FL_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FL_3 */
    printf("secondary_IRTS_FL_3:\n");
    uint8_t* buffer_secondary_irts_fl_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_FL_3));
    
    secondary_IRTS_FL_3 secondary_irts_fl_3_s = { 10468.0, 18557.0, 47516.0, 40440.0 };
    serialize_secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_s.channel13, secondary_irts_fl_3_s.channel14, secondary_irts_fl_3_s.channel15, secondary_irts_fl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_s.channel13, (long long unsigned int)secondary_irts_fl_3_s.channel14, (long long unsigned int)secondary_irts_fl_3_s.channel15, (long long unsigned int)secondary_irts_fl_3_s.channel16);
    
    secondary_IRTS_FL_3* secondary_irts_fl_3_d = (secondary_IRTS_FL_3*)malloc(sizeof(secondary_IRTS_FL_3));
    deserialize_secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_d->channel13, (long long unsigned int)secondary_irts_fl_3_d->channel14, (long long unsigned int)secondary_irts_fl_3_d->channel15, (long long unsigned int)secondary_irts_fl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fl_3_s, secondary_irts_fl_3_d, sizeof(secondary_IRTS_FL_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_0 */
    printf("secondary_IRTS_FR_0:\n");
    uint8_t* buffer_secondary_irts_fr_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_0));
    
    secondary_IRTS_FR_0 secondary_irts_fr_0_s = { 40639.0, 33920.0, 46858.0, 34417.0 };
    serialize_secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_s.channel1, secondary_irts_fr_0_s.channel2, secondary_irts_fr_0_s.channel3, secondary_irts_fr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_s.channel1, (long long unsigned int)secondary_irts_fr_0_s.channel2, (long long unsigned int)secondary_irts_fr_0_s.channel3, (long long unsigned int)secondary_irts_fr_0_s.channel4);
    
    secondary_IRTS_FR_0* secondary_irts_fr_0_d = (secondary_IRTS_FR_0*)malloc(sizeof(secondary_IRTS_FR_0));
    deserialize_secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_d->channel1, (long long unsigned int)secondary_irts_fr_0_d->channel2, (long long unsigned int)secondary_irts_fr_0_d->channel3, (long long unsigned int)secondary_irts_fr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fr_0_s, secondary_irts_fr_0_d, sizeof(secondary_IRTS_FR_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_1 */
    printf("secondary_IRTS_FR_1:\n");
    uint8_t* buffer_secondary_irts_fr_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_1));
    
    secondary_IRTS_FR_1 secondary_irts_fr_1_s = { 9901.0, 46181.0, 60937.0, 30229.0 };
    serialize_secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_s.channel5, secondary_irts_fr_1_s.channel6, secondary_irts_fr_1_s.channel7, secondary_irts_fr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_s.channel5, (long long unsigned int)secondary_irts_fr_1_s.channel6, (long long unsigned int)secondary_irts_fr_1_s.channel7, (long long unsigned int)secondary_irts_fr_1_s.channel8);
    
    secondary_IRTS_FR_1* secondary_irts_fr_1_d = (secondary_IRTS_FR_1*)malloc(sizeof(secondary_IRTS_FR_1));
    deserialize_secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_d->channel5, (long long unsigned int)secondary_irts_fr_1_d->channel6, (long long unsigned int)secondary_irts_fr_1_d->channel7, (long long unsigned int)secondary_irts_fr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fr_1_s, secondary_irts_fr_1_d, sizeof(secondary_IRTS_FR_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_2 */
    printf("secondary_IRTS_FR_2:\n");
    uint8_t* buffer_secondary_irts_fr_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_2));
    
    secondary_IRTS_FR_2 secondary_irts_fr_2_s = { 38997.0, 15015.0, 49509.0, 3589.0 };
    serialize_secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_s.channel9, secondary_irts_fr_2_s.channel10, secondary_irts_fr_2_s.channel11, secondary_irts_fr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_s.channel9, (long long unsigned int)secondary_irts_fr_2_s.channel10, (long long unsigned int)secondary_irts_fr_2_s.channel11, (long long unsigned int)secondary_irts_fr_2_s.channel12);
    
    secondary_IRTS_FR_2* secondary_irts_fr_2_d = (secondary_IRTS_FR_2*)malloc(sizeof(secondary_IRTS_FR_2));
    deserialize_secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_d->channel9, (long long unsigned int)secondary_irts_fr_2_d->channel10, (long long unsigned int)secondary_irts_fr_2_d->channel11, (long long unsigned int)secondary_irts_fr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fr_2_s, secondary_irts_fr_2_d, sizeof(secondary_IRTS_FR_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_FR_3 */
    printf("secondary_IRTS_FR_3:\n");
    uint8_t* buffer_secondary_irts_fr_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_FR_3));
    
    secondary_IRTS_FR_3 secondary_irts_fr_3_s = { 57094.0, 56304.0, 2588.0, 23060.0 };
    serialize_secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_s.channel13, secondary_irts_fr_3_s.channel14, secondary_irts_fr_3_s.channel15, secondary_irts_fr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_s.channel13, (long long unsigned int)secondary_irts_fr_3_s.channel14, (long long unsigned int)secondary_irts_fr_3_s.channel15, (long long unsigned int)secondary_irts_fr_3_s.channel16);
    
    secondary_IRTS_FR_3* secondary_irts_fr_3_d = (secondary_IRTS_FR_3*)malloc(sizeof(secondary_IRTS_FR_3));
    deserialize_secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_d->channel13, (long long unsigned int)secondary_irts_fr_3_d->channel14, (long long unsigned int)secondary_irts_fr_3_d->channel15, (long long unsigned int)secondary_irts_fr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fr_3_s, secondary_irts_fr_3_d, sizeof(secondary_IRTS_FR_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_0 */
    printf("secondary_IRTS_RL_0:\n");
    uint8_t* buffer_secondary_irts_rl_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_0));
    
    secondary_IRTS_RL_0 secondary_irts_rl_0_s = { 32828.0, 63897.0, 14978.0, 20292.0 };
    serialize_secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_s.channel1, secondary_irts_rl_0_s.channel2, secondary_irts_rl_0_s.channel3, secondary_irts_rl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_s.channel1, (long long unsigned int)secondary_irts_rl_0_s.channel2, (long long unsigned int)secondary_irts_rl_0_s.channel3, (long long unsigned int)secondary_irts_rl_0_s.channel4);
    
    secondary_IRTS_RL_0* secondary_irts_rl_0_d = (secondary_IRTS_RL_0*)malloc(sizeof(secondary_IRTS_RL_0));
    deserialize_secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_d->channel1, (long long unsigned int)secondary_irts_rl_0_d->channel2, (long long unsigned int)secondary_irts_rl_0_d->channel3, (long long unsigned int)secondary_irts_rl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rl_0_s, secondary_irts_rl_0_d, sizeof(secondary_IRTS_RL_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_1 */
    printf("secondary_IRTS_RL_1:\n");
    uint8_t* buffer_secondary_irts_rl_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_1));
    
    secondary_IRTS_RL_1 secondary_irts_rl_1_s = { 12917.0, 27165.0, 21588.0, 43743.0 };
    serialize_secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_s.channel5, secondary_irts_rl_1_s.channel6, secondary_irts_rl_1_s.channel7, secondary_irts_rl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_s.channel5, (long long unsigned int)secondary_irts_rl_1_s.channel6, (long long unsigned int)secondary_irts_rl_1_s.channel7, (long long unsigned int)secondary_irts_rl_1_s.channel8);
    
    secondary_IRTS_RL_1* secondary_irts_rl_1_d = (secondary_IRTS_RL_1*)malloc(sizeof(secondary_IRTS_RL_1));
    deserialize_secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_d->channel5, (long long unsigned int)secondary_irts_rl_1_d->channel6, (long long unsigned int)secondary_irts_rl_1_d->channel7, (long long unsigned int)secondary_irts_rl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rl_1_s, secondary_irts_rl_1_d, sizeof(secondary_IRTS_RL_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_2 */
    printf("secondary_IRTS_RL_2:\n");
    uint8_t* buffer_secondary_irts_rl_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_2));
    
    secondary_IRTS_RL_2 secondary_irts_rl_2_s = { 28203.0, 43725.0, 6109.0, 7569.0 };
    serialize_secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_s.channel9, secondary_irts_rl_2_s.channel10, secondary_irts_rl_2_s.channel11, secondary_irts_rl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_s.channel9, (long long unsigned int)secondary_irts_rl_2_s.channel10, (long long unsigned int)secondary_irts_rl_2_s.channel11, (long long unsigned int)secondary_irts_rl_2_s.channel12);
    
    secondary_IRTS_RL_2* secondary_irts_rl_2_d = (secondary_IRTS_RL_2*)malloc(sizeof(secondary_IRTS_RL_2));
    deserialize_secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_d->channel9, (long long unsigned int)secondary_irts_rl_2_d->channel10, (long long unsigned int)secondary_irts_rl_2_d->channel11, (long long unsigned int)secondary_irts_rl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rl_2_s, secondary_irts_rl_2_d, sizeof(secondary_IRTS_RL_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RL_3 */
    printf("secondary_IRTS_RL_3:\n");
    uint8_t* buffer_secondary_irts_rl_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_RL_3));
    
    secondary_IRTS_RL_3 secondary_irts_rl_3_s = { 47959.0, 7893.0, 14256.0, 14246.0 };
    serialize_secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_s.channel13, secondary_irts_rl_3_s.channel14, secondary_irts_rl_3_s.channel15, secondary_irts_rl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_s.channel13, (long long unsigned int)secondary_irts_rl_3_s.channel14, (long long unsigned int)secondary_irts_rl_3_s.channel15, (long long unsigned int)secondary_irts_rl_3_s.channel16);
    
    secondary_IRTS_RL_3* secondary_irts_rl_3_d = (secondary_IRTS_RL_3*)malloc(sizeof(secondary_IRTS_RL_3));
    deserialize_secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_d->channel13, (long long unsigned int)secondary_irts_rl_3_d->channel14, (long long unsigned int)secondary_irts_rl_3_d->channel15, (long long unsigned int)secondary_irts_rl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rl_3_s, secondary_irts_rl_3_d, sizeof(secondary_IRTS_RL_3)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_0 */
    printf("secondary_IRTS_RR_0:\n");
    uint8_t* buffer_secondary_irts_rr_0 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_0));
    
    secondary_IRTS_RR_0 secondary_irts_rr_0_s = { 2260.0, 65221.0, 62758.0, 44371.0 };
    serialize_secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_s.channel1, secondary_irts_rr_0_s.channel2, secondary_irts_rr_0_s.channel3, secondary_irts_rr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_s.channel1, (long long unsigned int)secondary_irts_rr_0_s.channel2, (long long unsigned int)secondary_irts_rr_0_s.channel3, (long long unsigned int)secondary_irts_rr_0_s.channel4);
    
    secondary_IRTS_RR_0* secondary_irts_rr_0_d = (secondary_IRTS_RR_0*)malloc(sizeof(secondary_IRTS_RR_0));
    deserialize_secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_d->channel1, (long long unsigned int)secondary_irts_rr_0_d->channel2, (long long unsigned int)secondary_irts_rr_0_d->channel3, (long long unsigned int)secondary_irts_rr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rr_0_s, secondary_irts_rr_0_d, sizeof(secondary_IRTS_RR_0)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_1 */
    printf("secondary_IRTS_RR_1:\n");
    uint8_t* buffer_secondary_irts_rr_1 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_1));
    
    secondary_IRTS_RR_1 secondary_irts_rr_1_s = { 32590.0, 41640.0, 6347.0, 64715.0 };
    serialize_secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_s.channel5, secondary_irts_rr_1_s.channel6, secondary_irts_rr_1_s.channel7, secondary_irts_rr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_s.channel5, (long long unsigned int)secondary_irts_rr_1_s.channel6, (long long unsigned int)secondary_irts_rr_1_s.channel7, (long long unsigned int)secondary_irts_rr_1_s.channel8);
    
    secondary_IRTS_RR_1* secondary_irts_rr_1_d = (secondary_IRTS_RR_1*)malloc(sizeof(secondary_IRTS_RR_1));
    deserialize_secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_d->channel5, (long long unsigned int)secondary_irts_rr_1_d->channel6, (long long unsigned int)secondary_irts_rr_1_d->channel7, (long long unsigned int)secondary_irts_rr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rr_1_s, secondary_irts_rr_1_d, sizeof(secondary_IRTS_RR_1)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_2 */
    printf("secondary_IRTS_RR_2:\n");
    uint8_t* buffer_secondary_irts_rr_2 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_2));
    
    secondary_IRTS_RR_2 secondary_irts_rr_2_s = { 28363.0, 5522.0, 37943.0, 53915.0 };
    serialize_secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_s.channel9, secondary_irts_rr_2_s.channel10, secondary_irts_rr_2_s.channel11, secondary_irts_rr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_s.channel9, (long long unsigned int)secondary_irts_rr_2_s.channel10, (long long unsigned int)secondary_irts_rr_2_s.channel11, (long long unsigned int)secondary_irts_rr_2_s.channel12);
    
    secondary_IRTS_RR_2* secondary_irts_rr_2_d = (secondary_IRTS_RR_2*)malloc(sizeof(secondary_IRTS_RR_2));
    deserialize_secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_d->channel9, (long long unsigned int)secondary_irts_rr_2_d->channel10, (long long unsigned int)secondary_irts_rr_2_d->channel11, (long long unsigned int)secondary_irts_rr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rr_2_s, secondary_irts_rr_2_d, sizeof(secondary_IRTS_RR_2)) == 0);
    puts("SUCCESS!\n");
        

/* secondary_IRTS_RR_3 */
    printf("secondary_IRTS_RR_3:\n");
    uint8_t* buffer_secondary_irts_rr_3 = (uint8_t*)malloc(sizeof(secondary_IRTS_RR_3));
    
    secondary_IRTS_RR_3 secondary_irts_rr_3_s = { 49725.0, 42317.0, 45006.0, 32298.0 };
    serialize_secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_s.channel13, secondary_irts_rr_3_s.channel14, secondary_irts_rr_3_s.channel15, secondary_irts_rr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16);
    
    secondary_IRTS_RR_3* secondary_irts_rr_3_d = (secondary_IRTS_RR_3*)malloc(sizeof(secondary_IRTS_RR_3));
    deserialize_secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_d->channel13, (long long unsigned int)secondary_irts_rr_3_d->channel14, (long long unsigned int)secondary_irts_rr_3_d->channel15, (long long unsigned int)secondary_irts_rr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rr_3_s, secondary_irts_rr_3_d, sizeof(secondary_IRTS_RR_3)) == 0);
    puts("SUCCESS!\n");
        
}