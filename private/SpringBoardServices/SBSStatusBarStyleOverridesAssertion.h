//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBSStatusBarStyleOverridesAssertionData;

@interface SBSStatusBarStyleOverridesAssertion : NSObject
{
    SBSStatusBarStyleOverridesAssertionData *_assertionData;
    CDUnknownBlockType _invalidationHandler;
}

+ (id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4;
+ (id)backgroundLocationAssertionForPID:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) SBSStatusBarStyleOverridesAssertionData *assertionData; // @synthesize assertionData=_assertionData;
- (void).cxx_destruct;
- (void)invalidate;
- (void)acquireWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)acquireWithHandler:(CDUnknownBlockType)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(copy, nonatomic) NSString *statusString;
@property(readonly, nonatomic) _Bool showsWhenForeground;
@property(readonly, nonatomic, getter=isExclusive) _Bool exclusive;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) int statusBarStyleOverrides;
- (void)dealloc;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(_Bool)arg3 showsWhenForeground:(_Bool)arg4;

@end

