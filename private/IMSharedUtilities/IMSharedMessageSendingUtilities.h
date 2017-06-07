//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMSharedMessageSendingUtilities : NSObject
{
    long long _serviceAvailability;
}

+ (void)_setupAccountMonitor;
+ (id)sharedInstance;
+ (void)initialize;
@property long long serviceAvailability; // @synthesize serviceAvailability=_serviceAvailability;
- (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
- (long long)_maxMMSMessageByteCount;
- (long long)_maxMMSAttachmentCount;
- (_Bool)_isiMessageSupported;
- (_Bool)isSupportedAttachmentUTI:(id)arg1;
- (_Bool)isiMessageEnabled;
- (_Bool)isMMSEnabled;
- (_Bool)canSendText;
- (id)_managedConfigAppWhitelist;
- (void)_updateServiceAvailability;
- (_Bool)_canSendText;
- (_Bool)_hasSMSCapability;

@end

