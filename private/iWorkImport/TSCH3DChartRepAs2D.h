//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartRepAs2D : TSCHChartRep
{
    TSCHChartRep *m2DRep;
}

- (id)p_mutationsForConverting3DFillFromSeries:(id)arg1;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)p_update2DLayout;
- (void)addToSet:(id)arg1;
- (void)p_create2DRep;
- (id)p_layoutFrom3DInfo:(id)arg1 layout3D:(id)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

