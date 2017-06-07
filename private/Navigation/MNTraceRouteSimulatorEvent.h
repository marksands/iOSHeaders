//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface MNTraceRouteSimulatorEvent : NSObject
{
    double _timestamp;
    GEOLocation *_location;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLocation:(id)arg1;

@end

