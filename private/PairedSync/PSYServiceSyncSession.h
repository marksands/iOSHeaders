//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSUUID, PSYSyncCoordinator;
@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;

@interface PSYServiceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isComplete;
    _Bool _supportsMigrationSync;
    _Bool _complete;
    NRDevice *_pairedDevice;
    NSUUID *_sessionIdentifier;
    PSYSyncCoordinator *_syncCoordinator;
    unsigned long long _switchID;
    unsigned long long _syncSessionType;
    id <PSYServiceSyncSessionDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) __weak id <PSYServiceSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(nonatomic) unsigned long long switchID; // @synthesize switchID=_switchID;
@property(nonatomic) __weak PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
- (void).cxx_destruct;
- (void)reportProgress:(double)arg1;
- (void)syncDidFailWithError:(id)arg1;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (id)initWithQueue:(id)arg1 supportsMigrationSync:(_Bool)arg2;

@end

