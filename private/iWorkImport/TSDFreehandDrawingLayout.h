//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDGroupLayout.h>

@class TSDFreehandDrawingInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingLayout : TSDGroupLayout
{
    _Bool _updatingOpacity;
    double _dynamicOpacity;
}

@property(nonatomic, getter=p_isUpdatingOpacity) _Bool p_updatingOpacity; // @synthesize p_updatingOpacity=_updatingOpacity;
@property(nonatomic) double p_dynamicOpacity; // @synthesize p_dynamicOpacity=_dynamicOpacity;
@property(readonly, nonatomic) double opacity;
- (id)p_sizeEnforcingChild;
- (struct CGRect)computeBoundsForStandardKnobs;
- (id)descendentWrappables;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;
- (id)additionalInfosForChildLayouts;
@property(readonly, nonatomic) _Bool shouldSpacerShapeProvideSpace;
@property(readonly, nonatomic) TSDFreehandDrawingInfo *freehandInfo;

@end

