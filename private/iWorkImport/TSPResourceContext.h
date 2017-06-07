//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSSet, TSPDocumentResourceCache, TSPDocumentResourceLegacyRegistry, TSPDocumentResourceRegistry;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPResourceContext : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
    TSPDocumentResourceCache *_documentResourceCache;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    TSPDocumentResourceLegacyRegistry *_sageDocumentResourceLegacyRegistry;
    TSPDocumentResourceLegacyRegistry *_tangierDocumentResourceLegacyRegistry;
}

@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry; // @synthesize tangierDocumentResourceLegacyRegistry=_tangierDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry; // @synthesize sageDocumentResourceLegacyRegistry=_sageDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry; // @synthesize documentResourceRegistry=_documentResourceRegistry;
@property(readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache; // @synthesize documentResourceCache=_documentResourceCache;
- (void).cxx_destruct;
- (id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (void)removeResourceRequests:(id)arg1;
- (void)accessQueue_addResourceRequest:(id)arg1;
- (void)addResourceRequests:(id)arg1;
@property(readonly) NSSet *resourceRequests;
- (id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4;
- (id)init;

@end

