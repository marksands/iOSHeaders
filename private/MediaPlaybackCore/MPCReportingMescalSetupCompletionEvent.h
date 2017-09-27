//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPCReportingEvent.h"

@class NSError, NSString;

@interface MPCReportingMescalSetupCompletionEvent : NSObject <MPCReportingEvent>
{
    NSError *_error;
    double _setupDuration;
}

@property(nonatomic) double setupDuration; // @synthesize setupDuration=_setupDuration;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (unsigned long long)reportingEventType;
- (_Bool)isValidReportingEvent;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

