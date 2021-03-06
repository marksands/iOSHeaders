//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTEphemeralFilter : NSObject
{
    unsigned long long mFilterIndex;
    unsigned char mColumnIndex;
    NSArray *mRules;
}

+ (id)filterWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;
@property(readonly, nonatomic) unsigned char columnIndex; // @synthesize columnIndex=mColumnIndex;
@property(readonly, nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=mFilterIndex;
- (id)description;
- (void)enumerateRulesUsingBlock:(CDUnknownBlockType)arg1;
- (id)filterByClearingRules;
- (id)filterByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)filterByAddingRule:(id)arg1;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ruleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long ruleCount;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;

@end

