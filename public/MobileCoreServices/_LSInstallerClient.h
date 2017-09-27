//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSInstallationServiceCallbackProtocol.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol>
{
    _Bool _uninstaller;
    unsigned long long _operationType;
    NSString *_operationTypeString;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    NSString *_bundleID;
    NSURL *_bundleURL;
    NSDictionary *_options;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _callbacksCompleteCondMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _callbacksCompleteCond;
    _Bool _allCallbacksDeleviered;
}

+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool allCallbacksDeleviered; // @synthesize allCallbacksDeleviered=_allCallbacksDeleviered;
@property(nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=isUninstaller) _Bool uninstaller; // @synthesize uninstaller=_uninstaller;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *operationTypeString; // @dynamic operationTypeString;
- (void)_invalidate;
- (void)_waitForAllCallbackMessagesToExecute;
- (void)callbackDeliveryComplete;
- (void)updateCallbackWithData:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

