#ifndef OPCODE_H_
#define OPCODE_H_
#include <inttypes.h>
#include "frame.h"

typedef void* OPCODE(Frame*);

OPCODE** initOpcodes();


typedef enum OPCODENAMES{
    ICONST_M1     = 0x02,
    ICONST_0      = 0x03,
    ICONST_1      = 0x04,
    ICONST_2      = 0x05,
    ICONST_3      = 0x06,
    ICONST_4      = 0x07,
    ICONST_5      = 0x08,
    LCONST_0      = 0x09,
    LCONST_1      = 0x0A,
    DCONST_0      = 0x0E,
    DCONST_1      = 0x0F,
    BIPUSH        = 0x10,
    SIPUSH        = 0x11,
    LDC           = 0x12,
    LDC2_W        = 0x14,
    ILOAD         = 0x15,
    LLOAD         = 0x16,
    DLOAD         = 0x18,
    ILOAD_0       = 0x1A,
    ILOAD_1       = 0x1B,
    ILOAD_2       = 0x1C,
    ILOAD_3       = 0x1D,
    LLOAD_0       = 0x1E,
    LLOAD_1       = 0x1F,
    LLOAD_2       = 0x20,
    LLOAD_3       = 0x21,
    DLOAD_3       = 0x29,
    ALOAD_0       = 0x2A,
    ALOAD_1       = 0x2B,
    ALOAD_2       = 0x2C,
    ALOAD_3       = 0x2D,
    IALOAD        = 0x2E,
    AALOAD        = 0x32,
    ISTORE        = 0x36,
    LSTORE        = 0x37,
    DSTORE        = 0x39,
    ISTORE_0      = 0x3B,
    ISTORE_1      = 0x3C,
    ISTORE_2      = 0x3D,
    ISTORE_3      = 0x3E,
    LSTORE_0      = 0x3F,
    LSTORE_1      = 0x40,
    LSTORE_2      = 0x41,
    LSTORE_3      = 0x42,
    DSTORE_3      = 0x4A,
    ASTORE_0      = 0x4B,
    ASTORE_1      = 0x4C,
    ASTORE_2      = 0x4D,
    ASTORE_3      = 0x4E,
    IASTORE       = 0x4F,
    AASTORE       = 0x53,
    POP           = 0x57,
    DUP           = 0x59,
    IADD          = 0x60,
    LADD          = 0x61,
    DADD          = 0x63,
    ISUB          = 0x64,
    DSUB          = 0x67,
    IMUL          = 0x68,
    DMUL          = 0x6B,
    DDIV          = 0x6F,
    IREM          = 0x70,
    IINC          = 0x84,
    I2D           = 0x87,
    I2C           = 0x92,
    DCMPG         = 0x98,
    IFNE          = 0x9A,
    IFLT          = 0x9B,
    IFGE          = 0x9C,
    IFLE          = 0x9E,
    IF_ICMPLT     = 0xA1,
    IF_ICMPGE     = 0xA2,
    IF_ICMPGT     = 0xA3,
    IF_ICMPLE     = 0xA4,
    GOTO          = 0xA7,
    IRET          = 0xAC,
    LRET          = 0xAD,
    DRETURN       = 0xAF,
    ARETURN       = 0xB0,
    RETURN        = 0xB1,
    GETSTATIC     = 0xB2,
    PUTSTATIC     = 0xB3,
    GETFIELD      = 0xB4,
    PUTFIELD      = 0xB5,
    INVOKEVIRTUAL = 0xB6,
    INVOKESPECIAL = 0xB7,
    INVOKESTATIC  = 0xB8,
    NEW           = 0xBB,
    NEWARRAY      = 0xBC,
    ANEWARRAY     = 0xBD,
    ARRAYLENGTH   = 0xBE
}OPCODENAMES;


#endif