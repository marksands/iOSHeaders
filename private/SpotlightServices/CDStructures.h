//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __CFArray;

struct __CFDictionary;

struct _resultset_computation_ctx {
    float *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8[44];
};

struct fan_out_value {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct prs_feature_population_ctx_t {
    struct __CFArray *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    unsigned char _field4;
    float _field5[28];
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    long long _field13;
    unsigned long long _field14;
};

struct prs_model_resource_header {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4[0];
};

struct ranking_index_score_t {
    unsigned long long lsb;
    unsigned long long msb;
};

#pragma mark Typedef'd Structures

typedef struct {
    char *containerBytes;
    struct {
        unsigned int embeddedReference;
        unsigned char type;
    } reference;
} CDStruct_b7fac349;

#pragma mark Typedef'd Unions

typedef union {
    struct __CFDictionary *_field1;
    int _field2[5];
} CDUnion_fc2819da;

