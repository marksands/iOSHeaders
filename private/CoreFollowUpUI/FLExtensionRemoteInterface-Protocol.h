//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLFollowUpAction, FLFollowUpItem;

@protocol FLExtensionRemoteInterface <NSObject>
- (void)followUpPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
- (void)processFollowUpItem:(FLFollowUpItem *)arg1 selectedAction:(FLFollowUpAction *)arg2 completion:(void (^)(_Bool))arg3;
@end

