//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet;

@interface PXUpdater : NSObject
{
    SEL *_orderedUpdateSelectors;
    unsigned long long _orderedUpdateSelectorsCapacity;
    unsigned long long _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    _Bool _isPerformingUpdates;
    _Bool _updatePassScheduled;
    _Bool _extraChecksEnabled;
    id _target;
    SEL _needsUpdateSelector;
}

@property(nonatomic) _Bool extraChecksEnabled; // @synthesize extraChecksEnabled=_extraChecksEnabled;
@property(nonatomic, getter=isUpdatePassScheduled) _Bool updatePassScheduled; // @synthesize updatePassScheduled=_updatePassScheduled;
@property(nonatomic) SEL needsUpdateSelector; // @synthesize needsUpdateSelector=_needsUpdateSelector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)_scheduleUpdatePassIfNeeded;
- (void)setNeedsUpdateOf:(SEL)arg1;
- (void)addUpdateSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

