//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DBarChartAppearance.h"
#import "TSCHUnretainedParent.h"

@class TSCH3DChartBarElementProperties;

__attribute__((visibility("hidden")))
@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCHUnretainedParent, TSCH3DBarChartAppearance>
{
    TSCH3DChartBarElementProperties *mProperties;
}

+ (struct BarExtrusionDetails)defaultDetails;
+ (int)shapeType;
- (_Bool)isCircular;
- (float)depthForScene:(id)arg1;
- (float)chartMinZForScene:(id)arg1;
- (float)signedValueForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (float)maxValueForSeries:(long long)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

