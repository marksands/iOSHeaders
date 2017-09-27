//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDPathPainter.h"
#import "TSSPreset.h"
#import "TSSPropertyCommandSerializing.h"
#import "TSSPropertyValueArchiving.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset>
{
}

+ (_Bool)tsch_hasAllResourcesForFill:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (void)registerSubclass:(Class)arg1;
+ (id)p_subclassRegistry;
@property(readonly, nonatomic) NSString *presetKind;
- (int)fillType;
- (id)referenceColor;
- (_Bool)drawsInOneStep;
- (_Bool)isClear;
- (_Bool)isNearlyWhite;
- (_Bool)isOpaque;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)shouldBeReappliedToCALayer:(id)arg1;
- (_Bool)canApplyToCALayerByAddingSublayers;
- (_Bool)canApplyToCALayer;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) _Bool tsch_hasAllResources; // @dynamic tsch_hasAllResources;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

