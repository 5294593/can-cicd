from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple


# Bms0
class Bms0:
    struct = namedtuple("Bms0_struct", "crc_checksum pack_soc relay_state pack_inst_voltage pack_current", rename=True)
    schema = "<bbhhH"
    
    @staticmethod
    def serialize(crc_checksum, pack_soc, relay_state, pack_inst_voltage, pack_current) -> bytes:
        return pack(Bms0.schema, crc_checksum, pack_soc, relay_state, pack_inst_voltage, pack_current)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Bms0.struct":
        return Bms0.struct._make(unpack(Bms0.schema, buffer))

# Bms1
class Bms1:
    struct = namedtuple("Bms1_struct", "crc_checksum low_temp high_temp pack_ccl pack_dcl", rename=True)
    schema = "<bbbbh"
    
    @staticmethod
    def serialize(crc_checksum, low_temp, high_temp, pack_ccl, pack_dcl) -> bytes:
        return pack(Bms1.schema, crc_checksum, low_temp, high_temp, pack_ccl, pack_dcl)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Bms1.struct":
        return Bms1.struct._make(unpack(Bms1.schema, buffer))
