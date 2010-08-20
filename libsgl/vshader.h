#ifndef _vshaderVshader_h_
#define _vshaderVshader_h_


// Header generated from binary by WriteAsBinHeader()..
static const int vshaderVshaderLength = 122;
static const unsigned int vshaderVshader[vshaderVshaderLength]={
	// Vertex shader magic
	0x20205356,
	// Vertex shader version
	0xFFFF0008,
	// Header length
	0x00000048,
	// FIMG version
	0x01020000,
	// Instructions size
	0x0000000A,
	// Const Float size
	0x00000010,
	// Const Int size
	0x00000000,
	// Const Bool size
	0x00000000,
	// DCL base type sizes
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	// DCL array type sizes
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	// DCL string table size
	0x00000000,
	// Start address
	0x00000000,
	// Instructions
	0x00000000,	0x0200E400,	0x048820E4,	0x00000000,
	0x00000000,	0x0201E400,	0x049020E4,	0x00000000,
	0x00000000,	0x0202E400,	0x04A020E4,	0x00000000,
	0x00000000,	0x0203E400,	0x04C020E4,	0x00000000,
	0x00000000,	0x0204E401,	0x048800E4,	0x00000000,
	0x00000000,	0x0205E401,	0x049000E4,	0x00000000,
	0x00000000,	0x0206E401,	0x04A000E4,	0x00000000,
	0x00000000,	0x0207E401,	0x04C000E4,	0x00000000,
	0x00000000,	0x00010000,	0x00F801E4,	0x00000000,
	0x00000000,	0x00000000,	0x1E000000,	0x00000000,
	// Const floats
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	0x00000000,	0x00000000,	0x00000000,	0x00000000,
	// Const ints
	// Const bools
	// DCL Table
};

//checksum generated by simpleCheckSum()
static const unsigned int vshaderVshaderCheckSum = 94;

static const char* vshaderVshaderText = 
	"# Vertex shader code for fixed pipeline emulation\n"
	"# FIMG-3DSE v.1.5\n"
	"# Copyright 2010 Tomasz Figa <tomasz.figa@gmail.com>\n"
	"\n"
	"# Vertex shader version\n"
	"vs_3_0\n"
	"\n"
	"# FIMG version >= 1.2\n"
	"fimg_version    0x01020000\n"
	"\n"
	"# Model-view matrix\n"
	"def c0, 0.0, 0.0, 0.0, 0.0\n"
	"def c1, 0.0, 0.0, 0.0, 0.0\n"
	"def c2, 0.0, 0.0, 0.0, 0.0\n"
	"def c3, 0.0, 0.0, 0.0, 0.0\n"
	"\n"
	"# Projection matrix\n"
	"def c4, 0.0, 0.0, 0.0, 0.0\n"
	"def c5, 0.0, 0.0, 0.0, 0.0\n"
	"def c6, 0.0, 0.0, 0.0, 0.0\n"
	"def c7, 0.0, 0.0, 0.0, 0.0\n"
	"\n"
	"# Texture 0 matrix\n"
	"def c8, 0.0, 0.0, 0.0, 0.0\n"
	"def c9, 0.0, 0.0, 0.0, 0.0\n"
	"def c10, 0.0, 0.0, 0.0, 0.0\n"
	"def c11, 0.0, 0.0, 0.0, 0.0\n"
	"\n"
	"# Texture 1 matrix\n"
	"def c12, 0.0, 0.0, 0.0, 0.0\n"
	"def c13, 0.0, 0.0, 0.0, 0.0\n"
	"def c14, 0.0, 0.0, 0.0, 0.0\n"
	"def c15, 0.0, 0.0, 0.0, 0.0\n"
	"\n"
	"# Shader code\n"
	"label start\n"
	"# Transform position by model-view matrix\n"
	"dp4 r0.x, c0, v0\n"
	"dp4 r0.y, c1, v0\n"
	"dp4 r0.z, c2, v0\n"
	"dp4 r0.w, c3, v0\n"
	"# Transform position by projection matrix\n"
	"dp4 o0.x, c4, r0\n"
	"dp4 o0.y, c5, r0\n"
	"dp4 o0.z, c6, r0\n"
	"dp4 o0.w, c7, r0\n"
	"# Pass vertex color\n"
	"mov o1, v1\n"
	"# Return\n"
	"ret\n"
	"# End of shader code\n"
	"";

#ifdef GL_HELPERS_INCLUDED
//glHelpers.h must be included BEFORE any of the shader header files. Also make sure you have the latest version of glHelpers.h
static ghShader vshaderVshaderShader(vshaderVshaderText, vshaderVshader, vshaderVshaderLength, vshaderVshaderCheckSum);


#endif


#endif //_vshaderVshader_h_
