//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGColorSpace;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CIBitmapContextPrivate {
    void *_field1;
    long long _field2;
    struct CGRect _field3;
    int _field4;
};

struct CIBurstSupportVector {
    double _field1;
    double _field2[7];
};

struct CIKernelReflection {
    int _field1;
    int _field2;
    char *_field3;
    char *_field4;
    struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType>> _field5;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field6;
    id _field7;
    unsigned int _field8;
    int _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    _Bool _field12;
};

struct CIPredictionModelImageFeatures {
    NSString *name;
    long long width;
    long long height;
    unsigned int format;
};

struct CIRenderDestinationInternal {
    struct RenderDestination *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    struct CGColorSpace *_field5;
    unsigned long long _field6;
    _Bool _field7;
    _Bool _field8;
    int _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
};

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
};

struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
};

struct IPoint {
    long long _field1;
    long long _field2;
};

struct IRect {
    struct IPoint _field1;
    struct ISize _field2;
};

struct ISize {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct Rectangle {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct RenderDestination;

struct SharpnessGridElement_t {
    unsigned char _field1;
    unsigned char _field2;
    float _field3;
};

struct __SVMParameters {
    struct __SVMScaleOffset {
        float _field1;
        float _field2;
    } _field1[7];
    double _field2;
    double _field3;
    int _field4;
    int _field5;
    struct CIBurstSupportVector *_field6;
    struct CIBurstSupportVector *_field7;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct filterShape {
    struct CGRect _field1;
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vec2 {
    float _field1;
    float _field2;
};

struct vec3 {
    float _field1;
    float _field2;
    float _field3;
};

struct vec4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType>> {
        int *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool debug;
    char base[256];
    char face[4];
    char eye[2];
    char title[4];
    char passSpec[12];
    char line1[256];
    char line2[256];
    char line3[256];
} CDStruct_1c6f3adb;

typedef struct {
    _Bool _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6[3];
} CDStruct_31328b19;

typedef struct {
    _Bool _field1;
    int _field2;
    double _field3;
    int _field4;
    int _field5;
    double _field6;
    int _field7;
} CDStruct_0b15f989;

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
} CDStruct_935079c3;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    char *baseAddress;
    int width;
    int height;
    int rowSamples;
    int rowBytes;
    int size;
    int samplesPerPixel;
    int bytesPerSample;
    float resolution;
} CDStruct_c3faddef;

typedef struct {
    char *_field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_94ca5ecd;

typedef struct {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
} CDStruct_e5fcc3f9;

typedef struct {
    double i;
    double q;
} CDStruct_bfe67ca5;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_265c7ca9;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float a;
    float b;
    float c;
} CDStruct_12b04d25;

typedef struct {
    float _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
    int _field11;
} CDStruct_7a0e83b0;

typedef struct {
    int _field1;
    int _field2;
    _Bool _field3;
    _Bool _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
} CDStruct_3edab2bb;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool _field1;
    struct CGPoint _field2;
    CDStruct_12b04d25 _field3;
} CDStruct_7a4a8b82;

typedef struct {
    char _field1[256];
    char _field2[32];
    CDStruct_c3faddef _field3;
    int _field4;
    int _field5;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field6;
    struct CGColorSpace *_field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    float _field12;
} CDStruct_79f2618e;

typedef struct {
    int _field1;
    struct {
        float _field1;
        int _field2;
        int _field3;
        float _field4;
        float _field5;
        float _field6;
        int _field7;
        int _field8;
        float _field9;
    } _field2[4];
} CDStruct_08ff8b76;

typedef struct {
    int _field1;
    CDStruct_7a0e83b0 _field2[4];
} CDStruct_e6988dbd;

typedef struct {
    int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    _Bool _field6;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field7;
    struct CGPoint _field8;
    float _field9;
    float _field10;
} CDStruct_32eeb3fa;

typedef struct {
    int _field1;
    int _field2;
    CDStruct_183601bc *_field3;
} CDStruct_f7cf7ab1;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    CDStruct_12b04d25 _field5[100];
    CDStruct_12b04d25 _field6[100];
    CDStruct_12b04d25 _field7[100];
    CDStruct_12b04d25 _field8[100];
} CDStruct_5ff5faa0;

typedef struct {
    int origHitX;
    int origHitY;
    int snapHitX;
    int snapHitY;
    int bitmaskSeedX;
    int bitmaskSeedY;
    int bitmaskThreshold;
    int cornealReflectionSeedX;
    int cornealReflectionSeedY;
    int cornealReflectionThreshold;
    _Bool align;
    CDStruct_6ca1d5c6 mTemplate;
    CDStruct_6ca1d5c6 existingTemplate;
    int averageSkinMapY;
    int characterizeCase;
    int finalEyeCase;
    float IOD;
    struct {
        void *bitmapproc_context;
        CDUnknownFunctionPointerType bproc;
        int orientation;
        float SNR;
        _Bool N90;
        int redBitmaskArea;
        float imageCenterX;
        float imageCenterY;
        float halfDiagonalSize;
    } O;
    CDStruct_5973fb4f CR;
} CDStruct_1c31e7e7;

