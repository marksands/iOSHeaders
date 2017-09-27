//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "PUTiltWheelDataSource.h"

@class NSString, PUTiltWheel, PUTiltWheelTriangleView, PXUISnappingController;

@interface PUTiltWheelControl : UIControl <PUTiltWheelDataSource>
{
    _Bool __needsDataReload;
    int _wheelOrientation;
    double _tiltAngle;
    double _maxTiltAngle;
    double _minTiltAngle;
    PUTiltWheel *__tiltWheel;
    PUTiltWheelTriangleView *__triangleView;
    PXUISnappingController *__snappingController;
    struct CGPoint __panPreviousPoint;
}

@property(retain, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController; // @synthesize _snappingController=__snappingController;
@property(nonatomic, setter=_setNeedsDataReload:) _Bool _needsDataReload; // @synthesize _needsDataReload=__needsDataReload;
@property(nonatomic, setter=_setPanPreviousPoint:) struct CGPoint _panPreviousPoint; // @synthesize _panPreviousPoint=__panPreviousPoint;
@property(retain, nonatomic, setter=_setTriangleView:) PUTiltWheelTriangleView *_triangleView; // @synthesize _triangleView=__triangleView;
@property(retain, nonatomic, setter=_setTiltWheel:) PUTiltWheel *_tiltWheel; // @synthesize _tiltWheel=__tiltWheel;
@property(nonatomic) int wheelOrientation; // @synthesize wheelOrientation=_wheelOrientation;
@property(nonatomic) double minTiltAngle; // @synthesize minTiltAngle=_minTiltAngle;
@property(nonatomic) double maxTiltAngle; // @synthesize maxTiltAngle=_maxTiltAngle;
@property(nonatomic) double tiltAngle; // @synthesize tiltAngle=_tiltAngle;
- (void).cxx_destruct;
- (double)_angleBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 measuredFrom:(struct CGPoint)arg3;
- (double)_tiltAngleForDraggedRotation:(double)arg1;
- (struct CGAffineTransform)_transformForTiltAngle:(double)arg1;
- (void)_setTiltAngleFromUserInteraction:(double)arg1;
- (void)setTiltAngle:(double)arg1 animated:(_Bool)arg2;
- (int)tiltWheelOrientation:(id)arg1;
- (unsigned long long)tiltWheelNumericIndicatorStep:(id)arg1;
- (unsigned long long)tiltWheelMarkedIndicatorStep:(id)arg1;
- (long long)tiltWheelMaximumIndicatedDegree:(id)arg1;
- (long long)tiltWheelMinimumIndicatedDegree:(id)arg1;
- (double)_tiltWheelSize;
- (void)_updateTiltWheelTransform;
- (void)_updateTriangleConstraintsIfNeeded;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (double)_circumferenceVelocityInPan:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

