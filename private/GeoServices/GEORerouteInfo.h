//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORerouteInfo : NSObject <NSSecureCoding>
{
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate *_time;
    double _distanceFromDestination;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double distanceFromDestination; // @synthesize distanceFromDestination=_distanceFromDestination;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) double penalty; // @synthesize penalty=_penalty;
- (void).cxx_destruct;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(_Bool)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 numThrottledReroutes:(unsigned long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

