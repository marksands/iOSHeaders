//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class XCUIElement;

@interface XCUICoordinate : NSObject <NSCopying>
{
    XCUIElement *_element;
    XCUICoordinate *_coordinate;
    struct CGVector _normalizedOffset;
    struct CGVector _pointsOffset;
}

@property(readonly) struct CGVector pointsOffset; // @synthesize pointsOffset=_pointsOffset;
@property(readonly) struct CGVector normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
@property(readonly) XCUICoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property(readonly) XCUIElement *element; // @synthesize element=_element;
@property(readonly) struct CGPoint screenPoint;
- (struct CGPoint)_untransformedScreenPoint;
@property(readonly) XCUIElement *referencedElement;
- (id)coordinateWithOffset:(struct CGVector)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(id)arg1 pointsOffset:(struct CGVector)arg2;
- (id)initWithElement:(id)arg1 normalizedOffset:(struct CGVector)arg2;
- (id)init;
- (void)dealloc;
- (void)pressForDuration:(double)arg1 thenDragToCoordinate:(id)arg2;
- (void)pressForDuration:(double)arg1;
- (void)doubleTap;
- (void)tap;

@end
