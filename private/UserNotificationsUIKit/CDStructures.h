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

struct NSMutableDictionary {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIView {
    Class _field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int significantUserInteraction:1;
    unsigned int didScroll:1;
    unsigned int didEndScrolling:1;
    unsigned int willBeginInteractionWithNotificationVC:1;
    unsigned int didEndInteractionWithNotificationVC:1;
    unsigned int scrollViewDidScroll:1;
    unsigned int scrollViewDidZoom:1;
    unsigned int scrollViewWillBeginDragging:1;
    unsigned int scrollViewWillEndDragging:1;
    unsigned int scrollViewDidEndDragging:1;
    unsigned int scrollViewWillBeginDecelerating:1;
    unsigned int scrollViewDidEndDecelerating:1;
    unsigned int scrollViewDidEndScrollingAnimation:1;
    unsigned int scrollViewWillBeginZooming:1;
    unsigned int scrollViewDidEndZooming:1;
    unsigned int scrollViewShouldScrollToTop:1;
    unsigned int scrollViewDidScrollToTop:1;
} CDStruct_27a46a9e;

