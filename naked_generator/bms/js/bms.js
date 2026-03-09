const byteify = require('byteify');

function serializeBmsBms0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.crc_checksum),
        ...byteify.serializeUint8(data.pack_soc),
        ...byteify.serializeUint16(data.relay_state),
        ...byteify.serializeUint16(data.pack_inst_voltage),
        ...byteify.serializeInt16(data.pack_current),
    ]);
}
function deserializeBmsBms0(bytes) {
    return {
        crc_checksum: byteify.deserializeUint8(bytes.slice(0, 1)),
        pack_soc: byteify.deserializeUint8(bytes.slice(1, 2)),
        relay_state: byteify.deserializeUint16(bytes.slice(2, 4)),
        pack_inst_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        pack_current: byteify.deserializeInt16(bytes.slice(6, 8)),
    }
}

function serializeBmsBms1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.crc_checksum),
        ...byteify.serializeUint8(data.low_temp),
        ...byteify.serializeUint8(data.high_temp),
        ...byteify.serializeUint8(data.pack_ccl),
        ...byteify.serializeUint16(data.pack_dcl),
    ]);
}
function deserializeBmsBms1(bytes) {
    return {
        crc_checksum: byteify.deserializeUint8(bytes.slice(0, 1)),
        low_temp: byteify.deserializeUint8(bytes.slice(1, 2)),
        high_temp: byteify.deserializeUint8(bytes.slice(2, 3)),
        pack_ccl: byteify.deserializeUint8(bytes.slice(3, 4)),
        pack_dcl: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}
