#define GWORLD = 0xEF104C0
#define FNAME = 0xEF8B000
#define RESULT_DA = 0xEED8124
#define GoObject = 0xED7A520

DECRYPT ANSI-
uintptr_t FNameOffset = 0xEEFD140;
uintptr_t value = 0xEED8124;

char*v2; // rdi
  int v4; // ebx
  __int64 result; // rax
  int v6; // er8
  __int16 v7; // dx

  v2 = Buffer;
  v4 = Lenght;
  result = read<unsigned int>(module + value) >> 5;
  v6 = 0;
  if ( v4 )
  {
    do
    {
      v7 = result ^ (*v2 << 8);
      result = (unsigned int)(result + 8 * v6++);
      *v2 = HIBYTE(*v2) | v7 & 0xFF00;
      ++v2;
    }
    while ( v6 < v4 );
  }


Gworld : 0xEF104C0
FName : 0xEF0D0E0
LocalPlayerArray : 0x38
PlayerController : 0x30
GameInstance : 0x1B8
AcknowledgedPawn : 0x330
RootComponent : 0x190
RelativeLocation : 0x128
TeamIndex : 0x10B0
CurrentWeapon : 0x8F8
PlayerState : 0x2A8
Mesh : 0x310
WeaponData : 0x3F8
AmmoCount : 0xB8C
DisplayName : 0x90
bADSWhileNotOnGround : 0x4E16
Levels : 0x170
PlayerCameraManager : 0x340
LastFireTime : 0xAD8
LastFireTimeVerified : 0xADC
CurrentVehicle : 0x2428
ReviveFromDBNOTime : 0x44C0
bIsDBNO : 0x832
Bones Array : 0x5F8
Bones cache : 0x608

Credit to efk
