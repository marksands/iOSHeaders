//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIFocusUpdateContext, _UIFocusGuideRegion, _UIFocusMovementRequest;

@protocol _UIFocusGuideRegionDelegate <NSObject>

@optional
- (void)focusGuideRegion:(_UIFocusGuideRegion *)arg1 willParticipateAsDestinationRegionInFocusUpdate:(UIFocusUpdateContext *)arg2;
- (NSArray *)focusGuideRegion:(_UIFocusGuideRegion *)arg1 preferredFocusEnvironmentsForMovementRequest:(_UIFocusMovementRequest *)arg2;
@end
