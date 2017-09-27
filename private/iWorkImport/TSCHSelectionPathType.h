//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHSelectionPathType : NSObject <NSCopying>
{
    NSString *mType;
    NSString *mName;
}

+ (id)selectionPathTypeWithType:(id)arg1 name:(id)arg2;
+ (id)referenceLineValueLabelType;
+ (id)referenceLineLabelType;
+ (id)referenceLineType;
+ (id)gridLineType;
+ (id)axisLineType;
+ (id)chartBodyType;
+ (id)trendLineR2Type;
+ (id)trendLineEquationType;
+ (id)trendLineType;
+ (id)errorBarType;
+ (id)legendTrendLineNameType;
+ (id)legendSeriesNameType;
+ (id)legendType;
+ (id)seriesValueLabelType;
+ (id)seriesSymbolType;
+ (id)seriesLabelType;
+ (id)seriesType;
+ (id)axisLabelsType;
+ (id)axisTitleType;
+ (id)categoryAxisType;
+ (id)valueAxisType;
+ (id)chartDataSetNameType;
+ (id)chartTitleType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
- (void)saveToArchive:(struct ChartSelectionPathTypeArchive *)arg1;
- (id)initWithArchive:(const struct ChartSelectionPathTypeArchive *)arg1;
- (_Bool)canApplyChartStyleWithDescription:(id)arg1;
- (_Bool)canApplyShapeStyle;
- (_Bool)canApplyParagraphStyle;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)init;

@end

