//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject
{
    AVCaptureInputInternal *_inputInternal;
}

+ (void)initialize;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (struct OpaqueCMClock *)clock;
- (void)setSession:(id)arg1;
- (id)session;
@property(readonly, nonatomic) NSArray *ports;
- (void)dealloc;
- (id)initSubclass;

@end

