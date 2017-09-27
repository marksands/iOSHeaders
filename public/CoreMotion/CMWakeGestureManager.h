//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMWakeGestureManager : NSObject
{
    id <CMWakeGestureDelegate> _delegate;
}

+ (_Bool)isWakeGestureAvailable;
+ (id)sharedManager;
@property(nonatomic) id <CMWakeGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logAssert;
- (_Bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)stopWakeGestureUpdates;
- (void)startWakeGestureUpdates;

@end

