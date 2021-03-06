//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallDirectoryManagerDefaultHostProtocol.h"
#import "CXCallDirectoryManagerMaintenanceHostProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)prepareStoreIfNecessary;
- (oneway void)compactStoreWithReply:(CDUnknownBlockType)arg1;
- (oneway void)synchronizeExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_nsExtensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

