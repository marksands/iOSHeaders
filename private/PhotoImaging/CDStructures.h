//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1[4];
} CDStruct_145c54d4;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    CDStruct_145c54d4 _field1;
    CDStruct_145c54d4 _field2;
    double _field3;
} CDStruct_92960315;

typedef struct {
    struct {
        long long x;
        long long y;
    } origin;
    CDStruct_d58201db size;
} CDStruct_996ac03c;

// Ambiguous groups
typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    long long width;
    long long height;
} CDStruct_d58201db;

