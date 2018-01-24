//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKSkewingVectorTile.h>

#import "VKPolygonTile.h"

@class VKAnimation;

__attribute__((visibility("hidden")))
@interface VKVenueTile : VKSkewingVectorTile <VKPolygonTile>
{
    vector_d75ebb28 _venueGroups;
    vector_f7e56920 _venueFloorGroups;
    struct _retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKAnimation *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _animationForPitch;
    vector_746328be _venues;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
}

@property(readonly, nonatomic) vector_f7e56920 *venueFloorGroups; // @synthesize venueFloorGroups=_venueFloorGroups;
@property(readonly, nonatomic) float maxLayeringHeight; // @synthesize maxLayeringHeight=_maxLayeringHeight;
@property(readonly, nonatomic) float minLayeringHeight; // @synthesize minLayeringHeight=_minLayeringHeight;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)populateMetaData:(id)arg1;
- (void)buildExteriorWallMeshesWithDevice:(Device_9226c869 *)arg1 styleManager:(shared_ptr_a3c46825 *)arg2;
- (void)buildPolygonMeshesWithDevice:(Device_9226c869 *)arg1 triangulator:(id)arg2;
- (void)buildMeshesWithDevice:(Device_9226c869 *)arg1 styleManager:(shared_ptr_a3c46825 *)arg2 triangulator:(id)arg3;
@property(retain, nonatomic) VKAnimation *animationForPitch;
@property(readonly, nonatomic) const vector_746328be *venues;
@property(readonly, nonatomic) const vector_5d257bd0 *polygonGroups;
@property(readonly, nonatomic) const vector_d75ebb28 *venueGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(Device_9226c869 *)arg6;

@end

