//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIDelayedActionCommandCache, NSArray, SAUIDelayedActionCommand;

@protocol AFUIDelayedActionCommandCacheDelegate <NSObject>
- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didInvalidateDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didPerformDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)performGenericAceCommands:(NSArray *)arg1 forCommandCache:(AFUIDelayedActionCommandCache *)arg2;
@end

