//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFMessageReceiver.h"
#import "LSApplicationWorkspaceObserverProtocol.h"

@class HMDApplicationMonitor, HMFMessageDispatcher, LSApplicationWorkspace, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDApplicationRegistry : HMFObject <HMFMessageReceiver, LSApplicationWorkspaceObserverProtocol>
{
    HMDApplicationMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_messageDispatcher;
    LSApplicationWorkspace *_appWorkspace;
    NSMutableDictionary *_applications;
}

@property(retain, nonatomic) NSMutableDictionary *applications; // @synthesize applications=_applications;
@property(retain, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property(nonatomic) __weak HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDApplicationMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)_stopObservingAppUninstalls;
- (void)_startObservingAppUninstalls;
- (void)applicationsDidUninstall:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)processTerminated:(id)arg1;
- (void)stopMonitoringConnection:(id)arg1;
- (void)startMonitoringConnection:(id)arg1;
- (id)ignoredForegroundAppBundleIdentifiers;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

