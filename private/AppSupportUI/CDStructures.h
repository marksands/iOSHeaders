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
    double width;
    double height;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NUIBoxArrangement {
    id container;
    _Bool baselineRelative;
    long long horzDist;
    long long vertDist;
    vector_0b89710d cells;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIBoxArrangementCell;

struct _NUIGridArrangement {
    id container;
    _Bool baselineRelative;
    long long horzDist;
    long long vertDist;
    vector_f7a18e83 cells;
    vector_29d414c0 columns;
    vector_29d414c0 rows;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct _NUIGridViewDimensionConfiguration;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct nui_size_cache {
    struct __tree<std::__1::__value_type<CGSize, CGSize>, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>, std::__1::allocator<std::__1::__value_type<CGSize, CGSize>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CGSize, CGSize>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::hash<UIView *>, std::__1::equal_to<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __hash_table<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<UIView *>, true>, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<UIView *>, true>, std::__1::allocator<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<UIView *>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<UIView *>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long, const std::__1::pair<UIView *, UIView *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, const std::__1::pair<UIView *, UIView *>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, std::__1::hash<unsigned long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *>>, std::__1::equal_to<unsigned long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__first_;
    } __end_cap_;
};

struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__first_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__first_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__first_;
    } __end_cap_;
};

struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
    struct _NUIGridViewDimensionConfiguration *__begin_;
    struct _NUIGridViewDimensionConfiguration *__end_;
    struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
        struct _NUIGridViewDimensionConfiguration *__first_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double leading;
    double trailing;
} CDStruct_a157df34;

// Template types
typedef struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell>> {
    struct _NUIBoxArrangementCell *__begin_;
    struct _NUIBoxArrangementCell *__end_;
    struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell>> {
        struct _NUIBoxArrangementCell *__first_;
    } __end_cap_;
} vector_0b89710d;

typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__first_;
    } __end_cap_;
} vector_f7a18e83;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__first_;
    } __end_cap_;
} vector_29d414c0;

