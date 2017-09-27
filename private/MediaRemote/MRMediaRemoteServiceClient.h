//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRAVRoutingClientController, MRNotificationClient, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    void *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSString *_preparedBundleID;
    struct MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
}

+ (id)sharedServiceClient;
@property(readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property(readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *preparedBundleID;
@property(nonatomic) void *activePlayerPath;
- (void)_onQueue_setActivePlayerPath:(void *)arg1;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
- (void)dealloc;
- (id)init;

@end

