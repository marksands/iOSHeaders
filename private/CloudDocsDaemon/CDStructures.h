//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BRCDirectoryItem {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    unsigned int _field11;
    id _field12;
    unsigned long long _field13;
    id _field14;
    _Bool _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct NSObject {
    Class _field1;
};

struct PQLResultSet {
    Class _field1;
};

struct RootItemObject {
    unsigned char _field1;
    union {
        unsigned int _field1;
        unsigned int _field2;
    } _field2;
};

struct _BRCFrameworkOperation {
    Class _field1;
    id _field2;
    int _field3;
    int _field4;
    id _field5;
    unsigned char _field6[16];
};

struct _BRCOperation {
    Class _field1;
    id _field2;
    int _field3;
    int _field4;
    id _field5;
    unsigned char _field6[16];
};

struct _UUIDItemObject_OLD {
    unsigned char _field1;
    unsigned int _field2;
    unsigned char _field3[16];
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

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct backup_detector {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct brc_job_update {
    int _field1;
    long long _field2;
};

struct brc_mutex {
    struct _opaque_pthread_mutex_t pthread;
};

struct fsid {
    int val[2];
};

struct statfs {
    unsigned int f_bsize;
    int f_iosize;
    unsigned long long f_blocks;
    unsigned long long f_bfree;
    unsigned long long f_bavail;
    unsigned long long f_files;
    unsigned long long f_ffree;
    struct fsid f_fsid;
    unsigned int f_owner;
    unsigned int f_type;
    unsigned int f_flags;
    unsigned int f_fssubtype;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    unsigned int f_reserved[8];
};

struct throttle_stamps {
    unsigned int _field1;
    int _field2;
    long long _field3;
    long long _field4;
    long long _field5;
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    unsigned long long _field5;
} CDStruct_177058d5;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

