//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
{
}

+ (struct TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_44ada6bf)arg2;
+ (_Bool)isHorizontalChart;
+ (_Bool)isStacked;
+ (id)chartSeriesType;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;

@end

