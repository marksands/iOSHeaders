//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OpusFoundation/OFRescalableSegment-Protocol.h>

@class NSString;

@interface OFRescalableSegment : NSObject <OFRescalableSegment>
{
    double _defaultDuration;
    double _minimumDuration;
    double _maximumDuration;
    double _compressibility;
    double _expandability;
}

+ (id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;
+ (id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;
+ (id)nonRescalableSegmentWithDuration:(double)arg1;
@property double expandability; // @synthesize expandability=_expandability;
@property double compressibility; // @synthesize compressibility=_compressibility;
@property double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property double minimumDuration; // @synthesize minimumDuration=_minimumDuration;
@property double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
