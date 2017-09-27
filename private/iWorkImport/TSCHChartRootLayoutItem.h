//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

#import "TSCHUnretainedParent.h"

@class NSDictionary, TSCHChartAbstractAreaLayoutItem, TSCHChartInfo, TSCHChartModel, TSCHLegendAreaLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent>
{
    TSCHChartInfo *mChartInfo;
    TSCHChartAbstractAreaLayoutItem *mChartArea;
    TSCHLegendAreaLayoutItem *mLegend;
    CDStruct_44ada6bf mLayoutSettings;
    struct CGRect mLegendInnerFrame;
    struct CGRect mChartInnerFrame;
    _Bool mInResize;
    struct CGSize mStartingSize;
    NSDictionary *mSeriesIndexedPieWedgeExplosions;
    TSCHChartModel *mChartModel;
}

@property(copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions; // @synthesize seriesIndexedPieWedgeExplosions=mSeriesIndexedPieWedgeExplosions;
- (void)clearParent;
- (void)invalidateTransientModel;
@property(nonatomic) unsigned long long dataSetIndex;
@property(readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (void)p_updatePieWedgeExplosionsFromModel;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (struct CGSize)startingSize;
- (_Bool)isInResize;
- (void)endResizeOperation;
- (void)updateSizeDuringResizeTo:(struct CGSize)arg1;
- (void)beginResizeWithStartingSize:(struct CGSize)arg1;
- (id)renderersWithRep:(id)arg1;
- (void)buildSubTree;
- (void)p_layoutOutward;
- (void)setChartBodySize:(struct CGSize)arg1;
- (void)p_layoutInward;
- (void)updateLayoutOffset;
- (void)updateLayoutSize;
- (void)setLegendSize:(struct CGSize)arg1;
- (void)setChartInnerFrame:(struct CGRect)arg1 legendInnerFrame:(struct CGRect)arg2;
- (struct CGRect)calcOverhangRect;
- (struct CGRect)calcDrawingRect;
- (void)clearAll;
@property(readonly, nonatomic) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property(readonly, nonatomic) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
- (id)model;
- (id)chartInfo;
- (void)setLayoutSettings:(CDStruct_44ada6bf)arg1;
- (CDStruct_44ada6bf)layoutSettings;
- (id)root;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithParent:(id)arg1;

@end

