//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController
{
    NSArray *_listeners;
}

+ (id)dictionaryForChat:(id)arg1;
+ (void)beginSimulatingDaemon;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *listeners; // @synthesize listeners=_listeners;
- (void).cxx_destruct;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (_Bool)isConnected;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;
- (void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4;

@end

