//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMapTable, NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface MKTransitItemController : NSObject
{
    NSMutableDictionary *_mapItemLookups;
    NSMutableDictionary *_lineItemLookups;
    NSMapTable *_containers;
    NSTimer *_updateTimer;
    NSDate *_referenceDate;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (_Bool)updateTransitLineItemIfNeeded:(id)arg1 traits:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)updateTransitMapItemIfNeeded:(id)arg1 updateForIncidents:(_Bool)arg2 traits:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeDynamicTransitUIContainer:(id)arg1;
- (void)addDynamicTransitUIContainer:(id)arg1;
- (void)_scheduleReferenceDateUpdate;
- (void)_updateReferenceDate;
- (void)_timerFired;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (_Bool)_needsUpdateReferenceDate;

@end

