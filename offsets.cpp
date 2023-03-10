OFFSET (24.00)
#define GWORLD = 0xEF005E0
#define FNAME = 0xEF22B40
#define RESULT_DA = 0xEE27DC0

-DECRYPT ANSI-

uintptr_t FNameOffset = 0xEF22B40;
uintptr_t value = 0xEE27DC0;

         char* v2; // rdi
        unsigned int v4; // ebx
        __int64 result; // rax
        unsigned int v6; // edx
        unsigned int v7; // er8

        v2 = buffer;
        v4 = Lenght;
        result = read<DWORD>(module + value) >> 6;
        v6 = ((_DWORD)result << 8) | ((unsigned int)result >> 8);
        v7 = (unsigned int)result >> 4;
        if (v4)
        {
            result = v4;
            do
            {
                v6 += v7;
                *v2++ ^= v6;
                --result;
            } while (result);
        }

Gworld : 0xEF005E0
FName : 0xEF22B40
GameInstance : 0x1B8
LocalPlayerArray : 0x38
PlayerController : 0x30
AcknowledgedPawn : 0x330
RootComponent : 0x190
RelativeLocation : 0x128
TeamIndex : 0xwait
CurrentWeapon : 0xwait
PlayerState : 0x2B8
Mesh : 0xwait
ItemDefinition : 0x18
Tier : 0x73
DisplayName : 0x90
Bones Array : 0x5F8
Bones cache : 0x608
