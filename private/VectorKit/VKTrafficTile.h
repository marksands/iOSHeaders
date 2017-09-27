//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class NSData, VKTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKTrafficTile : VKVectorTile
{
    struct unique_ptr<md::PilledTrafficLayer, std::__1::default_delete<md::PilledTrafficLayer>> _pilledTrafficLayer;
    struct unique_ptr<md::SolidTrafficLayer, std::__1::default_delete<md::SolidTrafficLayer>> _solidTrafficLayer;
    struct unique_ptr<md::CasedTrafficLayer, std::__1::default_delete<md::CasedTrafficLayer>> _casedTrafficLayer;
    struct _GEOTileKey _dataKey;
    NSData *_data;
    VKTileKeyMap *_dynamicTiles;
    struct unique_ptr<md::TrafficStream, std::__1::default_delete<md::TrafficStream>> _trafficStream;
    shared_ptr_7444c9fa _trafficData;
    struct TrafficMeshStyle _builtTrafficStyle;
    struct FeatureAttributeSet _styleAttributes;
}

@property(readonly, nonatomic) struct FeatureAttributeSet *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) const shared_ptr_7444c9fa *trafficSkeletonTile; // @synthesize trafficSkeletonTile=_trafficData;
@property(readonly, nonatomic) VKTileKeyMap *dynamicTiles; // @synthesize dynamicTiles=_dynamicTiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)builtRenderingData;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withLoader:(struct Loader *)arg2 trafficMeshStyle:(const struct TrafficMeshStyle *)arg3;
- (void)buildTrafficWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle *)arg2 addSegment:(CDUnknownBlockType)arg3;
- (void)buildTrafficStreamWithRoadData:(id)arg1 trafficMeshStyle:(const struct TrafficMeshStyle *)arg2;
- (void)setupStyleAttributesWithRoadData:(id)arg1;
- (void)buildSkeletonMap;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3 styleManager:(shared_ptr_a3c46825)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device_9226c869 *)arg7;
@property(readonly, nonatomic) struct CasedTrafficLayer *casedTrafficLayer;
@property(readonly, nonatomic) struct SolidTrafficLayer *solidTrafficLayer;
@property(readonly, nonatomic) struct PilledTrafficLayer *pilledTrafficLayer;
@property(nonatomic) const struct _GEOTileKey *dataKey;
@property(readonly, nonatomic) const struct TrafficStream *trafficStream;
- (const struct TrafficMeshStyle *)builtTrafficStyle;

@end

