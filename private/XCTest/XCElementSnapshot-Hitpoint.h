//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCElementSnapshot.h"

@interface XCElementSnapshot (Hitpoint)
- (id)hitPointForScrolling:(id *)arg1;
- (id)hitPoint:(id *)arg1;
- (id)hostingAndOrientationTransformedRect:(struct CGRect)arg1 error:(id *)arg2;
- (id)_transformRectWithRequest:(id)arg1 error:(id *)arg2;
- (id)hostingAndOrientationTransformedPoint:(struct CGPoint)arg1 error:(id *)arg2;
- (id)_transformPointWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_canTransformPoint:(struct CGPoint)arg1;
- (id)_transformParametersOrError:(id *)arg1;
- (id)_transformParametersFromDictionary:(id)arg1 error:(id *)arg2;
- (id)_hitPointTransformationRequestOrError:(id *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_snapshotForAccessibilityElement:(id)arg1 error:(id *)arg2;
@end

