//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject
{
    GEOMapFeatureAccess *_mapFeatureAccess;
    _Bool _useRawLocations;
}

@property(nonatomic) _Bool useRawLocations; // @synthesize useRawLocations=_useRawLocations;
- (void).cxx_destruct;
- (id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2;
- (id)matchLocation:(id)arg1 forTransportType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

