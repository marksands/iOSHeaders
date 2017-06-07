//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BKSTerminationAssertion, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationTerminationAssertion : NSObject
{
    BKSTerminationAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleID;
    NSString *_reason;
    long long _assertionState;
}

+ (id)_queue;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long assertionState;
@property(readonly, copy, nonatomic) NSString *reason;
@property(readonly, copy, nonatomic) NSString *bundleID;

@end

