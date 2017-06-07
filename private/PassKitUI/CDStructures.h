//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
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

struct PKBarcodeQuietZone {
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

struct UIOffset {
    double _field1;
    double _field2;
};

struct UIView {
    Class _field1;
};

struct UIViewController {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long numberOfSections;
    unsigned long long *indexToSection;
    unsigned long long *sectionToIndex;
} CDStruct_826e8cf1;

typedef struct {
    double visibility;
    double visibilityAnimationTarget;
    unsigned int animationCounter;
} CDStruct_6c46ada8;

typedef struct {
    double cornerRadius;
    long long shape;
    long long style;
    long long highlightEffect;
    long long disabledEffect;
} CDStruct_e6a35582;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    double _field3;
} CDStruct_bc00259c;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    double _field3;
} CDStruct_86e25f83;

typedef struct {
    struct CGSize boundingSize;
    struct {
        struct CGRect frame;
        _Bool widthConstrained;
    } textMetrics[4];
} CDStruct_c7197326;

