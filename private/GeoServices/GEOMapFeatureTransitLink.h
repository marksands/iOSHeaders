//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine
{
    CDStruct_32d7d945 *_transitLink;
    unsigned long long _lineIndex;
}

- (CDStruct_6e3f967a *)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long *)arg2;
- (id)_containingTile;
@property(readonly, nonatomic) NSString *internalLineName;
- (void)dealloc;
- (id)initWithTransitLink:(CDStruct_32d7d945 *)arg1 lineIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_32d7d945 *transitLink;
@property(readonly, nonatomic) struct _GEOTileKey tileKey;

@end

