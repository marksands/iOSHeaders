//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class CLKComplicationTimelineEntry, NSDate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation
{
    unsigned long long _directions;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _privacyBehavior;
    unsigned long long _timelineAnimationBehavior;
    CLKComplicationTimelineEntry *_currentEntry;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_invokeHandler;
- (void)_getCurrentEntry;
- (void)_getTimelineAnimationBehavior;
- (void)_getPrivacyBehavior;
- (void)_getEndDate;
- (void)_getStartDate;
- (void)_getTimeTravelDirections;
- (void)_cancel;
- (void)_start;

@end

