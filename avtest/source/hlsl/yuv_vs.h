#if 0
//
// Generated by 2.0.20353.0
//
//   fxc /Fh yuv_vs.h /Tvs_3_0 yuv.hlsl /EVSmain
//
// Shader type: vertex 

xvs_3_0
config AutoSerialize=false
config AutoResource=false
config VsMaxReg=1
config VsResource=1

dcl_index r0.x
dcl_texcoord o0.xy


    exec
    vfetch r1, r0.x, position
    vfetch r0.xy__, r0.x, texcoord
    alloc position
    exec
    mov oPos, r1
    alloc interpolators
    exece
    mov o0.xy, r0.xy

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xvs_VSmain[] =
{
    0x102a1101, 0x00000090, 0x00000060, 0x00000000, 0x00000024, 0x00000000, 
    0x00000058, 0x00000000, 0x00000000, 0x00000030, 0x0000001c, 0x00000023, 
    0xfffe0300, 0x00000000, 0x00000000, 0x00000000, 0x0000001c, 0x76735f33, 
    0x5f300032, 0x2e302e32, 0x30333533, 0x2e3000ab, 0x00000000, 0x00000060, 
    0x00010001, 0x00000000, 0x00000000, 0x00000821, 0x00000001, 0x00000002, 
    0x00000001, 0x00000290, 0x00100003, 0x00305004, 0x00003050, 0x00001006, 
    0x30052003, 0x00001200, 0xc2000000, 0x00001005, 0x00001200, 0xc4000000, 
    0x00001006, 0x00002200, 0x00000000, 0x05f81000, 0x00000688, 0x00000000, 
    0x05f80000, 0x00000fc8, 0x00000000, 0xc80f803e, 0x00000000, 0xe2010100, 
    0xc8038000, 0x00b0b000, 0xe2000000, 0x00000000, 0x00000000, 0x00000000
};
