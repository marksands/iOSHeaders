//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDLogEvent, HMDLogEventDispatcher;

@protocol HMDLogEventObserver <NSObject>
- (void)dispatcher:(HMDLogEventDispatcher *)arg1 didReceiveEvent:(HMDLogEvent *)arg2;
@end

