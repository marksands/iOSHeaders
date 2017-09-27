//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CLSRoutineServiceStatisticsStruct {
    _Bool routineAvailable;
    unsigned long long numberOfLocationsOfInterest;
    unsigned long long numberOfVisits;
    unsigned long long numberOfTimeMatches;
    unsigned long long numberOfCloseByLocationMatches;
    unsigned long long numberOfRemoteLocationMatches;
    unsigned long long numberOfMatchRequests;
    double pinningVisitsRatio;
};

struct _CLSLRUMemoryCacheList {
    unsigned long long _field1;
    struct _CLSLRUMemoryCacheListElement *_field2;
    struct _CLSLRUMemoryCacheListElement *_field3;
};

struct _CLSLRUMemoryCacheListElement {
    id _field1;
    struct _CLSLRUMemoryCacheListElement *_field2;
    struct _CLSLRUMemoryCacheListElement *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long numberOfLocations;
    long long numberOfResolvedLocations;
    long long numberOfUnneededLocations;
} CDStruct_dd9df0da;

