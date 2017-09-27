//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding>
{
    NSArray *_resetReasons;
}

+ (_Bool)shouldIgnoreDefaultsCPLKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)discardTentativeResetReason:(id)arg1;
+ (id)registerTentativeResetReasonIfCrashing:(id)arg1;
+ (id)currentReasonDescriptions;
+ (void)discardTracker:(id)arg1;
+ (id)currentTracker;
+ (void)registerLikelyResetReason:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)registerLikelyResetReason:(id)arg1;
+ (void)_registerReasonLocked:(id)arg1;
+ (void)_storeReasonsLocked;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSArray *resetReasons; // @synthesize resetReasons=_resetReasons;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasReasons;
@property(readonly, nonatomic) NSDate *likelyResetDate;
- (id)likelyResetReasonWithImmediateReason:(id)arg1;
@property(readonly, nonatomic) NSDate *earliestReasonDate;
- (id)initWithResetReasons:(id)arg1;

@end

