//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureAccessFinder : NSObject
{
    _Bool _allowNetwork;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool allowNetwork; // @synthesize allowNetwork=_allowNetwork;
- (void).cxx_destruct;
- (id)init;
- (_Bool)_boundingCircle:(const Sphere_dfb3aa99 *)arg1 intersectsPoints:(CDStruct_6e3f967a *)arg2 pointCount:(unsigned long long)arg3;
- (_Bool)_boundingCircle:(const Sphere_dfb3aa99 *)arg1 intersectsTransitLink:(CDStruct_32d7d945 *)arg2;
- (_Bool)_boundingCircle:(const Sphere_dfb3aa99 *)arg1 intersectsFeature:(CDStruct_a2ef2718 *)arg2;
- (Sphere_dfb3aa99)_boundingCircleWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 inTile:(struct _GEOTileKey)arg3;

@end

