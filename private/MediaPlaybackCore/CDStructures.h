//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct MPCModelStorePlaybackItemsRequestAccumulatorResult {
    _Bool _field1;
    _Bool _field2;
};

struct NSMapTable {
    Class _field1;
};

struct _MPCModelStorePlaybackItemEligibility {
    _Bool _field1;
    long long _field2;
};

struct _MSVSignedRange {
    long long location;
    long long length;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *>>> {
    struct __tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
} CDStruct_fce57115;

typedef struct {
    long long reverseCount;
    long long forwardCount;
} CDStruct_339ad95e;

// Ambiguous groups
typedef struct {
    unsigned int representativeItemCloudID:1;
    unsigned int storeAdamID:1;
} CDStruct_c223d907;

