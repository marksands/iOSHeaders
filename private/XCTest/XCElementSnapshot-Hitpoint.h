//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTAutomationSupport/XCElementSnapshot.h>

@interface XCElementSnapshot (Hitpoint)
@property(readonly) struct CGPoint hitPointForScrolling;
@property(readonly) struct CGPoint hitPoint;
- (struct CGPoint)hostingAndOrientationTransformedPoint:(struct CGPoint)arg1;
- (struct CGPoint)_transformPoint:(struct CGPoint)arg1 windowContextID:(id)arg2 windowDisplayID:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1;
@end

