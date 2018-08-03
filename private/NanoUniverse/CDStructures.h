//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CLKUIQuadSize {
    int _field1;
    int _field2;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct NUProgram {
    unsigned int program;
    int uniforms[12];
};

struct NURendererResources {
    struct NUProgram programs[3];
    unsigned int vertexBuffer;
    unsigned int indexBuffer;
    unsigned int atlasTexture;
    unsigned long long loadedTexturesSet;
    unsigned int priTextures[23];
    unsigned int priTarget[23];
    unsigned int secTextures[23];
    unsigned int secTarget[23];
    unsigned int dummyCubeTexture;
    unsigned int dummy2dTexture;
};

struct NUViewport {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct _NUGeometryRange {
    int start;
    int count;
};

struct _NUVertex {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    short _field5;
    short _field6;
};

