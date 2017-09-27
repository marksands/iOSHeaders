//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CXCallDirectoryManager, NSObject<OS_dispatch_queue>;

@interface CXCallDirectoryExtensionManager : NSObject
{
    int _storeExtensionsChangedNotifyToken;
    CXCallDirectoryManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryExtensionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(nonatomic) int storeExtensionsChangedNotifyToken; // @synthesize storeExtensionsChangedNotifyToken=_storeExtensionsChangedNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CXCallDirectoryManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1 forExtension:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_extensionsChanged;
- (void)extensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginObservingExtensions;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

