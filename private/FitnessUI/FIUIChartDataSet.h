//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FIUIChartDataSet : NSObject
{
    NSArray *_points;
    NSArray *_labels;
    id <FIUIChartDataSetDataSource> _dataSource;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <FIUIChartDataSetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)reloadData;
- (id)labelsForSet;
- (id)points;
- (id)minXValue;
- (id)maxXValue;
- (id)minYValue;
- (id)maxYValue;
- (id)description;

@end

