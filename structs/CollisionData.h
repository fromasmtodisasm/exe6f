#ifndef STRUCTS_COLLISION_DATA_H
#define STRUCTS_COLLISION_DATA_H

#include "inttypes.h"

typedef struct {
  /*
  Enabled/Disabled?
  */
	u8 enable;                         // loc=0x0
	u8 collisionRegion;                // loc=0x1
	u8 primaryElement;                 // loc=0x2
	u8 unk_03;                         // loc=0x3
	u8 alliance;                       // loc=0x4
	u8 flip;                           // loc=0x5
	u8 unk_06;                         // loc=0x6
	u8 staminaDmg_counterDisabler;     // loc=0x7
	u8 poisonPanelTimer;               // loc=0x8
		u8 pad_09[0x01];
	u8 panelX;                         // loc=0xA
	u8 panelY;                         // loc=0xB
	u8 direction;                      // loc=0xC
	u8 counterTimer;                   // loc=0xD
	u8 hitModifierBase;                // loc=0xE
	u8 hitModifierFinal;               // loc=0xF
	u8 statusEffectBase;               // loc=0x10
	u8 statusEffectFinal;              // loc=0x11
  /*
  TODO: Is the whole u16 on bugs?
  */
	u16 bugs;                          // loc=0x12
		u8 pad_14[0x04];
	u8 secondaryElementWeakness;       // loc=0x18
	u8 secondaryElement;               // loc=0x19
		u8 pad_1A[0x02];
	u16 unk_1C;                        // loc=0x1C
	u16 unk_1E;                        // loc=0x1E
	u16 unk_20;                        // loc=0x20
	u16 unk_22;                        // loc=0x22
	u16 unk_24;                        // loc=0x24
	u16 unk_26;                        // loc=0x26
	u16 unk_28;                        // loc=0x28
	u16 unk_2A;                        // loc=0x2A
	u16 unk_2C;                        // loc=0x2C
	u16 selfDamage;                    // loc=0x2E
	u32 selfCollisionTypeFlags;        // loc=0x30
	u32 targetCollisionTypeFlags;      // loc=0x34
	u32 *parentObject;                 // loc=0x38
  /*
  0x00000001 Guard
  0x00000008 invulnerable
  0x00000010 airshoe
  0x00000020 floatshoe
  0x00000040 currently moving
  0x00000800 paralyzed
  0x00004000 immobilized
  0x00010000 frozen
  0x00020000 superarmor
  0x00040000 undershirt
  0x00080000 currently moving
  0x02000000 affected by ice
  0x08000000 unaffected by poison
  */
	u32 objectFlags;                   // loc=0x3C
	u32 objectFlags2;                  // loc=0x40
  /*
  TODO: [Investigate] Bit? This is a u32 though.
  */
	u32 collisionIndexBit;             // loc=0x44
	u32 unk_48;                        // loc=0x48
	u32 unk_4C;                        // loc=0x4C
		u8 pad_50[0x04];
	u32 unk_54;                        // loc=0x54
		u8 pad_58[0x08];
	u32 unk_60;                        // loc=0x60
	u32 unk_64;                        // loc=0x64
	u32 unk_68;                        // loc=0x68
	u32 unk_6C;                        // loc=0x6C
  /*
  flags from a collision(bits from Collision Type list)
  */
	u32 collisionFlags;                // loc=0x70
  /*
  !! indicator. Oops, a joke in names p:
  */
	u8 factorialIndicator;             // loc=0x74
	u8 damageMultiplier;               // loc=0x75
	u8 damageElements;                 // loc=0x76
	u8 unk_77;                         // loc=0x77
	u16 unk_78;                        // loc=0x78
		u8 pad_7A[0x02];
	u32 unk_7C;                        // loc=0x7C
	u16 finalDamage;                   // loc=0x80
	u16 panelDamage1;                  // loc=0x82
	u16 panelDamage2;                  // loc=0x84
	u16 panelDamage3;                  // loc=0x86
	u16 panelDamage4;                  // loc=0x88
	u16 panelDamage5;                  // loc=0x8A
  /*
  used for poison
  */
	u16 panelDamage6;                  // loc=0x8C
	u16 unk_8E;                        // loc=0x8E
	u16 unk_90;                        // loc=0x90
	u16 unk_92;                        // loc=0x92
	u16 unk_94;                        // loc=0x94
		u8 pad_96[0x0A];
	u32 unk_A0;                        // loc=0xA0
	u8 inflictedBugs;                  // loc=0xA4
		u8 pad_A5[0x03];
	// size=0xA8
}CollisionData;