typedef struct {
    int _field1;
    struct CGPoint _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    float _field10;
    CDStruct_818bb265 _field11[32];
    float _field12;
    int _field13;
    _Bool _field14;
    struct CGPoint _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    int _field21;
    float _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct CGPoint _field27;
    struct CGPoint _field28;
    struct CGPoint _field29;
    struct CGPoint _field30;
    struct CGPoint _field31;
    struct CGPoint _field32;
    float _field33;
    int _field34;
    int _field35;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field36;
    int _field37;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field38;
    int _field39;
    int _field40;
    int _field41;
    int _field42;
    int _field43;
    float _field44;
    float _field45;
    int _field46;
    _Bool _field47;
    float _field48;
    float _field49;
    float _field50;
    float _field51;
    float _field52;
    float _field53;
    int _field54;
    int _field55;
    int _field56;
    int _field57;
    float _field58;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field59;
    float _field60;
    CDStruct_183601bc *_field61;
    float _field62;
} CDStruct_9d808415;

typedef struct {
    CDStruct_5973fb4f FR;
    struct CGPoint leftEye;
    struct CGPoint rightEye;
    float leftDistMatrix[4];
    float rightDistMatrix[4];
    CDStruct_5973fb4f LR;
    CDStruct_5973fb4f RR;
    float IOD;
    float IODp;
    float IOAngle;
    CDStruct_c3faddef channels[7];
    CDStruct_c3faddef M;
} CDStruct_99f3e179;

typedef struct {
    int _field1;
    _Bool _field2;
    CDStruct_183601bc *_field3;
    CDStruct_183601bc *_field4;
    int _field5;
    CDStruct_7a4a8b82 _field6;
    CDStruct_0b15f989 _field7;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field8;
    float _field9;
    float _field10;
    float _field11;
    int _field12;
    float _field13;
    CDStruct_818bb265 _field14;
    CDStruct_818bb265 _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    float _field20;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field21;
    CDStruct_265c7ca9 _field22;
    _Bool _field23;
    _Bool _field24;
    CDStruct_183601bc *_field25;
    CDStruct_183601bc *_field26;
    CDStruct_183601bc *_field27;
    _Bool _field28;
    CDStruct_183601bc *_field29;
    CDStruct_183601bc *_field30;
    CDStruct_183601bc *_field31;
    int _field32;
    CDStruct_7a0e83b0 _field33;
    CDStruct_7a4a8b82 _field34;
    CDStruct_32eeb3fa _field35;
    CDStruct_32eeb3fa _field36;
    int _field37;
    char _field38[4];
    char _field39[4];
    char _field40[12];
} CDStruct_a3f7b727;

typedef struct {
    int _field1;
    float _field2;
    float _field3;
    CDStruct_183601bc *_field4;
    int _field5;
    int _field6;
    int _field7;
    CDStruct_32eeb3fa _field8;
    _Bool _field9;
    CDStruct_32eeb3fa _field10;
    int _field11;
    int _field12;
} CDStruct_69e56647;

typedef struct {
    int tag;
    struct CGPoint pt2;
    int eyeCase;
    int forceCase;
    int npixels;
    int bignpixels;
    CDStruct_c3faddef fullNew;
    CDStruct_5973fb4f YR;
    CDStruct_6ca1d5c6 psTemplate;
    _Bool pupilShadeAlignment;
    CDStruct_6ca1d5c6 matchingTemplate;
    int faceIndex;
    _Bool left;
    float IOD;
    CDStruct_1c31e7e7 data;
    struct {
        struct CGPoint centroid;
        int area;
        float ovalness;
        float contrast;
        float mincontrast;
        int nborder;
        CDStruct_5973fb4f IR;
        float aspectRatio;
        _Bool touchingEdge;
        int localmax;
        int localmaxrow;
        int localmaxcol;
        int localfloor;
        float rgmean;
        float rgstd;
        float ymean;
        float ystd;
    } BI;
} CDStruct_8d997f87;

typedef struct {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
    id _field6;
} CDStruct_1b0b1413;

// Ambiguous groups
typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_a734b2e2;

typedef struct {
    int lo;
    int med;
    int hi;
    int average;
} CDStruct_6ca1d5c6;

typedef struct {
    int minrow;
    int maxrow;
    int mincol;
    int maxcol;
} CDStruct_5973fb4f;

