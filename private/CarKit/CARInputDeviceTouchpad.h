//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarKit/CARInputDevice.h>

@interface CARInputDeviceTouchpad : CARInputDevice
{
    _Bool _characterRecognitionSupported;
    double _sensitivity;
    unsigned long long _supportedFeedbackTypes;
    id <CARInputDeviceTouchpadDelegate> _delegate;
    struct CGSize _physicalSize;
}

+ (struct CGSize)physicalSizeForTouchpadWithDigitizerProperties:(id)arg1;
@property(nonatomic) __weak id <CARInputDeviceTouchpadDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long supportedFeedbackTypes; // @synthesize supportedFeedbackTypes=_supportedFeedbackTypes;
@property(readonly, nonatomic) _Bool characterRecognitionSupported; // @synthesize characterRecognitionSupported=_characterRecognitionSupported;
@property(readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(nonatomic) double sensitivity; // @synthesize sensitivity=_sensitivity;
- (void).cxx_destruct;
- (void)_setDelegate:(id)arg1;
- (id)_initWithSupportedHapticTypes:(unsigned long long)arg1 physicalSize:(struct CGSize)arg2 characterRecognitionSupported:(_Bool)arg3 senderID:(unsigned long long)arg4 UUID:(id)arg5;
- (_Bool)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient *)arg1;
- (struct CGSize)_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)performFeedbackOfType:(unsigned long long)arg1;
- (void)updateSettingsWithSettings:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool feedbackSupported;
- (id)initWithServiceClient:(struct __IOHIDServiceClient *)arg1 UUID:(id)arg2 settings:(id)arg3 delegate:(id)arg4;

@end

