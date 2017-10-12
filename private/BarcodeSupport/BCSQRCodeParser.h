//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCSNotificationServiceConnection, BCSParsingServiceConnection;

@interface BCSQRCodeParser : NSObject
{
    BCSParsingServiceConnection *_parsingServiceConnection;
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

- (void).cxx_destruct;
- (void)stopQRCodeParsingSession;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1;
@property(readonly, nonatomic) BCSNotificationServiceConnection *notificationServiceConnection;
- (void)_parseMetadataObject:(id)arg1 reply:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)parseCodeFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseCodeFromImage:(struct CGImage *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_qrCodeFeatureFromImage:(struct CGImage *)arg1;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
