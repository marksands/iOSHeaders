//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKValueRange;

@protocol HKZoomScale <NSObject>
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (HKValueRange *)unitZoomScaleValueRange;
- (double)zoomScaleForRange:(struct HKRange)arg1;
- (long long)zoomForZoomScale:(double)arg1;
@end

