//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSError, NSManagedObjectID, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, PLCPLDownloadContext;

@interface PHCloudResourceRequest : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_downloadFinishedSemaphore;
    CDUnknownBlockType _progressHandler;
    PLCPLDownloadContext *_downloadContext;
    NSString *_proposedTaskIdentifier;
    double _lastProgress;
    _Bool _completed;
    _Bool _downloadIsTransient;
    int _requestID;
    NSManagedObjectID *_objectID;
    unsigned long long _cloudResourceType;
    NSData *_transientResourceData;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *transientResourceData; // @synthesize transientResourceData=_transientResourceData;
@property(readonly, nonatomic) _Bool downloadIsTransient; // @synthesize downloadIsTransient=_downloadIsTransient;
@property(readonly, nonatomic) unsigned long long cloudResourceType; // @synthesize cloudResourceType=_cloudResourceType;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)_updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 connectionWasLost:(_Bool)arg2;
- (void)updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1;
- (void)updateResourceRequestStatusForLostConnection;
@property(readonly, nonatomic) NSString *cplTaskIdentifier;
- (id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 downloadIsTransient:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;

@end

