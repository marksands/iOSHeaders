//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class CKContainer, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass>
{
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    _Bool _resumed;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)start;
- (void)_accountDidChange;
- (void)_accountChangeHandler;
- (void)dealloc;
- (void)cancel;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2;
- (id)createActivity;
- (id)initWithCKContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

