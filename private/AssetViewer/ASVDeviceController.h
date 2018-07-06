//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

@interface ASVDeviceController : NSObject
{
    CALayer *_deviceLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_holeLayer;
    CALayer *_shineLayer;
    CALayer *_shineInnerLayer;
    double _aspectRatio;
}

@property(readonly, nonatomic) CALayer *shineLayer; // @synthesize shineLayer=_shineLayer;
- (void).cxx_destruct;
- (void)update:(double)arg1 visible:(double)arg2 layer:(id)arg3;
- (id)initWithDeviceMaskImage:(id)arg1;
@property(nonatomic) float opacity;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) CALayer *holeLayer;
@property(readonly, nonatomic) CALayer *deviceLayer;

@end

