#define GWORLD = 0xEF0F440
#define FNAME = 0xEF89F80
#define RESULT_DA = 17
#define GObject = 0xED79528

-DECRYPT ANSI-
uintptr_t FNameOffset = 0xEF89F80;
int value = 17;

char *v2; // rdi
  int v4; // ecx
  unsigned int v5; // eax
  __int64 v6; // rdx

  v2 = Buffer;
  v4 = value;
  v5 = Lenght;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      LOWORD(v5) = v4 + ~*v2;
      v4 += 7947;
      *v2++ = v5;
      --v6;
    }
    while ( v6


Gworld : 0xEF0F440
FName : 0xEF89F80
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

namespace WorldOffsets
{
    DWORD PersitentLevel = 0x30;
    DWORD GameInstance = 0x1b8;
};
namespace ActorOffsets
{
    DWORD RootComponent = 0x190;
    DWORD PlayerState = 0x2a8; //Can be Wrong
    DWORD Mesh = 0x310;
};
namespace PlayerControllerOffsets
{
    DWORD AcknowledgedPawn = 0x330;
    DWORD PlayerCameraManager = 0x340;
    DWORD LocalPlayerCachedLODDistanceFactor = 0x38c;
    DWORD GetControlRotation = 0x720; //vtable
    DWORD SetControlRotation = 0x728; //vtable
};
namespace PlayerCameraManagerOffsets
{
    DWORD GetCameraCachePOV = 0x710; //vtable
    DWORD GetLastFrameCameraCachePOV = 0x718; //vtable
};
namespace FortPawnOffsets
{
    DWORD CurrentVehicle = 0x2428;
    DWORD CurrentWeapon = 0x8f8;
    DWORD ReviveFromDBNOTime = 0x44c0;
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x5f0;
};

Credit to efk
