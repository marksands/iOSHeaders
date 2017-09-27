//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class _CFXNotificationRegistrationBase;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Block_byref {
    void *_field1;
    struct Block_byref *_field2;
    int _field3;
    unsigned int _field4;
};

struct NSMethodFrameArgInfo {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7;
    char _field8;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned char _field9;
    char _field10[0];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct edge {
    unsigned long long _field1;
    unsigned long long _field2[2];
    unsigned long long _field3;
};

struct os_lock_handoff_s {
    struct _os_lock_type_handoff_s *osl_type;
    unsigned long long _osl_handoff_opaque[1];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vertex {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long state;
    id *itemsPtr;
    unsigned long long *mutationsPtr;
    unsigned long long extra[5];
} CDStruct_58648341;

typedef struct {
    id *_field1;
    long long _field2;
    unsigned long long _field3;
    _Bool _field4;
} CDStruct_78c06135;

typedef struct {
    long long _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
} CDStruct_90be15af;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_52991635;

typedef struct {
    CDStruct_78c06135 _field1;
    CDStruct_78c06135 _field2;
} CDStruct_3de10e06;

typedef struct {
    union {
        struct __CFNull *empty;
        _CFXNotificationRegistrationBase *child;
        struct __CFDictionary *children;
    } elements;
    void *singleChildKey;
    struct *callbacks;
} CDStruct_a86bd46d;

typedef struct {
    id *objs;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used:26;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_af6d7307;

typedef struct {
    id *buffer;
    union {
        struct {
            unsigned long long mutations;
        } ;
        struct {
            unsigned int muts;
            unsigned int used:25;
            unsigned int kvo:1;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_2af495fa;

typedef struct {
    id *list;
    unsigned int offset;
    unsigned int size;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used;
        } ;
    } state;
} CDStruct_a6934631;

