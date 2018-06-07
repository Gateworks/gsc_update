unsigned short i2c_upgrader_address_fram[1] = {0x8400};
unsigned char i2c_upgrader_data_fram[1][1024] = {
	{
		0xB2,0x40,0x80,0x5A,0x5C,0x01,0x32,0xC2,0x03,0x43,0x1C,0x42,0x40,0x06,0x1C,0xD3,
		0x82,0x4C,0x40,0x06,0x1C,0x42,0x6A,0x06,0x3C,0xF0,0xFC,0xFF,0x82,0x4C,0x6A,0x06,
		0x1C,0x42,0x6A,0x06,0x3C,0xF0,0xF3,0xFF,0x82,0x4C,0x6A,0x06,0x5C,0x42,0x0A,0x02,
		0x7C,0xF0,0x3F,0x00,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x0A,0x02,0x5C,0x42,0x0C,0x02,
		0x7C,0xF0,0x3F,0x00,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x0C,0x02,0x5C,0x42,0x04,0x02,
		0x7C,0xF0,0x3F,0x00,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x04,0x02,0x5C,0x42,0x02,0x02,
		0x7C,0xF0,0x3F,0x00,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x02,0x02,0x5C,0x42,0x25,0x02,
		0x7C,0xF0,0xEF,0xFF,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x25,0x02,0x5C,0x42,0x23,0x02,
		0x7C,0xF0,0xEF,0xFF,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x23,0x02,0x25,0x43,0x37,0x40,
		0xAC,0x84,0x38,0x40,0xFE,0x86,0x39,0x40,0x00,0x1C,0xA9,0x47,0x00,0x00,0x07,0x55,
		0x09,0x55,0x08,0x97,0xFA,0x23,0x27,0x42,0x30,0x40,0x00,0x1C,0x5C,0x42,0x00,0x02,
		0x8C,0x11,0x4C,0x93,0xFB,0x37,0x5C,0x42,0x00,0x02,0x7C,0xF0,0x40,0x00,0x0C,0x93,
		0xF5,0x27,0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,0x0D,0x34,0x5C,0x42,0x00,0x02,
		0x7C,0xF0,0x40,0x00,0x0C,0x93,0xF5,0x23,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,
		0x4C,0x93,0xFB,0x3B,0x02,0x3C,0x03,0x43,0xE1,0x3F,0x06,0x40,0x06,0x57,0xE6,0x3C,
		0x0C,0x44,0x12,0xC3,0x0C,0x10,0x7C,0xF0,0x7F,0x00,0x3C,0x90,0x21,0x00,0x01,0x24,
		0xD5,0x3F,0x0C,0x44,0x5C,0xF3,0x0C,0x93,0x4D,0x24,0x03,0x43,0x5C,0x42,0x00,0x02,
		0x8C,0x11,0x4C,0x93,0xFB,0x3B,0x5C,0x42,0x04,0x02,0x7C,0xD0,0x40,0x00,0x3C,0xF0,
		0xFF,0x00,0xC2,0x4C,0x04,0x02,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,
		0xFB,0x37,0x45,0x43,0x17,0x3C,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,
		0xFB,0x3B,0x5C,0x42,0x04,0x02,0x7C,0xD0,0x40,0x00,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,
		0x04,0x02,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,0xFB,0x37,0x0C,0x45,
		0x1C,0x53,0x05,0x4C,0x0D,0x45,0x7C,0x40,0x07,0x00,0x0C,0x9D,0xE4,0x2F,0x03,0x43,
		0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,0xFB,0x3B,0x5C,0x42,0x04,0x02,0x7C,0xF0,
		0xBF,0xFF,0x3C,0xF0,0xFF,0x00,0xC2,0x4C,0x04,0x02,0x03,0x43,0x5C,0x42,0x00,0x02,
		0x8C,0x11,0x4C,0x93,0xFB,0x37,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,0x4C,0x93,
		0xFB,0x3B,0x6A,0x3C,0x06,0x40,0x06,0x57,0x75,0x3C,0x06,0x40,0x06,0x57,0x86,0x3C,
		0x06,0x40,0x06,0x57,0x6F,0x3C,0x0C,0x44,0x1C,0x93,0x07,0x20,0x32,0xD2,0x03,0x43,
		0x31,0x40,0xFE,0x1F,0x10,0x42,0xFE,0xFF,0x57,0x3C,0x0C,0x44,0x2C,0x93,0x15,0x20,
		0x06,0x40,0x06,0x57,0x73,0x3C,0x0C,0x44,0x0A,0x4C,0x06,0x40,0x06,0x57,0x5A,0x3C,
		0x06,0x40,0x06,0x57,0x6B,0x3C,0x0C,0x44,0x47,0x18,0x0C,0x5C,0x0D,0x4A,0x0C,0xDD,
		0x0A,0x4C,0x06,0x40,0x06,0x57,0x4E,0x3C,0x3F,0x3C,0x0C,0x44,0x3C,0x90,0x03,0x00,
		0x1B,0x20,0x12,0x3C,0x0D,0x4A,0x3C,0x40,0xFF,0xF7,0x0C,0x9D,0x05,0x2C,0x0D,0x4A,
		0x3C,0x40,0xFF,0xFD,0x0C,0x9D,0x04,0x2C,0x0C,0x4A,0xBC,0x43,0x00,0x00,0x01,0x3C,
		0x03,0x43,0x0C,0x4A,0x2C,0x53,0x0A,0x4C,0x0C,0x4A,0x0D,0x4C,0x3D,0x50,0x00,0x02,
		0x0C,0x4A,0x0C,0x9D,0xE7,0x2B,0x20,0x3C,0x0C,0x44,0x2C,0x92,0x15,0x20,0x06,0x40,
		0x06,0x57,0x3C,0x3C,0x0C,0x44,0x05,0x4C,0x06,0x40,0x06,0x57,0x23,0x3C,0x06,0x40,
		0x06,0x57,0x34,0x3C,0x0C,0x44,0x47,0x18,0x0C,0x5C,0x0D,0x45,0x0C,0xDD,0x05,0x4C,
		0x06,0x40,0x06,0x57,0x17,0x3C,0x08,0x3C,0x0C,0x44,0x3C,0x90,0x05,0x00,0x04,0x20,
		0x0C,0x4A,0x0D,0x45,0x8C,0x4D,0x00,0x00,0x03,0x43,0x5C,0x42,0x00,0x02,0x8C,0x11,
		0x4C,0x93,0xFB,0x37,0x03,0x43,0x5C,0x42,0x00,0x02,0x7C,0xF0,0x40,0x00,0x0C,0x93,
		0xFA,0x27,0x0C,0x3F,0x5C,0x42,0x00,0x02,0x4C,0x93,0xFC,0x3B,0xF2,0xD0,0x40,0x00,
		0x04,0x02,0x5C,0x42,0x00,0x02,0x4C,0x93,0xFC,0x37,0x5C,0x42,0x00,0x02,0x4C,0x93,
		0xFC,0x3B,0xF2,0xF0,0xBF,0xFF,0x04,0x02,0xC0,0x06,0x30,0x41,0x5C,0x42,0x00,0x02,
		0x4C,0x93,0xFC,0x37,0x34,0x40,0x00,0x01,0x0D,0x44,0xF2,0xB0,0x40,0x00,0x00,0x02,
		0x01,0x24,0x1D,0x53,0x0D,0x93,0x0E,0x38,0x0D,0x5D,0x5C,0x42,0x00,0x02,0x4C,0x93,
		0xFC,0x3B,0x5C,0x42,0x00,0x02,0x4C,0x93,0xF0,0x3B,0x5C,0x42,0x00,0x02,0x4C,0x93,
		0xF8,0x37,0xEB,0x3F,0x7D,0xF0,0xFF,0x00,0x04,0x4D,0xC0,0x06,0x30,0x41,0x30,0x41,
	}
};
unsigned short i2c_upgrader_length_fram[1] = {768};
#if 0
@8400
B2 40 80 5A 5C 01 32 C2 03 43 1C 42 40 06 1C D3
82 4C 40 06 1C 42 6A 06 3C F0 FC FF 82 4C 6A 06
1C 42 6A 06 3C F0 F3 FF 82 4C 6A 06 5C 42 0A 02
7C F0 3F 00 3C F0 FF 00 C2 4C 0A 02 5C 42 0C 02
7C F0 3F 00 3C F0 FF 00 C2 4C 0C 02 5C 42 04 02
7C F0 3F 00 3C F0 FF 00 C2 4C 04 02 5C 42 02 02
7C F0 3F 00 3C F0 FF 00 C2 4C 02 02 5C 42 25 02
7C F0 EF FF 3C F0 FF 00 C2 4C 25 02 5C 42 23 02
7C F0 EF FF 3C F0 FF 00 C2 4C 23 02 25 43 37 40
AC 84 38 40 FE 86 39 40 00 1C A9 47 00 00 07 55
09 55 08 97 FA 23 27 42 30 40 00 1C 5C 42 00 02
8C 11 4C 93 FB 37 5C 42 00 02 7C F0 40 00 0C 93
F5 27 5C 42 00 02 8C 11 4C 93 0D 34 5C 42 00 02
7C F0 40 00 0C 93 F5 23 03 43 5C 42 00 02 8C 11
4C 93 FB 3B 02 3C 03 43 E1 3F 06 40 06 57 E6 3C
0C 44 12 C3 0C 10 7C F0 7F 00 3C 90 21 00 01 24
D5 3F 0C 44 5C F3 0C 93 4D 24 03 43 5C 42 00 02
8C 11 4C 93 FB 3B 5C 42 04 02 7C D0 40 00 3C F0
FF 00 C2 4C 04 02 03 43 5C 42 00 02 8C 11 4C 93
FB 37 45 43 17 3C 03 43 5C 42 00 02 8C 11 4C 93
FB 3B 5C 42 04 02 7C D0 40 00 3C F0 FF 00 C2 4C
04 02 03 43 5C 42 00 02 8C 11 4C 93 FB 37 0C 45
1C 53 05 4C 0D 45 7C 40 07 00 0C 9D E4 2F 03 43
5C 42 00 02 8C 11 4C 93 FB 3B 5C 42 04 02 7C F0
BF FF 3C F0 FF 00 C2 4C 04 02 03 43 5C 42 00 02
8C 11 4C 93 FB 37 03 43 5C 42 00 02 8C 11 4C 93
FB 3B 6A 3C 06 40 06 57 75 3C 06 40 06 57 86 3C
06 40 06 57 6F 3C 0C 44 1C 93 07 20 32 D2 03 43
31 40 FE 1F 10 42 FE FF 57 3C 0C 44 2C 93 15 20
06 40 06 57 73 3C 0C 44 0A 4C 06 40 06 57 5A 3C
06 40 06 57 6B 3C 0C 44 47 18 0C 5C 0D 4A 0C DD
0A 4C 06 40 06 57 4E 3C 3F 3C 0C 44 3C 90 03 00
1B 20 12 3C 0D 4A 3C 40 FF F7 0C 9D 05 2C 0D 4A
3C 40 FF FD 0C 9D 04 2C 0C 4A BC 43 00 00 01 3C
03 43 0C 4A 2C 53 0A 4C 0C 4A 0D 4C 3D 50 00 02
0C 4A 0C 9D E7 2B 20 3C 0C 44 2C 92 15 20 06 40
06 57 3C 3C 0C 44 05 4C 06 40 06 57 23 3C 06 40
06 57 34 3C 0C 44 47 18 0C 5C 0D 45 0C DD 05 4C
06 40 06 57 17 3C 08 3C 0C 44 3C 90 05 00 04 20
0C 4A 0D 45 8C 4D 00 00 03 43 5C 42 00 02 8C 11
4C 93 FB 37 03 43 5C 42 00 02 7C F0 40 00 0C 93
FA 27 0C 3F 5C 42 00 02 4C 93 FC 3B F2 D0 40 00
04 02 5C 42 00 02 4C 93 FC 37 5C 42 00 02 4C 93
FC 3B F2 F0 BF FF 04 02 C0 06 30 41 5C 42 00 02
4C 93 FC 37 34 40 00 01 0D 44 F2 B0 40 00 00 02
01 24 1D 53 0D 93 0E 38 0D 5D 5C 42 00 02 4C 93
FC 3B 5C 42 00 02 4C 93 F0 3B 5C 42 00 02 4C 93
F8 37 EB 3F 7D F0 FF 00 04 4D C0 06 30 41 30 41
q
#endif