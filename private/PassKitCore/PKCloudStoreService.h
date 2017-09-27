//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKXPCService;

@interface PKCloudStoreService : NSObject
{
    PKXPCService *_remoteService;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)fetchAndStoreRecordsForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

