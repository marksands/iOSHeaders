//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject
{
    _Bool _registered;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (_Bool)disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

