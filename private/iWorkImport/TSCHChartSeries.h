//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHPropertyMapsGeneratedProtocol.h"
#import "TSCHStyleOwnerCollaborationSupport.h"
#import "TSCHStyleOwning.h"
#import "TSCHUnretainedParent.h"

@class NSObject<TSCHUnretainedParent>, NSString, TSCHChartGridAdapter, TSCHChartModel, TSCHChartSeriesType, TSCHErrorBarData, TSCHTrendLineData, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mChartModel;
    unsigned long long mSeriesIndex;
    TSCHChartSeriesType *mSeriesType;
    TSUPointerKeyDictionary *mAxisTable;
    TSCHChartGridAdapter *mNameAdapter;
    unsigned long long mBarGapIndex;
    id <TSCHStyleActAlike> mStyle;
    id <TSCHStyleActAlike> mNonStyle;
    _Bool mStyleIsPrivate;
    TSCHTrendLineData *mTrendLineData;
    TSCHErrorBarData *mErrorBarData;
    NSObject<TSCHUnretainedParent> *mSeriesStorage;
    _Bool mIsFakeSeriesForHiddenDataExport;
}

+ (id)computedFillOrStroke:(id)arg1 forSeriesIndex:(unsigned long long)arg2 numberOfThemeSeries:(unsigned long long)arg3;
+ (id)computableProperties;
+ (id)stackedPercentageNumberFormat;
+ (id)defaultNumberFormat;
+ (unsigned char)styleOwnerPathType;
@property(nonatomic) _Bool isFakeSeriesForHiddenDataExport; // @synthesize isFakeSeriesForHiddenDataExport=mIsFakeSeriesForHiddenDataExport;
@property(nonatomic) unsigned long long barGapIndex; // @synthesize barGapIndex=mBarGapIndex;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property(readonly, nonatomic) NSObject<TSCHUnretainedParent> *seriesStorage; // @synthesize seriesStorage=mSeriesStorage;
@property(nonatomic) TSCHChartSeriesType *seriesType; // @synthesize seriesType=mSeriesType;
@property(readonly, nonatomic) TSCHChartModel *model; // @synthesize model=mChartModel;
- (id)p_seriesNonStyleOrDefaultNonStyle;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (void)setNonStyle:(id)arg1;
- (id)nonstyle;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)context;
- (id)chartInfo;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(_Bool)arg2;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (void)p_generateComputedProperty:(int)arg1 objectValue:(id *)arg2 intValue:(int *)arg3 floatValue:(float *)arg4;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)p_representativeThemeSeries;
- (_Bool)p_seriesIndexWithinThemeStyleCount;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
- (void)modelSyncSetStyle:(id)arg1;
- (void)modelSyncSetNonStyle:(id)arg1;
- (unsigned int)valueLabelPosition;
- (id)valueLabelStringForValueIndex:(unsigned long long)arg1;
- (id)seriesNameStringForValueIndex:(unsigned long long)arg1;
- (id)formattedValueLabelStringForValueIndex:(unsigned long long)arg1;
- (id)axisTypesForValueLabelString;
- (_Bool)hasCustomFormatForGridValueType:(int)arg1;
- (int)adjustedNumberFormatType;
- (int)gridValueType;
- (id)customFormatForGridValueType:(int)arg1;
- (void)resetSeriesStorage;
- (void)setSeriesStorage:(id)arg1;
- (_Bool)renderSeriesForClass:(Class)arg1;
- (id)multiDataValueEnumeratorForAxisID:(id)arg1;
- (void)setValue:(id)arg1 forAxisID:(id)arg2 index:(unsigned long long)arg3;
- (id *)valuesForAxis:(id)arg1 indexes:(struct _NSRange)arg2;
- (id)valueForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id *)valuesForAxis:(id)arg1 indexes:(struct _NSRange)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueForAxis:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2;
- (id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (unsigned long long)multiDataSetIndexForAxisID:(id)arg1;
- (unsigned long long)multiDataSetIndexForAxis:(id)arg1;
- (void)invalidateCacheDataForSynchronization;
- (void)clearAxisIDs;
- (void)setGridAdapterForName:(id)arg1;
- (void)setGridAdapter:(id)arg1 forAxisType:(int)arg2;
- (void)setAxisID:(id)arg1 forAxisType:(int)arg2;
- (id)axisForAxisType:(int)arg1;
- (id)axisIDForAxisType:(int)arg1;
- (unsigned long long)numberOfValues;
- (unsigned long long)multiDataSetIndex;
- (_Bool)isMultiData;
@property(readonly, nonatomic) TSCHErrorBarData *errorBarData;
@property(readonly, nonatomic) NSString *trendLineLegendText;
@property(readonly, nonatomic) _Bool showTrendLineLegendText;
@property(readonly, nonatomic) TSCHTrendLineData *trendLineData;
- (id)p_axisStorageForType:(int)arg1 create:(_Bool)arg2;
@property(retain, nonatomic) NSString *name;
- (id)drawableInfo;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 index:(unsigned long long)arg2;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (double)effectiveLabelExplosion;
- (_Bool)floatValueForLabelExplosion:(float *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

