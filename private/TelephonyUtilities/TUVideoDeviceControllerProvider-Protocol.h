//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, NSString, VideoAttributes;

@protocol TUVideoDeviceControllerProvider <NSObject>
@property(nonatomic) __weak id <TUVideoDeviceControllerProviderDelegate> delegate;
@property(copy, nonatomic) VideoAttributes *localVideoAttributes;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(readonly, copy, nonatomic) NSString *localCameraUID;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalScreenAttributes:(VideoAttributes *)arg1;
- (VideoAttributes *)localScreenAttributesForVideoAttributes:(VideoAttributes *)arg1;
- (void)stopPreview;
- (void)pausePreview;
- (void)startPreview;
- (void)setLocalVideoLayer:(CALayer *)arg1 front:(_Bool)arg2;
- (CALayer *)localVideoLayer:(_Bool)arg1;
- (void)setLocalCameraWithUID:(NSString *)arg1;
@end

