//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct NSArray {
    Class _field1;
};

struct NSObject {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct PXAssetBadgeInfo {
    unsigned long long badges;
    double duration;
    long long count;
};

struct PXContextualNotificationVisualState {
    _Bool onscreen;
    struct CGRect containingFrame;
    double verticalOffset;
    double alpha;
};

struct PXDisplayVelocity {
    double x;
    double y;
    double scale;
    double rotation;
};

struct PXFaceTileImageParams {
    struct CGSize targetSize;
    unsigned long long cropFactor;
    unsigned long long style;
    _Bool cropBounded;
    _Bool acceptsVeryLowQuality;
    _Bool wantsNonVisibleFaceCompletion;
};

struct PXGadgetUpdateFlags {
    _Bool collectionNeedsUpdate;
    _Bool currentGadgetSpecNeedsUpdate;
    _Bool gadgetLoadingNeedsUpdate;
    _Bool loadRemaingGadgetsAfterViewAppeared;
};

struct PXMagazineOrigin {
    long long _field1;
    long long _field2;
};

struct PXMagazineRect {
    struct PXMagazineOrigin _field1;
    struct PXMagazineSize _field2;
};

struct PXMagazineSize {
    long long _field1;
    long long _field2;
};

struct PXMediaProviderThumbnailDataFormat {
    unsigned long long _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct PXMediaProviderThumbnailDataSpec {
    struct PXMediaProviderThumbnailDataFormat _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct PXMemoryFontsSpecIdentifier {
    long long _field1;
    long long _field2;
    long long _field3;
    double _field4;
};

struct PXProtectedTileState {
    _Bool _field1;
    struct PXTileIdentifier _field2;
    struct PXTileIdentifier _field3;
    struct PXTileIdentifier _field4;
    unsigned long long _field5;
    _Bool _field6;
    struct PXTileGeometry _field7;
    struct PXTileGeometry _field8;
    _Bool _field9;
    _Bool _field10;
    void *_field11;
    void *_field12;
    void *_field13;
    unsigned long long _field14;
};

struct PXSimpleIndexPath {
    unsigned long long dataSourceIdentifier;
    long long section;
    long long item;
    long long subitem;
};

struct PXTileGeometry {
    struct CGRect frame;
    struct CGPoint center;
    struct CGSize size;
    struct CGAffineTransform transform;
    double alpha;
    double zPosition;
    _Bool hidden;
    struct CGSize contentSize;
    struct CGRect contentsRect;
    void *coordinateSpaceIdentifier;
};

struct PXTileIdentifier {
    unsigned long long length;
    unsigned long long index[10];
};

struct PXTileInfo {
    long long index;
    struct CGSize imageSize;
    struct CGSize minimumSize;
    _Bool hasCaption;
    _Bool hasLikes;
    long long commentCount;
    _Bool isBatchStart;
};

struct PXTileState {
    _Bool _field1;
    struct PXTileIdentifier _field2;
    struct PXTileIdentifier _field3;
    struct PXTileIdentifier _field4;
    unsigned long long _field5;
    _Bool _field6;
    struct PXTileGeometry _field7;
    struct PXTileGeometry _field8;
    _Bool _field9;
    _Bool _field10;
    void *_field11;
    void *_field12;
    void *_field13;
    unsigned long long _field14;
};

struct PXTwoTuple {
    Class _field1;
};

struct PXViewSpecDescriptor {
    long long _field1;
    unsigned long long _field2;
    struct CGSize _field3;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIFont {
    Class _field1;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _LayoutContext {
    struct UIEdgeInsets contentInsets;
    struct CGSize itemSize;
    struct CGSize interitemSpacing;
    struct CGSize size;
    unsigned long long numberOfColumns;
    unsigned long long numberOfRows;
    long long layoutAxis;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PXLRUMemoryCacheList {
    unsigned long long _field1;
    struct _PXLRUMemoryCacheListElement *_field2;
    struct _PXLRUMemoryCacheListElement *_field3;
};

struct _PXLRUMemoryCacheListElement {
    id _field1;
    struct _PXLRUMemoryCacheListElement *_field2;
    struct _PXLRUMemoryCacheListElement *_field3;
};

struct _PXLayoutGeometry {
    long long _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    float _field5;
    long long _field6;
    struct CGRect _field7;
    struct CGSize _field8;
};

struct _PXValueAnimationSpec {
    long long type;
    double epsilon;
    double stiffness;
    double dampingRatio;
    double initialVelocity;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*> *__next_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long>>> {
    struct __hash_table<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::hash<PXTileIdentifier>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<PXTileIdentifier, std::__1::__hash_value_type<PXTileIdentifier, unsigned long>, std::__1::equal_to<PXTileIdentifier>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long needsUpdate;
    unsigned long long updated;
    _Bool isPerformingUpdate;
} CDStruct_d97c9657;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double minValue;
    double maxValue;
    double totalValue;
    unsigned long long count;
} CDStruct_4bbd3430;

typedef struct {
    double vertical;
    double horizontal;
} CDStruct_f0658562;

typedef struct {
    long long _field1;
    float _field2;
} CDStruct_fd7332cd;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    _Bool _field1;
    struct CGPoint _field2;
} CDStruct_7898798c;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    CDStruct_f0658562 _field2;
} CDStruct_88bcc19c;

// Ambiguous groups
typedef struct {
    _Bool respondsToProgressDidChange;
    _Bool respondsToStatusDidChange;
} CDStruct_79eed083;

typedef struct {
    _Bool button;
} CDStruct_6d279c03;

typedef struct {
    _Bool imageView;
} CDStruct_637f5cce;

typedef struct {
    _Bool selectedIndexPaths;
} CDStruct_0794f076;

