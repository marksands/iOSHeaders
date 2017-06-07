//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDBugSessionConfiguration, DEDDevice, NSArray, NSDictionary, NSError, NSString;

@protocol DEDXPCProtocol <NSObject>
- (void)didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;
- (void)successPINForDevice:(DEDDevice *)arg1;
- (void)tryPIN:(NSString *)arg1 forDevice:(DEDDevice *)arg2;
- (void)promptPINForDevice:(DEDDevice *)arg1;
- (void)startPairSetupForDevice:(DEDDevice *)arg1;
- (void)gotDeviceUpdate:(DEDDevice *)arg1;
- (void)didDiscoverDevices:(NSArray *)arg1;
- (void)stopDeviceDiscovery;
- (void)discoverAllAvailableDevices;
- (void)pong;
- (void)ping;

@optional
- (void)cancelSession:(NSString *)arg1;
- (void)didCommitSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(NSString *)arg3;
- (void)didAdoptFilesWithError:(NSError *)arg1 forSession:(NSString *)arg2;
- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 inSession:(NSString *)arg3;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)finishedDiagnosticWithIdentifier:(NSString *)arg1 result:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)deviceSupportsDiagnosticExtensions:(NSArray *)arg1 session:(NSString *)arg2;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pongSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
@end

