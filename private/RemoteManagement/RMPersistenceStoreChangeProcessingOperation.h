//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

@class NSPersistentStore;

@interface RMPersistenceStoreChangeProcessingOperation : CATOperation
{
    NSPersistentStore *_store;
    id <RMPersistenceControllerProtocol> _persistenceController;
    id <RMPersistenceStoreChangeProcessingOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <RMPersistenceStoreChangeProcessingOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <RMPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)_handlePersistenceStoreChanges:(id)arg1 forStore:(id)arg2;
- (id)_changeTypeForChange:(id)arg1;
- (id)_entityGroupForChange:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithPersistenceController:(id)arg1 store:(id)arg2;

@end

