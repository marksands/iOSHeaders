//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKEventStore.h>

@interface EKEventStore (Suggestions)
+ (id)newDefaultStore;
+ (id)defaultStore;
- (double)eventsPerWeekAroundDate:(id)arg1;
- (void)bumpTimeToLiveForZeroKeywordNLEventOnInteraction:(id)arg1;
- (id)fetchEKEventsForPseudoNLEvent:(id)arg1 entity:(id)arg2;
- (id)fetchEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1;
- (id)eventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;
- (id)confirmedEKEventForSGEvent:(id)arg1;
@end

