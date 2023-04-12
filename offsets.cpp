#define GWORLD = 0x1078A7D8
#define FNAME = 0x10800400
#define RESULT_DA = 0x10757720
#define GObject = 0x105F09D0

-DECRYPT ANSI-
uintptr_t FNameOffset = 0x10800400;
 int Lenght = Entry >> 6;
    char buffer[256];
    uintptr_t value = 0x10757720;
    if ((uint32_t)Lenght)
    {
        for (int x = 0; x < Lenght; ++x)
        {
            buffer[x] = read<char>(NPC + 4 + x);
        }
 

        char* v2; // rdi
        unsigned int v4; // ebx
        __int64 result; // rax
        unsigned int v6; // edx
        unsigned int v7; // er8

        v2 = buffer;
     
        v4 = Lenght;
        result = read<__int64>(module + value);
        v6 = ((_DWORD)result << 8) | ((unsigned int)result >> 8);
        v7 = (unsigned int)result >> 2;
        if (v4)
        {
            result = v4;
            do
            {
                v6 += v7;
                *v2++ ^= v6;
                --result;
            } while (result);


Gworld : 0x1078A7D8
FName : 0x10800400
GameInstance : 0x1B8
AcknowledgedPawn : 0x330
RootComponent : 0x190
RelativeLocation : 0x128
TeamIndex : 0x10B0
CurrentWeapon : 0x8F8
PlayerState : 0x2A8
Mesh : 0x310
WeaponData : 0x410
AmmoCount : 0xBA4
DisplayName : 0x90
bADSWhileNotOnGround : 0x4DD6
Levels : 0x170
PlayerCameraManager : 0x340
LastFireTime : 0xAF0
LastFireTimeVerified : 0xAF4
CurrentVehicle : 0x2428
ReviveFromDBNOTime : 0x4480
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
