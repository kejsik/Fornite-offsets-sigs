 
define GWORLD = 0xEEDAB90
#define FNAME = 0xEEFD140
#define RESULT_DA = 0xEE011E0


-DECRYPT ANSI-
uintptr_t FNameOffset = 0xEEFD140;
uintptr_t value = 0xEE011E0;

 char *v2; // rdi
  int v4; // ebx
  __int16 result; // ax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx

  v2 = buffer;
  v4 = Lenght;
  result = read<unsigned int>(module + value);
  v6 = 0;
  v7 = 28;
  if ( v4 )
  {
    do
    {
      v8 = v6++;
      v9 = (v8 | 0xB000) + v7;
      result = v9 ^ ~*v2;
      v7 = v9 >> 2;
      *v2++ = result;
    }
    while ( v6 < v4 );
  }


Gworld : 0xEEDAB90
FName : 0xEEFD140
LocalPlayerArray : 0x38
PlayerController : 0x30
GameInstance : 0x1B8
AcknowledgedPawn : 0x330
RootComponent : 0x190

RelativeLocation : 0x128
TeamIndex : 0x10A0
CurrentWeapon : 0x8F8
PlayerState : 0x2A8
Mesh : 0x310
WeaponData : 0x3F8
AmmoCount : 0xB8C
DisplayName : 0x90
bADSWhileNotOnGround : 0x4DF6
Levels : 0x170
PlayerCameraManager : 0x340
LastFireTime : 0xAD8
LastFireTimeVerified : 0xADC
CurrentVehicle : 0x2428
ReviveFromDBNOTime : 0x44A0
bIsDBNO : 0x832
Bones Array : 0x5F8
Bones cache : 0x608

Credit to efk
