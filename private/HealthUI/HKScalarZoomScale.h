//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKZoomScale.h"

@class NSString;

@interface HKScalarZoomScale : NSObject <HKZoomScale>
{
}

- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (id)unitZoomScaleValueRange;
- (double)zoomScaleForRange:(struct HKRange)arg1;
- (long long)zoomForZoomScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