// Accessed Functions
/*
	03007214 0300723A? 030072C4? 03007308? 0300731A?
	0300732C? 0300745C 0300749E 030074B6 0300754C
	030075F8 0300764C 03007668 0300768E 030076AE?
	030076C0? 030076D2? 03007704 03007778 0300785E?
	03007876? 03007970? 0800E3DE 0800E498 0800E548
	0800E730 0800E9DC 0800EB26 0800EB9E 08010162
	08010198 080101C4 08013AE4 08016934 08016CA4
	08017AB4 0801986C 080198AE? 080198CE? 08019F44
	08019F9E? 08019FB4 0801A018 0801A04C 0801A074?
	0801A07C? 0801A082 0801A152? 0801A15C? 0801A166?
	0801A16C? 0801A176? 0801A180? 0801A186 0801A1CE?
	0801A200 0801A284 0801A29A 0801A2B0 0801A2CC
	0801A308 0801A36A 0801A3AC? 0801A420? 0801A42E
	0801A45C 0801A4A6 0801A506 0801A554 0801A5E2?
	0801A5EE 0801A648 0801A6E8 0801A720 0801A7EC?
	0801A80C? 0801AEB0 0801BA12 0801C168 0802CFF8
	080FCFCA
*/

// Accesses
/*
	name=CollisionData, size=0xA8
	0801986C::08019884 u32(0x44), 080198AE?::080198C8 u8(0x00), 08019FB4::08019FB8 u32(0x38),
	08019FB4::08019FBA u8(0x0E), 08019FB4::08019FC2 u8(0x02), 08019FB4::08019FC8 u8(0x19),
	08019FB4::08019FCC u16(0x04), 08019FB4::08019FD2 u16(0x0A), 08019FB4::08019FD6 u8(0x01),
	08019FB4::08019FDA u8(0x07), 08019FB4::08019FDE u16(0x2E), 08019FB4::08019FE8 u32(0x30),
	08019FB4::0801A004 u32(0x34), 08019F44::08019F48 u16(0x2E), 08019F44::08019F50 u16(0x2E),
	08019F9E?::08019FA0 u8(0x18), 0801A42E::0801A434 u8(0x74), 0801A4A6::0801A4AC u8(0xA4),
	0801A45C::0801A460 u32(0x70), 0801A506::0801A50C u8(0x75), 0801BA12::0801BA16 u16(0x80),
	0801BA12::0801BA6A u16(0x8C), 0801A200::0801A20E u16(0x90), 0801A200::0801A24E u16(0x8E),
	0801A166?::0801A168 u32(0x3C), 0801A180?::0801A182 u32(0x40), 08010162::08010166 u16(0x26),
	0801A15C?::0801A15E u32(0x3C), 0801A15C?::0801A162 u32(0x3C), 0801A176?::0801A178 u32(0x40),
	0801A176?::0801A17C u32(0x40), 0801A018::0801A01C u32(0x70), 0801A018::0801A01E u32(0x54),
	0801A018::0801A022 u32(0x54), 0801A018::0801A02E u8(0x0F), 0801A018::0801A030 u8(0x03),
	0801A018::0801A032 u32(0x54), 0801A018::0801A036 u8(0x11), 03007778::03007780 u8(0x01),
	03007778::0300778E u8(0x04), 03007778::03007790 u8(0x05), 03007778::030077A4 u8(0x0A),
	03007778::030077AC u8(0x0B), 0300785E?::0300786E u32(0x44), 03007970?::0300798C u32(0x30),
	0801C168::0801C1A2 u8(0x08), 0300754C::03007552 u8(0x01), 0300754C::03007560 u8(0x04),
	0300754C::03007562 u8(0x05), 0300754C::03007576 u8(0x0A), 0300754C::0300757E u8(0x0B),
	03007876?::0300788A u32(0x44), 03007704::03007722 u32(0x30), 0801A80C?::0801A80E u8(0x06),
	0801A186::0801A196 u8(0x01), 0801A186::0801A19C u8(0x0A), 0801A186::0801A19E u8(0x0B),
	0801A1CE?::0801A1D0 u8(0x08), 0801A36A::0801A394 u8(0x0A), 0801A36A::0801A396 u8(0x0B),
	0802CFF8::0802CFFE u8(0x76), 0801A6E8::0801A6EE u8(0xA4), 0801A720::0801A726 u8(0xA4),
	08013AE4::08013AEC u8(0xA4), 0801AEB0::0801AEB2 u8(0x0F), 0800EB26::0800EB2A u32(0x70),
	0801A554::0801A558 u8(0x11), 0801A2CC::0801A2D0 u32(0x70), 0801A308::0801A31A u16(0x92),
	0800E3DE::0800E404 u16(0x82+0x00), 0800E3DE::0800E40A u16(0x82+0x00), 0800E3DE::0800E41C u16(0x80+0x00),
	0801A420?::0801A422 u8(0x0D), 08010198::0801019C u16(0x26), 0801A648::0801A652 u16(0x24),
	0800EB9E::0800EBA8 u32(0x70), 0801A5EE::0801A5FC u16(0x24), 0801A5EE::0801A616 u16(0x24),
	0800E730::0800E744 u16(0x1C), 0800E730::0800E748 u16(0x1C), 0800E730::0800E75A u16(0x1C),
	0800E730::0800E7AE u16(0x2A), 0800E730::0800E7B2 u16(0x2A), 0800E730::0800E7BE u16(0x2A),
	0800E730::0800E820 u16(0x2C), 0800E730::0800E824 u16(0x2C), 0800E730::0800E830 u16(0x2C),
	0800E730::0800E832 u32(0x60), 0800E730::0800E894 u16(0x1E), 0800E730::0800E898 u16(0x1E),
	0800E730::0800E8AA u16(0x1E), 0800E730::0800E8AC u32(0x48), 0800E730::0800E8E2 u16(0x22),
	0800E730::0800E8E6 u16(0x22), 0800E730::0800E8F2 u16(0x22), 0800E730::0800E908 u16(0x20),
	0800E730::0800E90C u16(0x20), 0800E730::0800E918 u16(0x20), 0800E730::0800E91C u32(0x4C),
	0800E730::0800E942 u16(0x28), 0800E730::0800E946 u16(0x28), 0800E730::0800E952 u16(0x28),
	0801A152?::0801A154 u32(0x3C), 0801A152?::0801A158 u32(0x3C), 0801A04C::0801A050 u8(0x0A),
	0801A04C::0801A052 u8(0x0B), 0801A04C::0801A056 u8(0x0A), 0801A04C::0801A05A u8(0x0B),
	0801A04C::0801A062 u8(0x0C), 0801A3AC?::0801A3C0 u8(0x0A), 0801A3AC?::0801A3C2 u8(0x0B),
	030075F8::03007620 u32(0x44), 030075F8::0300762A u32(0x68), 030075F8::03007630 u32(0x68),
	0300764C::03007650 u32(0x30), 0300764C::0300764E u32(0x34), 030075F8::0300761E u32(0x68),
	08017AB4::08017B7E u16(0x80), 030075F8::03007628 u32(0x68), 030075F8::0300762C u32(0x44),
	03007214::03007230 u32(0x30), 0300723A?::0300723A u32(0x3C), 0300732C?::03007332 u32(0x44),
	0300732C?::0300733A u32(0x30), 0300732C?::03007344 u8(0x19), 0300732C?::0300734E u8(0x10),
	0300732C?::0300735A u8(0x07), 0300732C?::030073B2 u8(0x0E), 0300732C?::030073BC u16(0x12),
	0300732C?::030073CC u8(0x02), 0300732C?::030073D6 u8(0x19), 0300732C?::030073F6 u16(0x2E),
	0300732C?::030073F8 u8(0x02), 03007668::03007676 u8(0x02), 0300732C?::03007422 u32(0x64),
	0300768E::030076A4 u32(0x30), 030076AE?::030076AE u32(0x3C), 030076C0?::030076C0 u32(0x30),
	030076D2?::030076D4 u32(0x30), 030076D2?::030076DA u8(0x19), 030076D2?::030076E4 u8(0x02),
	030076D2?::030076EA u16(0x2E), 03007214::0300721A u32(0x3C), 03007214::0300721C u32(0x30),
	030072C4?::030072F6 u8(0x03), 030072C4?::030072FA u8(0x03), 030072C4?::03007300 u32(0x70),
	030072C4?::03007304 u32(0x70), 0300768E::0300769A u32(0x3C), 030076AE?::030076B0 u32(0x30),
	030076C0?::030076C2 u32(0x3C), 030076D2?::030076D2 u32(0x6C), 030076D2?::030076D8 u32(0x6C),
	030076D2?::030076DE u8(0x77), 030076D2?::030076E2 u8(0x77), 030076D2?::030076EC u16(0x94),
	030076D2?::030076F0 u16(0x94), 03007668::0300766C u8(0x0B), 03007668::0300766E u8(0x0A),
	030076D2?::030076FC u16(0x94), 030076D2?::03007700 u16(0x94), 0800E9DC::0800E9F6 u8(0x0D),
	0801A420?::0801A42A u8(0x0D), 03007308?::03007308 u32(0x30), 0300731A?::0300731A u32(0x30),
	0300732C?::03007334 u32(0x7C), 0300732C?::03007338 u32(0x7C), 0300732C?::0300733C u32(0x70),
	0300732C?::03007340 u32(0x70), 0300732C?::03007348 u8(0x76), 0300732C?::0300734C u8(0x76),
	0300745C::0300745E u8(0x02), 0300732C?::0300735C u8(0x0D), 0300732C?::03007382 u8(0x0D),
	0300732C?::03007394 u16(0x90), 0300732C?::03007398 u16(0x90), 0300732C?::030073A0 u16(0x8E),
	0300732C?::030073A4 u16(0x8E), 0300732C?::030073B4 u8(0x0F), 0300732C?::030073B8 u8(0x0F),
	0300732C?::030073CA u8(0x02), 0300732C?::030073D4 u8(0x18), 0300732C?::030073E2 u8(0x75),
	030074B6::030074BA u32(0x3C), 0300749E::030074A2 u32(0x3C), 0300732C?::030073F4 u8(0x74),
	0300732C?::0300740C u16(0x82), 0300732C?::03007410 u16(0x82), 0300732C?::0300741C u16(0x82),
	0300732C?::03007420 u16(0x82), 0300732C?::03007426 u32(0xA0), 0300732C?::0300742A u32(0xA0),
	0801A16C?::0801A16E u32(0x40), 0801A16C?::0801A172 u32(0x40), 0801A29A::0801A2AC u16(0x2A),
	0801A2B0::0801A2C2 u16(0x2C), 0801A284::0801A296 u16(0x1C), 0801A082::0801A086 u8(0x0E),
	0801A082::0801A08A u16(0x2E), 0801A082::0801A094 u32(0x30), 0801A082::0801A09E u32(0x34),
	0801A07C?::0801A07E u8(0x01), 080FCFCA::080FCFF4 u16(0x2E), 080FCFCA::080FCFF8 u8(0x07),
	080101C4::080101CA u16(0x26), 0800E498::0800E4A2 u8(0x0C), 0800E548::0800E552 u8(0x0F),
	0801A5EE::0801A60E u16(0x24), 0801A5EE::0801A61E u16(0x24), 08016934::08016956 u16(0x24),
	0801A648::0801A658 u32(0x70), 0300732C?::03007370 u32(0x70), 0300732C?::03007374 u32(0x70),
	0300732C?::0300738E u16(0x90), 0800EB26::0800EB32 u8(0x11), 0800EB26::0800EB3E u8(0x11),
	0801A554::0801A574 u16(0x1C), 0801A45C::0801A48C u8(0x0D), 0800E730::0800E780 u16(0x1E),
	0800E730::0800E782 u16(0x2A), 0800E730::0800E784 u16(0x2C), 08016CA4::08016CC8 u8(0x0D),
	0300732C?::03007400 u16(0x78), 0300732C?::03007404 u16(0x78), 0801A074?::0801A078 u8(0x01),
	0801A5E2?::0801A5E6 u32(0x48), 0801A5E2?::0801A5EA u32(0x4C), 0801A7EC?::0801A7FE u8(0x06),
	080198CE?::080198D4 u8(0x00), 080198CE?::080198D6 u32(0x44),

Accesses*/

#endif // STRUCTS_COLLISION_DATA_H
