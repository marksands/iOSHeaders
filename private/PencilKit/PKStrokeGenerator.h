//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKInputProvider.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, PKStroke;

@interface PKStrokeGenerator : NSObject <PKInputProvider>
{
    vector_58517711 _drawPoints;
    vector_03cfcf00 _outputPoints;
    long long _outputImmutableCount;
    _Bool _inputHasChanged;
    NSObject<OS_dispatch_queue> *_inputQueue;
    PKStroke *_currentStroke;
    long long _currentInputType;
    long long _immutableCount;
    vector_58517711 _updatedDrawPoints;
    _Bool _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    _Bool _useRuler;
    _Bool _isSnappedToRulerTopSide;
    _Bool _canSnapToRuler;
    _Bool _isSnappedToRuler;
    double _rulerWidth;
    double _strokeMaxForce;
    NSObject<OS_dispatch_queue> *_outputQueue;
    double _touchSensitivity;
    struct PKInputProviderInitial *_inputProvider;
    struct PKPixelSmoothingFilter *_pixelSmoothingFilter;
    struct PKPointReductionFilter *_pointReductionFilter;
    struct PKStartHookFilter *_startHookFilter;
    struct PKEndHookFilter *_endHookFilter;
    struct PKVelocityCalculationFilter *_velocityFilter;
    struct PKInputSmoother *_inputSmoother;
    struct PKInputToOutputFilter *_inputToOutputFilter;
    struct PKStartCapsFilter *_startCapFilter;
    struct PKAzimuthFilter *_azimuthFilter;
    struct PKEndCapsFilter *_endCapFilter;
    struct PKRulerExtremaFilter *_rulerExtremaFilter;
    struct PKEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct PKCompressionFilter *_compressionFilter;
    struct PKDecompressionFilter *_decompressionFilter;
    double _eraserIndicatorAlpha;
    double _inputScale;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

+ (vector_58517711)inputPointsFromPath:(struct CGPath *)arg1;
+ (void)initialize;
@property(nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property _Bool isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
@property(nonatomic) struct PKDecompressionFilter *decompressionFilter; // @synthesize decompressionFilter=_decompressionFilter;
@property(nonatomic) struct PKCompressionFilter *compressionFilter; // @synthesize compressionFilter=_compressionFilter;
@property(nonatomic) struct PKEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) struct PKRulerExtremaFilter *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) struct PKEndCapsFilter *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) struct PKAzimuthFilter *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) struct PKStartCapsFilter *startCapFilter; // @synthesize startCapFilter=_startCapFilter;
@property(nonatomic) struct PKInputToOutputFilter *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) struct PKInputSmoother *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) struct PKVelocityCalculationFilter *velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) struct PKEndHookFilter *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) struct PKStartHookFilter *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) struct PKPointReductionFilter *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) struct PKPixelSmoothingFilter *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property(nonatomic) struct PKInputProviderInitial *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) _Bool canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) _Bool isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) _Bool useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)strokeFromPath:(struct CGPath *)arg1 ink:(id)arg2 inputScale:(double)arg3;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEndedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)addPoint:(CDStruct_f17e9403)arg1;
- (void)addPoints:(vector_58517711)arg1;
- (void)removePredictedTouches;
- (void)updateImmutableCount;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (long long)fetchFilteredPointsFromIndex:(long long)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (struct _PKStrokePoint)outputPoint:(CDStruct_f17e9403)arg1 baseValues:(struct _PKStrokePoint)arg2;
- (struct _PKStrokePoint)outputCurrentStrokePoint:(CDStruct_f17e9403)arg1;
- (void)reset;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_58517711 *)arg2;
- (vector_58517711 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (vector_03cfcf00 *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (PKInputProvider_28cf270a *)outputFilter;
@property(readonly) _Bool lastPointIsMasked;
- (void)updateRulerSnapping;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (void)maskToRuler;
- (void)snapToRuler;
- (_Bool)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (void)allowSnappingToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (void)drawingBeganWithStroke:(id)arg1 inputType:(long long)arg2 inputScale:(double)arg3 start:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

