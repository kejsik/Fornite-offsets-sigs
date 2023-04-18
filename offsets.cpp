#define GWorld 0x1078a7d8
#define FNamePool 0x10800400
#define GetNameById 0x557c4e0
#define DecryptAnsi 0x5f43649

#define ProjectWorldLocationToScreen 0x7ebfa48
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
    DWORD GetControlRotation = 0x740; //vtable
    DWORD SetControlRotation = 0x748; //vtable
};
namespace PlayerCameraManagerOffsets
{
    DWORD GetCameraCachePOV = 0x730; //vtable
    DWORD GetLastFrameCameraCachePOV = 0x738; //vtable
};
namespace FortPawnOffsets
{
    DWORD CurrentVehicle = 0x2428;
    DWORD CurrentWeapon = 0x8f8;
    DWORD ReviveFromDBNOTime = 0x4480;
};
namespace PlayerStateOffsets
{
    DWORD TeamIndex = 0x10b0; //Can be Wrong
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x5f0;
};

Creds to zetolac
