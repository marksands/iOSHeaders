//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeBuilder : GEOMapRequest
{
    _Bool _buildAhead;
    _Bool _buildBehind;
    Matrix_8746f91e _firstTilePoint;
    Matrix_8746f91e _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    CDUnknownBlockType _edgeHandler;
    unordered_set_deaadd3a _tileKeysSeen;
    _Bool _searchDirection;
    unsigned long long _buildDirection;
}

@property(nonatomic) unsigned long long buildDirection; // @synthesize buildDirection=_buildDirection;
@property(copy, nonatomic) CDUnknownBlockType edgeHandler; // @synthesize edgeHandler=_edgeHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (id)_lastTile;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (Matrix_8746f91e)_firstPoint;
- (_Bool)_shouldFindEdgeBehind;
- (_Bool)_shouldFindEdgeAhead;
- (_Bool)_findEdgeBehindInTile:(id)arg1;
- (_Bool)_findEdgeAheadInTile:(id)arg1;
- (void)_buildCompleteEdge;
- (unsigned long long)_maxTileCount;
- (_Bool)_edgeStart:(const Matrix_8746f91e *)arg1 end:(const Matrix_8746f91e *)arg2 connectsTo:(const Matrix_8746f91e *)arg3;
- (_Bool)_pointConnects:(const Matrix_8746f91e *)arg1 rect:(const CDStruct_90e2a262 *)arg2 to:(const CDStruct_c3b9c2ee *)arg3;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 findAhead:(_Bool)arg3;
- (void)buildEdge:(CDUnknownBlockType)arg1;
- (_Bool)_findNextEdge;
- (_Bool)_findEdgeBehind;
- (_Bool)_findEdgeAhead;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (id)initWithMap:(id)arg1;

@end

