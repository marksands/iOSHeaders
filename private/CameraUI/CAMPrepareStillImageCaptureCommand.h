//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand
{
    unsigned long long __systemTimeOfCapture;
}

@property(readonly, nonatomic) unsigned long long _systemTimeOfCapture; // @synthesize _systemTimeOfCapture=__systemTimeOfCapture;
- (void)executeWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSystemTime:(unsigned long long)arg1;

@end

