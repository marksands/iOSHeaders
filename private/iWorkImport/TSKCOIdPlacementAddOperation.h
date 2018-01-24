//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

#import "TSKCOObjectCountConstraint.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementAddOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>
{
    int _objectCount;
    int _objectCounterSpace;
}

@property(readonly, nonatomic) int objectCounterSpace; // @synthesize objectCounterSpace=_objectCounterSpace;
@property(readonly, nonatomic) int objectCount; // @synthesize objectCount=_objectCount;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (id)toString;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformRemoveOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformAddOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)p_transformObjectCount:(id)arg1;
- (id)operationWithNewObjectCount:(int)arg1;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(_Bool)arg3;
- (id)operationWithNewNoop:(_Bool)arg1;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;
- (id)initWithIdAddress:(id)arg1 toIndex:(int)arg2;
- (id)initWithIdAddress:(id)arg1 toIndex:(int)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5 objectCount:(int)arg6 objectCounterSpace:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isNoop;
@property(readonly) Class superclass;

@end

