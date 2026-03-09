#include <string.h>

void bms_msgname_from_id(uint32_t msg_id, char buffer[static 5]) {
    /*
    *       Returns a string containing the name of the message having the specified id
    *           Parameters:
    *               msg_id: the id of the message
    *               buffer: the pre allocated buffer where the message name will be returned
    */
    switch (msg_id) {
        case 0:
            strcpy(buffer, "BMS_0");
            break;
        case 32:
            strcpy(buffer, "BMS_1");
            break;
        default:
            strcpy(buffer, ""); // Unknown message
    }
}
