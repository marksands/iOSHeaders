//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

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

struct TVCellMetrics {
    struct CGSize cellSize;
    struct UIEdgeInsets cellPadding;
    struct UIEdgeInsets cellInset;
    struct UIEdgeInsets cellInsetAlt;
    struct UIEdgeInsets cellMargin;
};

struct TVCornerRadii {
    double topLeft;
    double topRight;
    double bottomLeft;
    double bottomRight;
};

struct TVRowMetrics {
    long long rowType;
    double rowHeight;
    CDStruct_13b0aa87 rowPadding;
    CDStruct_13b0aa87 rowInset;
    CDStruct_13b0aa87 rowInsetAlt;
    CDStruct_13b0aa87 rowMargin;
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

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    double top;
    double bottom;
} CDStruct_13b0aa87;

